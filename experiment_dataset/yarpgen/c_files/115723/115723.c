/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_3] [i_1] [i_2] [i_2] [i_3] = ((((max((arr_8 [i_0 + 4]), var_17))) - (max(446016648, -446016639))));
                            arr_14 [i_3] [21] [21] [i_3 - 1] = (((((arr_12 [i_0 - 4] [i_0 - 4] [i_0] [i_3 - 2]) + (arr_11 [i_0] [14] [6] [i_0 - 1] [i_3 + 1]))) & (~-446016650)));
                        }
                    }
                }
                arr_15 [i_1] [i_1] [i_1] = var_12;

                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    arr_18 [i_0 + 3] [i_0] [4] &= (((((var_2 ? 446016649 : (arr_3 [i_0 + 4] [i_4 + 1])))) && (((1023 ? (arr_3 [i_0 - 3] [i_4 + 1]) : (arr_3 [i_0 - 2] [i_4 - 1]))))));

                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        arr_21 [i_0] &= (arr_1 [22]);

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_26 [i_0] [i_0] = -446016677;
                            arr_27 [i_5] [i_5] = (min((!-446016622), var_8));
                            arr_28 [i_6] [i_4 - 1] [4] [0] = -var_12;
                            arr_29 [i_5] [i_1] [i_4 + 1] [1] = var_14;
                            arr_30 [i_5] [i_1] [i_4 - 1] [i_5] [i_6] = -446016622;
                        }
                    }
                    for (int i_7 = 3; i_7 < 23;i_7 += 1)
                    {
                        arr_35 [i_1] [i_4] [i_0 - 1] = ((-(max(446016660, 40936))));
                        arr_36 [i_7 + 1] [13] [i_0] = (min(65535, (max((min(-446016622, 65535)), (~var_18)))));
                        arr_37 [i_0] [17] [i_4 - 1] = (arr_25 [i_0] [i_0 - 2] [i_0 + 3] [i_0 + 3] [20]);
                        arr_38 [i_0 + 3] [i_0 + 3] [i_4 - 1] [14] [i_7] = (((((var_16 + 2147483647) << (((~var_14) - 13409456688774366729)))) == (arr_0 [i_0 - 1])));
                    }
                    arr_39 [i_0] = var_13;
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_42 [i_1] = (max((max((!var_1), 17815049025131140782)), ((((max(0, var_3)) / (min(var_1, var_13)))))));
                    arr_43 [i_8] [i_8] [i_8] [18] = (!2862094676);
                    arr_44 [i_0 - 1] [i_1] [11] = (arr_12 [i_1] [i_1] [1] [i_1]);
                }
            }
        }
    }
    var_20 = (var_9 * (min(var_11, var_6)));
    var_21 = -446016648;
    #pragma endscop
}
