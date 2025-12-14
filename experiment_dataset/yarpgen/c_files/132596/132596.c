/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 |= (((arr_1 [i_0] [i_0]) & (arr_2 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = (var_6 ? 1 : var_5);
                                var_13 ^= ((((1152921504606846975 ? 1 : 1)) >= (arr_4 [i_0] [i_1] [i_2])));
                                var_14 = (((((var_7 ? var_0 : (arr_7 [i_4] [i_3])))) ? var_10 : (arr_2 [i_0] [i_1])));
                            }
                        }
                    }
                    var_15 ^= arr_1 [i_0] [i_1];
                    var_16 = (min(var_16, (((1 ? var_6 : (arr_10 [i_0] [i_0]))))));
                    var_17 = 8314;
                    arr_13 [9] [i_1] = var_3;
                }
            }
        }
        var_18 = (min(var_18, (!var_3)));
        arr_14 [i_0] = (var_1 ? (arr_4 [i_0] [i_0] [i_0]) : ((var_9 ? 18162119636870516037 : var_10)));
    }
    var_19 = var_2;
    #pragma endscop
}
