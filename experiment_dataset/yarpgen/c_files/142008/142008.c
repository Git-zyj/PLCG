/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (-(min((36 + var_15), var_3)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 -= ((((((arr_0 [i_0 - 2] [i_0 + 1]) || (arr_2 [i_1])))) >> ((((var_4 < var_6) == ((var_2 ? 0 : 363070407226627211)))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_20 ^= ((0 < ((~((-28142 ? 10 : 21))))));
                    var_21 = (((((arr_4 [i_0]) ? (var_6 >= 64342) : 0)) * 34));
                    var_22 = ((~((65528 ? var_6 : -1))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [6] [i_4] [i_0] [i_4] = var_10;
                                var_23 = (arr_0 [i_4] [2]);
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_24 &= ((1 ? 976 : 1946274266));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_25 -= ((~(arr_5 [i_1] [i_1] [i_5])));
                        var_26 *= (((((arr_10 [i_1] [i_1] [i_5]) ? (arr_17 [1] [i_1] [i_5] [i_1] [i_0 - 2] [i_5]) : 246)) / 246));
                        var_27 = ((~(arr_7 [i_0] [i_1])));
                    }
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            arr_23 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0] = ((var_16 != (arr_20 [i_0 - 1] [i_1] [20] [i_7] [i_8] [i_8 - 2])));
                            arr_24 [i_0] [i_0] [0] [i_7 + 2] [i_0] [i_7 - 1] [i_7 + 1] = ((var_7 <= (arr_20 [i_0 + 1] [i_1] [i_7] [i_7 - 2] [i_1] [i_8 + 2])));
                        }
                        var_28 = (max(var_28, var_6));
                    }
                    arr_25 [i_0 - 1] [i_0] = (((((var_1 ? 18446744073709551614 : var_7))) ? (arr_15 [i_0] [i_0] [1] [i_0]) : ((-1506 ? 235 : 0))));
                    var_29 = (((arr_6 [i_0]) ? (((arr_8 [i_0] [i_1] [i_5]) ? var_0 : (arr_3 [i_0]))) : -1271749754));
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    arr_29 [i_0] = (arr_21 [i_0] [i_1] [i_9]);
                    arr_30 [13] [i_0] [i_0 - 2] = ((!(arr_13 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0 - 2])));
                    arr_31 [i_0] [i_0] = ((((max((arr_10 [i_0] [i_1] [i_9]), var_7))) ? (arr_3 [i_0]) : (arr_26 [i_0 + 3] [i_1] [i_9] [i_0])));
                }
            }
        }
    }
    var_30 *= var_16;
    #pragma endscop
}
