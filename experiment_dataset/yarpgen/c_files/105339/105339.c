/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] = (((((var_8 ? (arr_3 [i_0]) : (((20955 ? 127 : (-127 - 1))))))) ? ((-(arr_2 [i_0 + 1] [i_0] [i_0]))) : (min(var_6, (arr_1 [i_0])))));
            arr_6 [i_0] [i_1] [0] |= ((-((3940216817 ? 127 : (-127 - 1)))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                arr_9 [i_2] [i_0] [i_0 - 1] = ((4294967295 ? (arr_7 [i_0 + 1] [i_1] [i_1] [i_2]) : var_4));
                arr_10 [i_0] [i_0] [i_0] = ((!var_1) && (((-125 ? (arr_1 [i_0]) : 126))));
                var_13 = ((-99 ? ((var_1 ? var_3 : (arr_4 [i_0] [i_1] [3]))) : 124));
                arr_11 [i_0] [i_0] = -95;
            }
            for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_14 = (min(var_14, (arr_13 [i_3 + 2])));
                            var_15 = (((264241152 ? (arr_18 [i_0] [i_4] [i_0] [i_5] [i_5 + 1]) : (arr_17 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 + 1]))));
                        }
                    }
                }
                var_16 = (max(var_16, ((((((108 ? (!2326163314) : (arr_16 [i_3] [i_3] [i_3 + 1] [i_3 - 1])))) ? ((~((var_9 ? 856435315740909854 : -967073731)))) : (var_5 << 0))))));
            }
            for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
            {
                arr_22 [i_0] [i_1] [i_6] = (((~var_2) ? var_0 : -109));
                var_17 += (((var_4 + 2147483647) << (((((max(((var_9 ? (arr_14 [i_0] [i_1] [13] [i_6]) : (arr_17 [i_0] [i_6] [i_6 + 3] [i_1] [2]))), (min(894, -8876289902288926892)))) + 2153392035647231111)) - 7))));
            }
            var_18 = (max(var_18, (((967073732 / (max((((arr_19 [10] [i_0] [10]) | (arr_18 [2] [i_0] [4] [i_1] [i_0]))), var_7)))))));
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_19 = ((~(((-9223372036854775807 - 1) | (arr_7 [i_0 + 1] [11] [i_0] [i_0 + 1])))));

            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                var_20 += (((((((max((arr_27 [i_0 - 1] [i_0 - 1] [i_7]), var_8))) ? (((arr_13 [i_8]) ? var_7 : 299326142)) : var_4))) ? ((var_7 ? 1690224651 : (-107 > var_0))) : ((((!(arr_8 [i_0] [i_0] [i_0])))))));
                arr_28 [2] [i_7] [i_0] = (((((((var_6 ? var_4 : (arr_1 [i_0]))) * (((max(var_8, 94))))))) ? (max(var_5, (min((arr_7 [i_0] [11] [2] [7]), var_11)))) : var_1));
                arr_29 [11] [i_0] [i_8] = (((!288230376134934528) ? (((arr_8 [i_0 + 1] [i_0 - 1] [i_0]) ? (arr_8 [i_0 + 1] [i_0 - 1] [i_8]) : var_7)) : (((arr_8 [i_0 + 1] [i_0 - 1] [i_0]) ? (arr_8 [i_0 - 1] [i_0 + 1] [i_0]) : 17278))));
                arr_30 [i_7] [i_0] [i_0] [13] = (arr_3 [i_0]);
            }
            arr_31 [i_0] [i_7] [i_0] = max((max((-109 ^ 126), (arr_21 [i_0] [i_0 - 1] [i_0] [i_7]))), (arr_25 [i_0] [0]));
        }
        arr_32 [i_0] = (arr_27 [i_0 + 1] [6] [i_0 + 1]);
        arr_33 [i_0] = ((~(arr_14 [i_0] [i_0] [3] [i_0 - 1])));
        var_21 ^= 0;
        var_22 ^= (!5521200995066633904);
    }
    var_23 = (min(var_9, ((((var_7 | var_8) ^ (94 & -508629521))))));
    #pragma endscop
}
