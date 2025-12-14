/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (max((!-103), (((123 ? -107 : var_8)))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_4 [i_0] = (((((((arr_2 [i_0] [i_0]) ? 65532 : -7077)))) >= (((arr_3 [i_0]) / ((~(arr_0 [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_14 = (max((arr_7 [i_0]), (arr_9 [i_0] [i_3])));
                        var_15 = (!8);
                    }
                }
            }
        }
        var_16 = (((((arr_5 [i_0 + 1] [i_0] [i_0 + 1]) / 14323568284714988542)) / (((((arr_5 [i_0] [i_0 + 1] [i_0]) == (arr_5 [i_0] [i_0 + 1] [i_0])))))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = (((((((arr_3 [i_4]) * (arr_9 [i_4] [i_4])))) || (arr_14 [i_4] [i_4]))));

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_17 += (((((arr_15 [6]) * ((61252 ? 103 : 18446744073709551615)))) >= var_6));
            arr_19 [i_4] [i_4] = (i_4 % 2 == zero) ? ((((!var_1) >> ((((((((min((arr_1 [i_4] [i_4]), 14372))) + 2147483647)) << (((arr_15 [i_4]) - 156)))) - 2147460171))))) : ((((!var_1) >> ((((((((((min((arr_1 [i_4] [i_4]), 14372))) + 2147483647)) << (((((arr_15 [i_4]) - 156)) - 75)))) - 2147460171)) - 5401)))));
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_18 = (max((((((106 ? 103 : (arr_1 [i_4] [i_4])))) | (min(4294967295, var_5)))), ((((((14177057212873730747 ? var_10 : (arr_2 [i_4] [i_5])))) ? (arr_22 [i_4] [i_4] [i_4] [i_4]) : (arr_14 [i_4] [i_6]))))));
                        arr_24 [i_4] [i_4] [i_4] [i_4] [i_6 + 1] = var_8;
                        arr_25 [i_7] [i_4] = 112;
                        var_19 = (max((((!1805516244) ? (32755 - 11587178188357455926) : (var_1 >= var_9))), (((((144 ? (arr_11 [i_4] [i_4]) : 251)) >> (-var_0 - 2909056912831557716))))));
                        arr_26 [i_4] [i_7] = ((((min(102, 0))) ? ((-19 ? 20 : ((var_9 / (arr_5 [i_4] [i_5] [i_7]))))) : (arr_8 [i_4] [i_6 - 3] [i_4])));
                    }
                }
            }
            var_20 = 29702;
        }
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_21 &= ((1 ? 1254757683 : -109));
        var_22 = ((~(arr_17 [2])));
        var_23 = (max(var_23, (((4123175788994563069 ^ (max(var_9, ((18446744073709551596 | (arr_18 [0]))))))))));
        var_24 = (((arr_9 [10] [10]) || (~0)));
    }
    var_25 = (min((min((min(3219362556005480299, var_8)), -var_11)), (!var_1)));
    #pragma endscop
}
