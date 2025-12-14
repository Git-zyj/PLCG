/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (((min(119, 213))));
                    var_20 = (max(var_20, (min(128, 241))));
                    var_21 = ((((((max((arr_1 [18] [i_2]), (arr_4 [i_1] [i_0])))) ? (~26) : (!58))) < (((arr_2 [i_0]) ? ((min((arr_4 [i_0] [i_0]), (arr_1 [i_2] [i_1])))) : (!4)))));
                    arr_9 [i_0] [i_2 - 3] [i_0] [i_0] = (max(58, (--212)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_3] = var_13;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_21 [i_3] = (((((!((((arr_15 [i_3] [i_3] [i_3] [i_3]) * 201)))))) <= (((((arr_13 [4] [4] [i_5]) / (arr_8 [i_3] [i_4] [i_5] [i_3]))) + (arr_2 [i_3])))));
                            var_22 = (min(var_22, (~142)));
                        }
                    }
                }
                var_23 = (max(var_23, ((((((((var_13 ? 16 : var_9)) == (((201 == (arr_2 [18]))))))) & ((((max((arr_0 [i_3 + 1]), 14))) ? (arr_19 [i_3 - 1] [i_3 + 1] [2]) : var_12)))))));
                var_24 = (((56 + 135) ? ((-var_16 ? (((arr_12 [i_3 - 1]) ? 27 : (arr_4 [i_4] [i_3]))) : (arr_12 [2]))) : ((((var_17 ? var_2 : 133))))));
                arr_22 [i_3] [i_3] = ((~(arr_11 [i_3 - 1])));
            }
        }
    }
    var_25 += (var_7 + var_14);
    var_26 = (((var_2 * -var_6) ? var_12 : ((max(14, (min(var_0, 82)))))));
    var_27 = var_3;
    #pragma endscop
}
