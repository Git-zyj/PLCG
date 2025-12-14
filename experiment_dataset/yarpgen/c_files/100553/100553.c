/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((var_7 ? -var_5 : (var_8 != var_6)))))));
    var_14 = ((65535 ? (max((~1186), ((var_4 ? 2115985686 : 0)))) : ((~(var_0 | var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = ((((max((var_6 | 11), (!13648579950124490497)))) ? ((-(arr_8 [i_0 - 1] [i_0]))) : ((((arr_4 [i_2] [i_0] [i_0]) <= ((-(arr_8 [i_0] [i_1]))))))));
                    arr_10 [i_0] [i_1] [i_2] = ((~((~((0 ? var_7 : 248))))));
                    var_15 = (min(var_15, (2115985683 | 64356)));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        arr_15 [i_3] [i_3 + 2] = ((var_5 <= (var_5 >= var_3)));
        arr_16 [i_3] = ((var_7 ? (var_6 | var_3) : ((var_7 ? (arr_4 [i_3] [i_3] [i_3 - 1]) : var_4))));
        var_16 = var_9;
        var_17 = ((~-642765362) ? var_7 : (((arr_13 [i_3]) & var_7)));
    }
    #pragma endscop
}
