/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_5;
    var_15 = (max(var_12, (max(-var_10, var_10))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_16 *= 609874853;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_17 += 26;
                    var_18 = (arr_6 [i_1 - 1]);
                    var_19 &= (((arr_3 [i_0 - 3] [4]) ? 4721870859484734505 : var_13));
                    var_20 = (min(var_20, (~4721870859484734505)));
                }
                arr_7 [i_0] = -118;
                var_21 = (min(var_21, 18));
            }
        }
    }
    var_22 = var_7;
    #pragma endscop
}
