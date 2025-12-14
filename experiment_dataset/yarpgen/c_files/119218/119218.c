/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_2 & 74);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = 5977501260678951671;
                            var_18 ^= (arr_6 [i_0] [i_0] [i_0] [i_0]);
                            var_19 = (max(var_19, (arr_7 [i_0] [i_1] [i_2] [i_3])));

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                arr_11 [i_2] [i_0] [i_2] [i_3] [i_2] [i_4] [i_4] = (min(((((arr_1 [i_0 - 1]) <= (arr_1 [i_0 - 1])))), var_10));
                                var_20 = (max(var_20, ((((((arr_2 [i_0]) ? (min(22387, var_6)) : (arr_8 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1]))) + -630214049)))));
                                arr_12 [i_0] [i_0] = (min(1, 630214064));
                                arr_13 [i_0] [i_1] [i_4] [i_3] [i_4] [i_3] = -630214048;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_21 = ((630214065 ? -630214066 : var_7));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] = (((((630214059 ? var_4 : 35301))) ? (1142083489 / 1474565861) : (arr_14 [i_0] [i_1] [i_5] [i_3] [i_5])));
                                arr_17 [i_5] = ((arr_8 [i_5] [i_5] [i_1 + 2] [i_1] [i_1] [i_1]) && 1);
                                arr_18 [i_0] [i_1] [i_2] [i_5] [i_5] = ((~(arr_2 [i_0 + 1])));
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_5] = var_1;
                            }
                            for (int i_6 = 0; i_6 < 16;i_6 += 1)
                            {
                                arr_24 [i_0] [i_1] [i_2] [i_6] [i_6] = (arr_4 [i_0] [i_0]);
                                var_22 = (((arr_9 [i_0] [i_1] [i_2] [i_3]) | ((((((var_14 >> (28380 - 28351)))) ? var_10 : 0)))));
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 32707;
                                arr_26 [i_0] [i_1] [i_2] [i_2] [i_3] [i_6] [i_6] = ((var_13 == (var_4 % var_0)));
                            }
                            for (int i_7 = 0; i_7 < 16;i_7 += 1)
                            {
                                var_23 ^= ((~(arr_2 [i_3 - 1])));
                                arr_30 [i_0] [i_1] [i_2] [i_3] [i_7] = 24567;
                                arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_9 [i_0] [i_1] [i_3] [i_3]);
                                arr_32 [i_0] [i_1] [i_2] [i_2] [i_7] [i_2] [i_1] = -630214066;
                                arr_33 [i_7] [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = min(var_4, (((arr_5 [i_0 - 1] [i_1 - 2]) ^ (arr_4 [i_0 - 1] [i_1 - 1]))));
                            }
                        }
                    }
                }
                var_24 = 6652;
            }
        }
    }
    var_25 = (max(630214065, (((((var_2 ? var_15 : var_13)) == 1)))));
    #pragma endscop
}
