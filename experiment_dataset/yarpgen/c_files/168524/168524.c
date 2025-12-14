/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -6555697118415610903;
        var_14 = (min(var_14, (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_15 = -var_3;
            arr_5 [i_0] [i_1] = (max(((~(arr_4 [i_0] [i_1]))), (((!(arr_4 [i_1] [i_1]))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
            {
                var_16 = var_8;
                arr_12 [i_0] [i_2] [i_0] = arr_7 [i_0];
                arr_13 [i_0] [i_0] [i_2] [1] = (arr_10 [i_0] [i_2] [i_2] [i_0]);
                var_17 = 3213527754824208237;
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
            {
                var_18 = (((arr_1 [i_0]) ? ((max((arr_1 [i_0]), (arr_1 [i_4])))) : ((min((arr_1 [i_0]), (arr_1 [i_2]))))));
                arr_16 [i_2] [i_2] [i_0] = ((3343476389 ? (~4093317086) : ((((((~(arr_11 [i_2])))) ? ((4093317099 ? (arr_3 [i_0]) : (arr_4 [i_0] [i_2]))) : (arr_14 [18] [1] [i_4]))))));
                var_19 = (arr_6 [i_0] [i_0] [i_0]);

                for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_5] [i_5 + 4] [i_0] [i_5] = (max((arr_11 [i_5 + 3]), (arr_11 [i_5 + 1])));
                    arr_20 [1] [i_0] [9] [i_0] [1] = ((((((max(3343476389, (arr_11 [i_2])))) ? ((201650209 ? 4093317086 : (arr_4 [i_0] [1]))) : -var_9))) ? (arr_10 [i_0] [i_2] [i_4] [i_0]) : 951490906);
                }
                for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    var_20 = ((~(((!(~var_13))))));

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_4] [i_6] [i_0] [i_6] [i_0] = (~((-(arr_22 [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_7]))));
                        arr_26 [i_7] [i_7] [i_7] [i_7] [0] [i_7] [i_0] = ((~((((((arr_9 [i_6 + 4] [i_4] [2]) % (arr_14 [i_0] [1] [i_0]))) == (((((arr_1 [i_7]) == (arr_0 [i_0]))))))))));
                    }
                    arr_27 [i_6] [i_0] [i_4] [i_2] [i_0] [i_0] = ((((((arr_8 [i_0]) ? (var_3 < var_7) : 3343476389))) + ((1 ? (((max(var_6, 0)))) : 7428676316821319423))));
                }
                var_21 = (((((max((arr_22 [i_0] [i_4] [i_4] [i_4]), (arr_10 [i_0] [i_0] [i_2] [i_0])))) ? (~var_0) : ((7428676316821319423 ? (arr_10 [12] [12] [i_2] [i_0]) : (arr_17 [i_0] [i_2] [i_2] [i_2] [i_0]))))));
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
            {
                var_22 = ((((arr_8 [i_0]) ? (arr_18 [i_0]) : (arr_18 [i_2]))));
                arr_30 [i_0] = arr_22 [i_0] [i_0] [i_0] [i_0];
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
            {
                var_23 = (arr_18 [8]);
                arr_33 [i_0] [i_0] = ((-((((arr_1 [i_0]) != (arr_29 [i_9] [i_9] [i_0] [i_9]))))));
                var_24 = (max((max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_2]))), (min((arr_4 [i_2] [i_9]), (arr_4 [i_2] [i_2])))));
            }
            var_25 = (min(((var_4 ? ((~(arr_31 [i_2] [i_2] [i_0]))) : (arr_8 [1]))), (((!(arr_3 [i_0]))))));
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            arr_36 [i_0] = (((arr_0 [i_0]) ? -1 : var_4));
            var_26 = ((-(arr_7 [i_0])));
        }
        var_27 = ((((-(arr_14 [i_0] [i_0] [i_0])))) ? (~60755) : (((arr_14 [i_0] [i_0] [i_0]) ? var_4 : var_12)));
    }
    var_28 = ((((min((!var_0), ((var_8 ? var_5 : var_2))))) ? ((~(max(var_10, var_1)))) : ((((((var_2 ? 9223372036854775807 : var_6))) ? (var_0 & var_6) : (~var_9))))));
    #pragma endscop
}
