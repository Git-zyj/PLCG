/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (min((min((~1), 4405496868252126233)), (max(14041247205457425382, var_7))));
    var_17 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((~((-(max((arr_3 [i_0] [i_0]), var_5)))))))));
                                arr_14 [i_0 + 1] [i_1] [i_4] [i_3 + 1] [i_4] = (min(((var_15 ? var_2 : (arr_7 [i_0 + 1] [i_1] [i_1]))), (min(var_5, var_10))));
                            }
                        }
                    }
                    var_19 ^= ((-(((!(((~(arr_6 [i_0 + 1] [i_1] [i_2])))))))));
                }
            }
        }
    }
    var_20 = (((((var_2 ? var_14 : 10585))) ? (var_14 | var_15) : ((var_14 ? (min(var_4, var_15)) : ((var_2 ? var_5 : 2054091621))))));
    var_21 = (((2240875685 ? (max(var_4, var_2)) : (min(var_8, var_7)))));
    #pragma endscop
}
