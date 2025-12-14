/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_13 = ((-((14738 + (arr_2 [3] [i_1 + 2] [i_1 - 3])))));
                    arr_8 [i_2] [i_2] [i_2] [i_1] = (((arr_6 [i_1] [i_1 - 3] [i_1 + 1]) ? var_9 : (((((min(var_12, (arr_1 [i_0] [7])))) > (arr_5 [i_0] [i_0] [1]))))));
                    var_14 = var_6;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_15 = (((1 ? 6663171067113165396 : 62546)) + (arr_1 [i_1 + 2] [i_1 + 1]));
                        arr_14 [i_0] [i_0] [11] [11] = (~4159492099);
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_16 = (min(var_16, (((((arr_1 [i_0] [i_0]) < var_0)) ? ((-(arr_15 [i_0] [3] [i_0] [i_0] [i_0] [i_0]))) : (((arr_2 [i_1] [i_1] [i_0]) | var_0))))));
                        var_17 = ((~(arr_6 [i_0] [i_0] [i_0])));
                        arr_18 [i_5] = ((arr_17 [i_0] [i_1 + 1] [i_3] [i_5]) ? (arr_1 [i_5] [1]) : (4159492099 || 1));
                        var_18 = ((var_11 ? (arr_7 [i_5] [i_1] [i_1 + 1]) : (((arr_0 [10] [i_1]) ? var_3 : var_11))));
                    }
                    var_19 = -var_3;
                }
                var_20 = 135475202;
            }
        }
    }
    var_21 = var_0;
    var_22 = (max(var_22, (((-((((-5468400075048874008 > 1008) >= var_0))))))));
    #pragma endscop
}
