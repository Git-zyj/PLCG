/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (arr_4 [i_0] [i_1]);
                arr_5 [i_0] = (((((~0) << (((arr_3 [i_0]) ? var_11 : (arr_2 [i_0])))))) ? (arr_1 [i_0]) : (arr_4 [i_0 + 1] [0]));
                arr_6 [i_1] [0] = ((((var_18 >= (arr_4 [i_0 + 1] [i_0 + 1]))) || var_13));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_9 [i_2] = var_12;
        var_20 = (((+(((arr_7 [i_2]) & 4294967274)))));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_22 [i_5] [i_3] [i_3] = ((max(((((arr_17 [i_3] [4] [i_3]) << var_9))), (max(var_18, (arr_18 [i_4]))))));
                        var_21 *= var_7;
                        var_22 = (max(var_22, 4294967295));
                        var_23 = var_7;
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_26 [i_3] [i_4] [i_4] [i_4] [i_4] [i_4] = ((var_11 ? ((+(((arr_17 [i_4] [i_5] [i_3]) ? var_15 : (arr_10 [i_7]))))) : ((max((var_1 + var_7), (((1293561871 < (arr_18 [5])))))))));
                        var_24 = (var_12 ? ((((var_12 != (arr_10 [i_4 - 2]))))) : (max((arr_21 [i_4] [i_3] [i_4 + 1] [i_4] [1] [i_4 + 1]), (arr_25 [i_3] [i_5] [i_4 - 2] [i_3]))));

                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            var_25 += (min(((((arr_16 [i_4 - 1]) >= (arr_16 [i_4 - 2])))), (arr_18 [i_4 - 1])));
                            arr_30 [i_3] [i_4] [i_3] [i_7] [i_7] [i_8] = ((((arr_11 [i_8 + 1] [i_4]) & (min((arr_10 [i_7]), var_13)))) > ((-(max(-117, 18446744073709551599)))));
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            arr_33 [i_3] [i_4] [i_5] [i_7] = ((var_15 > (arr_27 [i_3] [i_9 - 1] [i_3] [i_4 - 2] [i_9])));
                            arr_34 [i_3] [i_4 + 1] [i_4 + 1] [i_3] [i_9] [i_4 + 1] = (((arr_31 [i_9 - 1] [13] [i_9] [i_9 + 1] [i_4] [i_4 - 2] [i_4]) & (arr_31 [i_9] [i_9] [i_9] [i_9 - 1] [i_5] [i_4 - 2] [i_3])));
                            arr_35 [i_3] = (!var_7);
                            arr_36 [i_3] = (((((((arr_31 [13] [i_7] [i_7] [i_5] [i_4 + 2] [i_4 + 2] [i_3]) != (arr_15 [i_3]))))) * ((var_4 ? 4294967295 : (arr_21 [3] [i_3] [i_5] [i_4] [i_3] [i_3])))));
                        }
                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            var_26 |= (((arr_18 [i_4 + 1]) ? (arr_18 [i_4 + 2]) : ((max((arr_18 [i_4 + 1]), (arr_18 [i_4 + 2]))))));
                            var_27 = (arr_28 [i_3] [i_3] [i_3] [i_3] [i_3]);
                            var_28 = (min(var_28, ((((max((arr_24 [2] [i_7]), (((!(arr_24 [i_4] [i_7])))))) == (arr_12 [1]))))));
                        }
                        for (int i_11 = 3; i_11 < 18;i_11 += 1)
                        {
                            var_29 = var_16;
                            var_30 = var_5;
                        }
                        var_31 -= ((max(0, ((1 ? 0 : 3001405425)))));
                        var_32 += ((~((-(((arr_41 [i_4] [i_4] [i_4 + 2] [i_4] [1]) ? 37 : 1))))));
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_33 = (arr_10 [i_5]);

                        for (int i_13 = 1; i_13 < 19;i_13 += 1)
                        {
                            arr_46 [i_5] [i_3] [i_5] = ((var_7 >= ((((var_12 && (arr_32 [i_3] [i_3])))))));
                            arr_47 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_15 [i_3]);
                            arr_48 [i_3] [i_4 + 1] [i_5] [i_3] [i_13] [i_3] = var_16;
                        }
                        arr_49 [i_3] [i_4] [i_3] [i_5] [1] = (((max(-var_4, ((((arr_17 [i_3] [i_3] [i_3]) != (arr_17 [i_3] [i_4] [i_3]))))))) ? (((arr_8 [i_4 + 1]) ^ 127)) : (((((((arr_40 [i_12]) >= 1441587626)) || (arr_14 [i_4] [i_3] [i_4 - 2]))))));
                    }
                    var_34 = var_0;
                    var_35 = (max(-var_8, (min((((arr_45 [i_3] [14] [i_3] [14] [i_3]) | var_0)), (arr_38 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_3] [18] [i_4])))));
                    var_36 ^= (arr_27 [14] [i_4 - 2] [i_4] [i_4 - 1] [i_4]);
                }
            }
        }
    }
    #pragma endscop
}
