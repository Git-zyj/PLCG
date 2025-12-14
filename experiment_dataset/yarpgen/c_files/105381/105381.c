/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = var_6;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (max(var_16, (((~(((arr_2 [i_0] [i_0]) ? ((var_6 ? var_13 : 7098822170647427332)) : ((((arr_1 [i_0]) ? 123 : (arr_1 [i_0])))))))))));
        arr_3 [15] = (((~var_0) & (min((arr_1 [i_0]), ((41203 ? (arr_0 [i_0]) : var_1))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                arr_9 [i_0] [6] [i_2] = ((((((arr_6 [i_0] [i_1] [i_0]) ? (arr_5 [i_1] [i_2]) : (arr_4 [i_0] [i_0])))) ? var_0 : (~41194)));
                var_17 = (max(var_17, ((((((arr_8 [3] [3] [1]) ? var_2 : var_11)) >= 24332)))));
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_17 [7] [i_3] [i_3] [i_1] [i_0] [i_0] = (((!26582) ? (((((arr_5 [i_0] [i_0]) && (arr_12 [8] [8] [0] [i_4]))))) : var_1));
                    var_18 = ((arr_0 [i_0]) ^ (arr_0 [i_4]));
                }
                var_19 = (arr_15 [i_3] [i_1] [i_3] [0]);

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_20 = (((((var_8 % (arr_16 [i_1] [i_1] [i_3] [i_5])))) ? (arr_21 [i_5] [i_3]) : ((var_6 ? (arr_4 [i_3] [i_3]) : 255))));
                    var_21 = (arr_4 [3] [i_1]);
                    var_22 = 13816;
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 20;i_7 += 1)
                    {
                        {
                            arr_28 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((-2147483647 - 1) && ((((arr_12 [i_0] [i_3] [i_0] [i_7]) ? 14141946729495653632 : var_13))));
                            var_23 = ((+(((arr_18 [i_0] [i_1] [i_6] [i_0] [i_6] [i_6]) ? -26583 : 0))));
                            var_24 = (((arr_18 [i_1] [14] [i_1] [i_7 - 3] [i_7] [i_7 - 2]) ? (arr_18 [i_0] [i_0] [i_0] [i_7 + 1] [i_7] [i_7 + 1]) : (arr_18 [i_7] [i_7] [i_7] [i_7 - 2] [i_7] [i_7 - 2])));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
            {
                arr_31 [i_0] [i_0] = (arr_5 [i_0] [i_0]);

                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    var_25 += ((~(arr_16 [i_0] [i_0] [7] [i_9])));
                    var_26 -= (((((arr_22 [i_8] [i_8]) ? (arr_26 [i_0] [i_0] [i_0] [i_0]) : 246)) * (arr_2 [i_0] [i_0])));
                    arr_35 [i_0] [i_0] [i_1] [i_8] [2] [i_9] &= var_11;
                    arr_36 [i_0] [i_1] [i_1] [i_1] [i_9] = (((arr_19 [i_0] [i_9]) ^ (arr_19 [i_0] [i_9])));

                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        var_27 = arr_23 [i_10 + 1] [2] [i_10] [i_10] [7] [i_10];
                        arr_41 [i_0] [i_0] [i_8] [i_9] [i_8] = (((arr_23 [i_0] [i_1] [i_8] [i_9] [i_1] [i_10]) ? 127 : 1));
                        var_28 = (max(var_28, ((((arr_38 [i_1]) ? 1 : var_0)))));
                    }
                }
            }
            arr_42 [i_0] [i_0] [i_0] = (((arr_8 [i_0] [i_0] [i_1]) ? (arr_33 [i_0] [i_1] [i_1] [i_1]) : (arr_8 [i_0] [i_1] [i_1])));
        }
    }
    var_29 = (max(var_29, (((((((!var_8) ? (var_3 ^ var_6) : ((var_2 ? var_6 : var_7))))) ? (((var_8 * var_3) ? 30302 : var_8)) : ((((-var_13 + 2147483647) >> (((~var_0) + 60))))))))));
    var_30 = ((~((max(var_4, (var_0 < var_0))))));
    #pragma endscop
}
