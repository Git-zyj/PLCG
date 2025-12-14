/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 ^= ((var_4 == 127) ? var_4 : (((min(17119402076593521662, var_4)) & (var_15 < var_7))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = ((((((arr_2 [i_0 + 2] [i_0 + 1]) % 18446744073709551615))) ? ((~(((arr_1 [i_1] [i_1]) ? (arr_0 [i_1]) : var_11)))) : (arr_5 [i_0 + 1] [i_1])));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = ((((max(0, 15069))) - (35642 != -15069)));
                                var_20 = (min(var_20, ((((((((arr_1 [i_0 + 2] [i_2]) > (arr_7 [4])))) << ((var_5 ? var_4 : 5907231661741239456))))))));
                                arr_12 [8] [i_1] [i_2] [i_0] [i_4] = (min(((~(var_4 || -2110180645))), (7 > var_7)));
                                var_21 -= (max((arr_7 [i_0 + 1]), (((arr_7 [i_0 + 1]) * (arr_7 [i_0 + 2])))));
                                var_22 = (arr_1 [i_0] [i_3]);
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_1] [i_0] = max(var_5, (min((18446744073709551615 || var_1), ((262144 ? var_0 : (arr_9 [i_0] [i_0] [i_1] [i_2]))))));
                    var_23 &= ((1 ? 1 : -1));
                    arr_14 [i_0] [i_0] [i_1] [i_0] = (arr_7 [i_0 - 1]);
                    arr_15 [1] [i_0] [i_0 + 1] = var_6;
                }
                var_24 -= (((((!((min(6, var_15)))))) ^ (arr_10 [i_0 + 1])));

                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    var_25 = (((max((arr_0 [i_1]), (((23297 ? 73 : 18468))))) <= var_13));
                    var_26 *= 1;
                    arr_18 [i_1] &= (arr_3 [i_0] [i_5]);
                    arr_19 [i_0] [i_0] [0] = (((arr_10 [i_0 - 1]) ^ -1));
                    arr_20 [i_0] = (min(((((((arr_8 [i_1] [i_1] [i_5 + 1] [i_5]) <= (arr_9 [i_0 - 1] [4] [i_1] [i_5])))) << (((((arr_2 [i_0 + 2] [i_0]) << (((arr_6 [i_1] [2]) - 2099600097)))) - 10092818728931459060)))), (arr_0 [i_0 - 1])));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_27 = (max((max((((-(arr_5 [i_1] [i_1])))), (max((arr_21 [i_6] [i_6] [i_6]), var_14)))), ((-3 ? (var_11 & var_14) : (~var_14)))));
                    arr_23 [i_0] [i_0] [i_6] [i_6] = (689503243 / 762034810);
                    var_28 ^= (arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 2] [2]);
                }
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    arr_28 [1] [i_1] [i_0] [i_0] = (((arr_8 [i_0] [i_0 - 1] [i_1] [i_7 - 1]) | (((arr_11 [i_0] [i_0 + 1] [i_7 - 1] [i_0 + 1]) ? (arr_16 [i_1] [i_1]) : (arr_16 [i_0 - 1] [i_0 + 2])))));
                    var_29 = (((((arr_24 [i_0 + 2] [i_0 + 2] [i_0 + 2]) && 0)) || var_10));
                }
                var_30 = (~-35);
            }
        }
    }
    var_31 = ((-(((!(((var_12 ? var_12 : 64))))))));
    var_32 = var_11;
    #pragma endscop
}
