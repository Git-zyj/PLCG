/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = ((((arr_4 [i_0 + 1] [i_1 + 2] [i_1 + 3]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_1 [i_0 + 1]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_21 = ((~(((!(!var_2))))));
                                arr_15 [12] [i_2] [i_1 + 2] [6] [6] [i_3 + 1] [i_4 - 2] = (max(((((arr_2 [i_3 + 1] [i_1] [3]) ? (arr_12 [i_4 - 2] [2] [i_1] [i_1] [i_0 + 1] [i_0]) : var_6))), (~var_8)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_22 = (min(var_22, 61344));
                                var_23 = ((((max(123, -123))) ? ((((arr_12 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]) & (arr_12 [i_7] [2] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1])))) : (((arr_10 [i_0 - 1] [i_1 + 3] [i_1 + 3] [i_6] [i_1 + 3] [i_7 - 1]) ? (arr_2 [i_0 - 1] [i_1 - 1] [i_1 + 3]) : (arr_10 [i_0 - 1] [i_1 + 3] [i_1 + 1] [i_6] [i_1 + 2] [i_7 + 1])))));
                                var_24 = ((-(((arr_9 [i_6]) ? (((arr_8 [i_0] [i_6]) ? var_12 : -123)) : -845182518664712985))));
                                var_25 += min((((arr_12 [7] [i_0 + 1] [i_7] [9] [i_7 - 1] [i_0 + 1]) ? -469869924 : (arr_12 [i_5] [6] [i_0] [i_5] [i_0] [i_0]))), ((min((-676750022 || var_6), (~-401920893)))));
                                var_26 += (arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_5] [i_1] [i_1 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_0;
    #pragma endscop
}
