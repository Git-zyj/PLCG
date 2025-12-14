/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = min(((min(((var_9 ? var_14 : (arr_2 [i_0]))), (arr_3 [i_0] [i_1] [i_1 + 1])))), ((-(max((arr_0 [i_0]), (arr_4 [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_2] [i_1 - 1] [i_0] [i_0] = ((185 ? ((max(66, 208))) : ((-(arr_8 [1] [i_2] [i_1 + 1])))));
                                var_20 = (max(var_20, ((max((max(((var_1 ? var_12 : (arr_9 [i_1] [i_4] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))), ((max(179, var_15))))), ((min((arr_12 [i_3] [i_4]), var_4))))))));
                                var_21 = (min(var_21, ((min(((~((var_7 ? var_1 : var_10)))), (((((252201579132747776 ? (arr_6 [i_2] [i_2] [i_2] [i_2]) : var_10)) >= 185))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 &= (min(((var_6 ? var_15 : (~var_15))), var_13));
    var_23 = (min(var_23, var_15));
    var_24 = ((((((2386796070547506107 ? var_0 : -252201579132747776)))) ? ((var_2 / (~var_2))) : var_13));
    var_25 = var_1;
    #pragma endscop
}
