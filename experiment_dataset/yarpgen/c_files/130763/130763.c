/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_11 = (min(var_11, -var_6));
        var_12 -= arr_1 [4];
        var_13 &= ((1967359244128679310 & (arr_1 [12])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_14 = (max(var_14, (arr_3 [i_0 + 2])));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_15 -= 7;
                            var_16 -= var_1;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_17 -= (((arr_3 [i_1 + 1]) ^ (arr_3 [i_1 + 1])));
                            var_18 ^= (((arr_10 [i_0 + 1] [1] [1] [i_3] [5] [13] [13]) + (arr_10 [9] [i_3] [i_2] [i_1] [i_1] [i_0] [i_0])));
                        }
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            var_19 |= (((((1967359244128679310 ? 4844710177034998601 : 0))) ? ((var_2 ? var_10 : -95)) : ((((arr_14 [i_6] [i_3] [13] [5] [13]) ? (arr_8 [i_0] [i_0] [i_2] [i_2] [i_0]) : var_1)))));
                            var_20 = (min(var_20, (arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_6 - 2] [i_1 + 1])));
                            var_21 += var_8;
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_22 = (max(var_22, 1));
                            var_23 ^= (((arr_11 [i_7] [i_0]) ? (817727721004642771 | 20) : (((var_5 ? var_7 : var_8)))));
                            var_24 = (max(var_24, ((((62496 ^ 1) % var_6)))));
                            var_25 = (arr_5 [i_7] [3] [5] [8]);
                        }
                    }
                }
            }
        }
        var_26 -= (arr_5 [i_0] [1] [1] [1]);
    }
    var_27 &= var_4;
    #pragma endscop
}
