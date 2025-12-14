/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (max(43, 77));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = var_12;
                    var_17 = var_8;
                    var_18 -= ((var_4 > ((202 ? (!13) : var_2))));
                    arr_6 [i_1] [i_1] [i_0] = (max((arr_5 [i_2] [i_1] [i_0]), (arr_5 [i_0] [i_1] [i_1])));
                    var_19 = (arr_5 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
