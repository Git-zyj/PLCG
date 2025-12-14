/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (!var_3)));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_14 = ((((max((arr_2 [i_1 - 2] [i_1 + 2]), (arr_2 [i_1 - 2] [i_1 + 3])))) ? var_0 : var_7));
                    var_15 = (max(var_15, var_6));
                }
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}
