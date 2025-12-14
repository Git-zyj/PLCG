/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_9));
    var_19 = (min(var_19, ((min((520172921 && 712360181), (min(1, -0)))))));
    var_20 = ((1 ? (((max(2729191756417185695, 1)) | ((min(1, -712360177))))) : (((max(var_15, (min(var_1, var_0))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 ^= (min((max(-712360197, var_14)), ((min((arr_2 [i_0]), (arr_3 [8]))))));
        var_22 = ((((1 ? (((arr_3 [i_0]) ? 0 : 712360173)) : (((arr_1 [i_0]) ? (arr_2 [i_0]) : var_15)))) << ((((712360196 & (arr_1 [i_0]))) - 712343552))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((max((max((var_0 * 1), (1 - 112))), var_6)))));
                                var_24 = (min(var_24, ((((arr_7 [6]) ? -2 : (((-712360177 + 2147483647) >> 1)))))));
                            }
                        }
                    }
                    var_25 = (min(var_25, var_8));
                    var_26 += ((((((((var_6 ? (arr_13 [i_0] [i_0] [i_2] [i_1] [i_0]) : -126))) ? 2 : var_4))) > (arr_0 [i_2 + 4])));
                    var_27 = (max(var_27, (((!(((arr_1 [i_1]) > (!2729191756417185695))))))));
                }
            }
        }
    }
    var_28 = (min(var_28, var_2));
    #pragma endscop
}
