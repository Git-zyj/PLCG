/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_9);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_21 = ((((!(arr_4 [i_3] [i_2 - 1] [i_1 + 1]))) ? ((((((-2147483647 - 1) ? (arr_8 [1] [i_0] [i_1] [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_2 [i_0] [i_0]) : (arr_4 [i_0 + 1] [i_3 + 2] [i_3]))) : ((-(arr_6 [i_1] [i_2 - 1] [i_1])))));
                        var_22 = (((~var_4) || -var_3));
                        var_23 = var_4;
                        arr_10 [i_0] [i_1] [i_0] [3] = (((~((var_7 ^ (arr_5 [i_3 - 1] [i_1] [i_1] [i_0]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_15 [i_1] [1] [i_4] = (min(38969, (arr_4 [i_5 + 1] [i_5 - 1] [i_5 - 2])));
                                var_24 = var_6;
                            }
                        }
                    }
                    var_25 = (arr_4 [i_0] [i_1] [18]);
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    var_26 = (arr_0 [i_1]);
                    var_27 = ((~(arr_5 [i_6] [i_1] [i_1] [i_0])));

                    for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_28 = (((arr_5 [i_1 + 3] [i_1] [i_1] [i_1]) ? var_0 : var_19));
                        var_29 = arr_8 [i_7] [2] [4] [4] [4];
                        var_30 = (-32767 - 1);

                        for (int i_8 = 4; i_8 < 18;i_8 += 1)
                        {
                            var_31 = (-32767 - 1);
                            var_32 = ((!(arr_11 [i_0 - 2] [i_1] [i_7] [i_8 + 1])));
                        }
                        var_33 = var_3;
                    }
                    for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        var_34 = arr_11 [i_1] [i_6] [i_1] [i_0 - 1];
                        var_35 = -32762;
                        arr_25 [i_0] [i_1] [i_1] = (arr_24 [i_1] [i_1] [i_1 - 1] [i_1]);
                        var_36 = (((arr_14 [i_9 + 1] [i_6 - 1] [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1]) ? (arr_14 [i_9 + 3] [i_6 + 2] [i_1 - 1] [i_1 + 3] [17] [i_1] [i_1]) : (arr_4 [i_6 + 1] [i_0 - 3] [i_0 - 3])));
                    }
                    var_37 = (~7864320);
                }
                for (int i_10 = 3; i_10 < 17;i_10 += 1)
                {
                    var_38 = var_5;
                    var_39 = arr_27 [i_0] [i_0] [i_0] [i_0];
                    arr_28 [i_10] [i_1] [i_1] [i_0] = (min((max(109, ((-41 ? (arr_24 [i_0] [i_1 + 3] [i_1] [i_1]) : var_8)))), (((((2147483647 ? var_5 : var_17))) ? (min(var_4, (arr_18 [i_1] [i_1 + 3] [i_10] [i_1 + 3]))) : (arr_9 [i_1] [i_1] [2] [i_1] [i_1])))));
                }
                var_40 = ((!(((((arr_19 [i_0] [i_0] [i_1] [i_0] [19] [i_0]) / (arr_23 [i_0] [i_0] [i_0])))))));
            }
        }
    }
    var_41 = ((-(min(var_12, (38969 & 87)))));
    var_42 = var_11;
    var_43 = (min((((var_13 ? 1056964608 : 7864320))), var_12));
    #pragma endscop
}
