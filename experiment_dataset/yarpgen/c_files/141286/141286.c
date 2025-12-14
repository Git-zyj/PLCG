/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((arr_0 [i_0]) - ((10774007236053106645 ^ (arr_1 [i_0 + 1] [i_0]))))));
        var_19 = ((min((arr_0 [i_0]), ((min(241, 194))))));
        var_20 = (((((((max((arr_2 [i_0]), (arr_0 [i_0])))) ? (arr_1 [i_0 + 1] [i_0]) : ((min(1, var_14)))))) ? (arr_0 [i_0]) : (((((arr_0 [i_0]) / (arr_0 [i_0])))))));
        arr_4 [i_0] = -18992;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_21 = ((max(4503599627370495, (var_4 & 255))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_22 = (max((arr_9 [i_1] [i_1] [i_1]), ((max(14, (arr_10 [i_2 - 2] [i_2 - 1] [i_2 + 1]))))));
                    var_23 = ((arr_7 [i_1] [i_2] [i_3]) % (max((18997 != var_18), (min(var_2, (arr_5 [i_3] [i_3]))))));
                }
            }
        }
        var_24 = (((((arr_8 [i_1] [i_1]) ? (((arr_5 [i_1] [i_1]) & var_8)) : (arr_9 [i_1] [i_1] [i_1]))) != (((-(0 < -18998))))));
        arr_11 [i_1] = (arr_5 [i_1] [i_1]);
    }
    var_25 = var_12;
    var_26 = (((var_2 ? var_9 : var_10)));
    #pragma endscop
}
