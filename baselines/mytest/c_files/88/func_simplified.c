/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/88
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3)
        {
            {

                for (int i_2 = 1; i_2 < 14; i_2 += 1)
                {
                    arr_8 [i_0] [i_0] = (((((min(var_0, (34357641216ULL)))) ? (var_1 * 0) : (2179896283U))));
                    var_10 = (!247);
                }
                for (int i_3 = 0; i_3 < 16; i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [i_3] [9LL] = ((((((arr_11 [i_0] [i_0] [i_1] [i_0]) ? ((1974604420 ? (34357641216ULL) : (2179896283U))) : (arr_1 [i_0])))) && (arr_2 [i_0] [i_1] [i_0])));

                    for (int i_4 = 0; i_4 < 16; i_4 += 3)
                    {

                        /* vectorizable */
                        for (unsigned int i_5 = 3; i_5 < 14; i_5 += 1)
                        {
                            var_11 = (arr_16 [i_0] [i_1] [i_3] [i_4] [15]);
                            arr_20 [i_1] [i_1] [i_0] [i_4] [i_1] = (((arr_19 [i_0] [i_5 + 1]) / (arr_19 [i_0] [i_5 - 1])));
                            var_12 = (((var_0 >= var_9) >> (4U)));
                            arr_21 [i_0] [i_4] [i_5 - 2] = (~34281);
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 13; i_6 += 1)
                        {
                            var_13 -= (arr_10 [i_4] [i_3] [i_1] [i_0]);
                            var_14 = (arr_16 [i_6] [i_6] [i_6] [i_6 + 3] [i_6 + 3]);
                            var_15 = ((var_3 ? ((((!(arr_23 [i_1] [i_1] [i_4]))))) : var_3));
                            var_16 = var_0;
                            var_17 += ((arr_25 [i_0] [i_0] [i_0] [14] [i_6]) ? ((~(arr_22 [i_1] [1]))) : var_7);
                        }
                        var_18 |= var_7;
                        var_19 = ((+(!var_2)));
                    }
                    var_20 += (min((((arr_5 [i_0] [i_0] [5] [i_3]) ? (var_0 < 34267) : var_1)), 2147483647));
                }
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3)
                {
                    for (int i_8 = 3; i_8 < 14; i_8 += 3)
                    {
                        {
                            arr_31 [i_0] = (arr_19 [i_0] [i_0]);
                            var_21 |= ((((max(var_0, (arr_1 [2U])))) ? var_8 : ((((24234 / var_4) | ((27 ? var_4 : var_5)))))));
                        }
                    }
                }
                arr_32 [i_0] = (max((((arr_6 [i_0] [i_1] [i_1] [i_0]) & var_3)), ((min((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_0)))));
            }
        }
    }
    var_22 = (((((var_5 ? 59027 : var_9)) - (var_3 - var_4))));
    var_23 = (max(var_23, var_3));
    var_24 *= ((var_8 ? (6048092141214124379LL) : 229));
    #pragma endscop
}
