/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (((!var_3) > (((var_8 + var_8) - var_5))));
    var_15 = (100 & 137);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(var_16, (((-(((arr_2 [i_0]) ? (var_13 * var_9) : (min(var_3, var_0)))))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_17 ^= (min((!var_13), -137));
            var_18 = (max(var_18, (((((14157 - (arr_5 [i_0] [i_1]))) - (arr_5 [i_0] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_10 [i_0] &= min((min(((var_9 & (arr_3 [i_0] [i_0]))), (((var_13 != (arr_5 [i_0] [i_0])))))), var_2);
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_19 = (min(var_19, 137));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_3] = ((~(((arr_15 [i_0] [i_0] [i_3] [i_3 - 2] [i_3 - 2]) | var_7))));
                            var_20 = (min(var_20, (((((~(arr_9 [i_0] [i_2] [i_0])))) == ((-(arr_15 [i_5] [i_4] [i_3] [i_0] [i_0])))))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_2] &= 29;
                            var_21 = ((((var_7 & (arr_6 [i_3 + 1] [i_3 + 2] [i_6]))) | (((arr_5 [i_3 + 2] [i_3 + 2]) ? (arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1]) : -1292352197))));
                            arr_21 [i_3] [i_2] = (((14154 != 0) ? 116 : 9223372036854775807));
                        }
                    }
                }
            }
            arr_22 [i_2] [i_2] [i_2] = ((!(((((!(arr_5 [i_0] [i_0]))) ? ((max(116, 29))) : ((var_12 ? 129 : (arr_13 [i_0] [i_0] [i_0]))))))));
        }
        var_22 = ((var_13 << (((!(arr_9 [i_0] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {

                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            arr_32 [i_7] [i_7] = (min(((-(arr_30 [i_9 - 1] [i_9 + 1] [i_8] [i_7 - 1] [i_7 + 1]))), ((var_10 ? -1050 : (arr_13 [i_0] [i_0] [i_9 + 1])))));
                            var_23 += ((14157 ? (((((min(239, 1400342371553162087))) != (((arr_1 [i_0] [i_0]) - 12493586688399000238))))) : 1));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_24 = ((((((arr_35 [i_9 + 1] [i_9 - 1] [i_0] [i_9 + 1] [i_0]) ? (arr_30 [i_7] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_9 + 1]) : 767444440))) || ((min(139, (arr_12 [i_9 - 1] [i_9 + 1] [i_7] [i_9 - 1]))))));
                            var_25 += ((~(var_9 | -28)));
                            var_26 = (((arr_7 [i_0] [i_0] [i_0]) + (arr_1 [i_0] [i_0])));
                            var_27 = (((!31) && ((min(191637605073002908, ((max(3093121799, 738887117))))))));
                        }
                        arr_36 [i_0] [i_8] [i_7] [i_0] [i_0] = ((+((var_8 ? (arr_23 [i_7 + 1] [i_7 - 1] [i_9 - 1]) : 55230))));
                        var_28 = var_1;
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_29 = (min((4294967295 - 24849), (866397361 + var_1)));
                                var_30 = (arr_4 [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
