/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_18 ? var_14 : var_14)) ^ var_9)) % (((max(2147483647, 18446744073709551615))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_0] [i_0] |= (((arr_1 [i_2]) + ((max((arr_3 [i_0] [i_0 + 1]), (var_6 + var_14))))));

                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_11 [i_3] = ((max((((arr_7 [i_1] [i_1] [i_1]) ^ var_0)), 17610)));
                    var_21 = (max(var_21, var_12));
                    var_22 -= ((((((arr_0 [i_0]) >= (arr_9 [i_0] [i_0] [i_0] [i_0])))) ^ (!12365708384673968983)));
                    var_23 += (((((arr_2 [i_1 - 3] [i_0 - 1]) - (arr_2 [i_1 + 3] [i_0 + 1]))) >= var_7));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {

                    for (int i_5 = 4; i_5 < 10;i_5 += 1)
                    {
                        arr_17 [i_0] [i_4] [i_4] [i_4] |= ((18446744073709551613 ? 157 : 6081035689035582632));
                        var_24 = (min(var_24, (((((((-9223372036854775807 - 1) ? var_5 : 18446744073709551615))) ? var_13 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_25 = (min(var_25, (((((((arr_2 [i_0] [i_0]) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_7))) ? (var_16 - 43) : (((arr_6 [i_1] [i_1]) ? (arr_6 [i_0] [i_0]) : (arr_0 [i_5]))))))));
                    }
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_11;
                        var_26 ^= 1;
                        arr_22 [i_1] = (1 ^ var_18);
                    }
                    var_27 -= (arr_5 [i_1] [i_1]);
                }
                arr_23 [i_0] |= (max((-32767 - 1), (arr_0 [i_2])));
                var_28 = ((~(((var_6 + var_0) ? (max((arr_18 [i_0] [i_0]), 18446744073709551602)) : var_1))));
            }

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_29 = (max(var_29, (((max((arr_2 [i_0 - 1] [i_1 + 1]), var_13))))));
                arr_28 [i_0] [i_0] [i_0] = (arr_13 [i_7]);
                arr_29 [i_0] [i_0] [i_0] = (((3 ^ 27) ? ((((arr_3 [i_0 + 1] [i_1 - 2]) >> (((var_18 | 14) - 6486943088383234409))))) : (max((((arr_1 [i_0]) ? var_12 : var_18)), (((!(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                arr_32 [i_8] [i_8] = (((((54 ? 18446744073709551607 : 236))) ? (!var_14) : (((arr_26 [i_1] [i_1]) ? var_16 : (arr_0 [i_1])))));
                var_30 = (min(var_30, var_18));
            }
            var_31 = var_15;
        }
        var_32 = (min(var_32, var_6));
    }
    for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_33 = (max(var_33, ((((((14 ? (21537 % var_14) : 23712))) ? -4294967295 : ((((arr_16 [0] [0]) ? var_19 : var_11))))))));
        var_34 = (min(var_34, (((!((((max(7570435696381700614, 4294967288)) ^ 395978911))))))));
    }
    var_35 += (max(((var_2 ? var_16 : (((var_1 ? var_6 : var_9))))), ((((-28966 ? var_18 : 2081038229))))));
    #pragma endscop
}
