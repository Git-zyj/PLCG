/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_2] |= ((((((607312851 ? (arr_7 [i_0]) : 2762233975)) > ((max(var_10, 607312847))))) ? -var_1 : (min((((arr_0 [12] [12]) % 1)), (arr_3 [i_0] [i_1] [i_1])))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((188 ? 5330903828981116535 : (arr_7 [i_2])));
                    var_12 = 65535;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_0 + 1] [i_1] [6] = 138748851959121942;
                        arr_13 [i_1] [i_1] [i_2] [i_1] [i_1] = max((min(((((arr_6 [i_2] [i_1] [i_1]) ? 0 : 1))), (arr_6 [i_0 - 1] [i_3] [2]))), 1);
                        var_13 = min((max((min(-1, var_7)), (((~(arr_10 [i_0] [i_1] [i_1] [i_0])))))), (((!((max(var_8, (arr_3 [i_1] [i_1] [5]))))))));
                    }
                    for (int i_4 = 3; i_4 < 11;i_4 += 1)
                    {
                        var_14 = (max(var_14, (arr_16 [i_1] [i_1])));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_15 = (min(var_15, (((~(arr_18 [8] [i_4 - 1] [i_4 - 1] [i_5] [8]))))));
                            arr_19 [8] [i_4 + 2] [i_1] [5] [i_0] = arr_16 [i_0 - 1] [i_0 - 2];
                            var_16 = (arr_16 [i_0 - 2] [i_1]);
                            var_17 += ((((var_5 ? var_9 : (arr_6 [i_0] [i_0] [i_0]))) >> (((arr_1 [i_0]) - 49375))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, ((min(var_7, var_2)))));
    var_19 = var_5;
    var_20 = (31 | -70546464);
    #pragma endscop
}
