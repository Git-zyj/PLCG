/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_12));
    var_15 *= var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_12;

        /* vectorizable */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_16 = (((arr_12 [i_4] [6] [i_2 + 1] [i_1] [i_0]) && (arr_12 [i_4] [i_3 + 1] [i_0] [i_1] [i_0])));
                        var_17 = (min(var_17, ((((arr_7 [i_0] [i_0] [i_4] [4]) >= 1140275817295478737)))));
                        arr_14 [2] [i_4] [2] [i_3 + 1] [i_4] [i_3 + 1] |= var_12;
                        var_18 = (min(var_18, ((((arr_11 [i_1] [i_1 - 4]) ? (~2210205298) : (arr_0 [i_1 - 4] [i_1]))))));
                        var_19 = (arr_5 [i_2 - 2]);
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_2] = (var_9 + (arr_10 [i_0] [i_1 + 1] [i_2 - 2] [i_2 - 2] [i_3 + 2]));
                        var_20 = (max(var_20, ((((arr_7 [i_5] [i_5] [i_5] [i_1 - 4]) - (arr_7 [i_0] [i_0] [i_5] [i_5]))))));
                        var_21 = (max(var_21, 2210205273));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        var_22 = ((arr_12 [i_3 + 2] [i_2 + 2] [11] [i_6] [i_6]) ^ (arr_12 [i_0] [i_1] [i_1] [4] [i_2 - 2]));
                        var_23 = (min(var_23, -2084761997));
                        var_24 = (max(var_24, (((-((var_3 ? 4194559830 : var_6)))))));
                    }
                    var_25 = ((-1 ? (((arr_1 [i_0] [i_0]) ? var_12 : (arr_10 [i_0] [i_0] [i_1 - 4] [1] [1]))) : (!2210205310)));
                    var_26 ^= (arr_19 [6] [i_1] [i_1 - 4] [i_1] [i_1] [i_1] [6]);
                }
                arr_21 [i_2] [2] = (((62 / 2210205298) ? (((var_3 ? -1 : (arr_19 [i_2] [i_2] [i_1 - 1] [i_0] [i_0] [i_2] [8])))) : var_3));
            }
            for (int i_7 = 3; i_7 < 11;i_7 += 1)
            {
                var_27 = (min(var_27, ((((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0]))))));
                var_28 = (min(var_28, (((!(((var_7 - (arr_0 [i_1 - 4] [i_0])))))))));
            }
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                var_29 ^= (arr_18 [9] [i_0] [i_0] [i_0] [i_8]);
                var_30 = ((((0 & (arr_26 [i_0] [i_0] [i_0] [i_0]))) - -22973));
            }
            var_31 = (min(var_31, (52 ^ 2084761968)));
            var_32 = (((arr_8 [i_1] [i_1 + 1] [i_1] [i_1]) & (arr_23 [i_1])));
            var_33 -= 184;
        }
        arr_27 [6] = ((0 | var_1) / 52);
    }
    #pragma endscop
}
