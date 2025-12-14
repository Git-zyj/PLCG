/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((var_2 ? var_0 : (((((var_9 ? var_8 : var_8))) ? ((var_3 ? var_5 : var_9)) : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_11 = (min(var_11, ((((((var_2 ? var_4 : var_0))) ? ((var_3 ? var_1 : var_8)) : ((var_6 ? var_1 : var_9)))))));
                            var_12 *= ((((((((2950385739499980006 ? 4204183021 : var_9))) ? 4873697690589759718 : 2814096101))) ? 90784287 : ((var_8 ? 1 : var_8))));
                            arr_12 [1] [i_1] = (var_5 ? var_7 : var_1);
                            var_13 = ((((((((var_2 ? var_1 : var_9))) ? ((var_9 ? var_7 : var_7)) : var_0))) ? ((var_2 ? var_8 : var_2)) : ((((((var_7 ? var_2 : var_0))) ? var_7 : var_0)))));
                            var_14 = (max(var_14, (((((((((var_7 ? var_5 : var_8))) ? var_8 : var_2))) ? (((((var_5 ? var_8 : var_9))) ? var_8 : (((var_0 ? var_2 : var_3))))) : var_3)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_15 = var_6;
                                arr_20 [i_1] = var_5;
                            }
                        }
                    }
                }
                var_16 |= (((((var_7 ? var_3 : var_0))) ? var_2 : (((((var_4 ? var_3 : var_8))) ? ((var_1 ? var_1 : var_0)) : ((var_5 ? var_6 : var_1))))));
                var_17 = (((((var_7 ? var_2 : var_3))) ? ((((((var_9 ? var_1 : var_9))) ? var_7 : var_6))) : var_5));
                var_18 = ((1 ? 4294967295 : 12020659870840184686));
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
