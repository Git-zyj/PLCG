/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = (min(var_9, (min(-var_0, (var_1 % 9223372036854775808)))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_14 = ((max((arr_1 [i_0 - 1] [i_0 + 1]), (arr_1 [i_0 + 2] [i_0 - 2]))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                arr_7 [i_0 + 2] [i_0] [i_2] [i_0 + 1] = ((((((min((arr_4 [i_0] [i_1] [i_2]), 2256)) == (((var_0 ? 256 : -256)))))) < (((((arr_0 [i_0 + 2]) + 2147483647)) >> (((max(12, 43)) - 38))))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_12 [i_2] [i_1] [i_3] = 1167257112;
                        arr_13 [i_2] [i_1] [i_2] [i_3] [i_2] [i_1] [i_2] = ((arr_5 [i_0] [i_0] [i_0 - 1] [i_2]) ? (arr_5 [i_0] [i_0] [i_0 + 3] [i_2]) : (arr_5 [i_0] [i_0] [i_0 + 2] [i_2]));
                        var_15 = ((+((((arr_8 [i_4] [i_2]) <= 1)))));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1] &= 2147482624;
                        var_16 -= 20395;
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_19 [i_2] [i_2] [i_6] = (arr_4 [i_6] [i_3] [i_1]);
                        var_17 = (min(var_17, (((var_8 || (arr_14 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_3] [4] [i_6] [i_3]))))));
                    }
                    var_18 = (((((1 ? var_5 : 218))) ? 58237 : (256 == var_7)));
                    var_19 = (((((var_7 - (arr_10 [i_0] [i_0] [1] [i_2] [i_3])))) ? 1 : (arr_0 [i_0 + 3])));

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_2] = ((3085 ? ((var_6 ? var_0 : (arr_20 [i_3] [i_3]))) : (arr_2 [i_7] [i_3] [i_0])));
                        var_20 = ((((-109 ? (arr_5 [i_0] [i_1] [i_0] [i_2]) : 9223372036854775807)) * (-21 < var_9)));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_21 = (((arr_21 [i_0 + 2] [i_3] [i_3] [i_2] [i_2] [i_0 + 2] [i_0 + 2]) ? var_5 : ((89 ? 72057594037927935 : 1))));
                        var_22 = (min(var_22, (((var_5 ? ((17307 ? var_0 : (arr_17 [i_0] [i_1] [i_3] [i_1]))) : var_3)))));
                        arr_26 [i_2] [i_3] [i_2] [i_1] [i_2] = var_5;
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_29 [i_2] = ((!(arr_27 [i_0 + 1] [i_2] [i_2] [i_3] [i_9])));
                        arr_30 [i_1] [i_1] [i_2] [i_1] = ((-var_6 || (arr_17 [i_0 - 1] [i_1] [i_3] [i_2])));
                        var_23 = ((+(((arr_5 [i_0 + 1] [i_2] [i_2] [i_2]) / (arr_14 [i_1] [i_1] [i_2] [i_1] [i_9] [i_2] [i_9])))));
                    }
                }
                arr_31 [i_0] [i_2] [i_0 - 2] = (max((arr_2 [i_2] [i_1] [i_0 + 2]), (min((min((arr_25 [i_0 - 1] [13] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 1]), 32762)), var_7))));
                var_24 = 9233;
                arr_32 [i_2] [i_1] [i_2] = (min((arr_22 [i_0 + 1] [i_0 - 2]), (arr_11 [8] [i_2] [i_0])));
            }
            var_25 = ((((((arr_3 [i_1] [i_1] [i_0 - 1]) ? (arr_3 [i_0 - 1] [i_1] [i_0 + 3]) : -32))) ? (!4294967295) : ((((arr_3 [i_0] [i_0] [i_0 + 1]) <= 153)))));
        }
    }
    #pragma endscop
}
