/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (((62012 / ((max(1, 1))))));

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_1] [i_0] = ((!((min(1401547998723636315, (arr_4 [i_0]))))));
            arr_7 [i_1] [i_0] [i_0] = (max(1, 46863));
            var_16 = (((arr_4 [i_1 + 3]) ? (arr_5 [i_1 - 1]) : (arr_5 [i_1 + 3])));
        }
    }
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                arr_14 [i_2] = (((((~65535) < (arr_13 [i_3] [i_2]))) ? (1 % 20977) : (((1 <= (1 >= 1))))));
                arr_15 [i_2] [i_2] = 1;

                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_18 = (min((((var_4 || var_13) || ((max(1444554483, var_8))))), ((!((max(1, (-9223372036854775807 - 1))))))));
                                var_19 = (min(((((arr_2 [i_4 + 1]) == ((var_11 ? 8192 : (arr_11 [i_2])))))), (((((min(2427, 1)))) + (-9223372036854775807 - 1)))));
                            }
                        }
                    }

                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        var_20 ^= (+-0);
                        var_21 = ((((((arr_20 [i_4] [i_4] [i_7 + 2] [i_2]) + (arr_20 [i_3] [i_3] [i_7 - 1] [i_2])))) ? ((min(var_7, (arr_20 [i_3] [i_3] [i_7 - 2] [i_2])))) : (1 <= -78)));
                        var_22 = (((arr_10 [i_2] [i_3 - 1]) ? (((((((arr_0 [i_2] [i_7]) / var_14))) ? (!var_14) : var_10))) : (((arr_25 [i_3] [i_4] [i_7]) ? 107 : (max(9223372036854775807, 1))))));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_23 = ((~((~(arr_21 [i_2] [i_3] [i_3] [i_3 - 1])))));
                            var_24 = (min((max(39237, -8)), (((((56742 ? -3 : (arr_11 [i_2]))) <= (!57312))))));
                        }
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_32 [i_2] [i_3] [i_3] [i_4] [i_9] = var_0;
                        var_25 = (!var_8);
                    }
                }
                for (int i_10 = 3; i_10 < 15;i_10 += 1)
                {
                    var_26 = ((arr_27 [i_2] [i_3 - 1] [i_10 - 2] [i_10] [i_10] [i_10]) - ((((arr_29 [i_2] [i_3] [i_10]) >= (((25243 ? var_12 : 102)))))));

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_38 [i_2] = (((50905 ? (arr_24 [i_2] [i_2] [i_3] [i_3] [i_3] [i_3 - 1]) : (max(52247, -9223372036854775794)))) << (((!(!37)))));
                        var_27 += ((!((!(arr_28 [i_2] [i_3] [i_10] [4])))));
                        arr_39 [i_2] = (arr_10 [i_2] [i_3 - 1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
