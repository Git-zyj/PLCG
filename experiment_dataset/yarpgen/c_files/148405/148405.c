/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!((max(var_10, (!25))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (max(var_15, (((~(min(var_7, (arr_1 [i_0]))))))));
        var_16 = (min(var_16, var_10));
        var_17 = arr_0 [5];
        var_18 = (!-1048918537);
        var_19 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 = ((var_13 ^ (arr_2 [i_1])));
        var_21 |= ((2979766648407967513 / (((((max((arr_2 [i_1]), 551527395))) ? var_10 : var_11)))));
        arr_4 [i_1] = (((((arr_2 [i_1]) ^ (arr_2 [i_1])))) ? (((max((arr_3 [i_1]), (arr_3 [i_1]))))) : (1048918542 & var_12));
        var_22 = (max(var_22, (((!(!var_12))))));
        var_23 = ((((var_12 | (arr_2 [i_1])))) % (((var_3 / (arr_3 [i_1])))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_24 = var_12;
                                var_25 = (7 & 17052559165600132486);
                                var_26 = (max(var_26, -2029390402));
                            }
                        }
                    }

                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        arr_21 [i_4] = (max(7589372879378932665, 1));
                        var_27 = (max((((arr_7 [i_7]) ? (~var_2) : (15466977425301584103 | 2979766648407967518))), ((((arr_14 [i_7 + 1] [i_3] [i_4] [i_3]) ? var_13 : (arr_15 [i_2] [i_3] [i_4] [i_4] [i_7 - 2]))))));
                        arr_22 [i_4] [i_3] = (arr_14 [13] [i_3] [i_4] [i_3]);
                    }
                    for (int i_8 = 4; i_8 < 13;i_8 += 1)
                    {
                        arr_25 [i_4] = (arr_6 [i_8]);
                        var_28 = (min(var_28, ((((max((0 || var_6), (min(var_10, 1)))) <= ((((-1048918537 ? var_12 : (arr_2 [i_2]))))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
