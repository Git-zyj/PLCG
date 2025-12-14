/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = (((((min(var_8, var_3))) ? (-112 == var_12) : (var_3 * var_7))));
    var_15 = (!var_1);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = ((((min(1, 43591))) ^ (max((((-23832 + 2147483647) << (62 - 62))), (!43591)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_17 = ((((max((arr_10 [i_0] [i_0 + 1] [i_2] [i_1] [i_2] [i_2] [i_3 + 2]), (arr_7 [8] [i_0 + 1] [8] [i_1 - 2] [i_1] [i_2])))) ? ((min((arr_3 [i_0] [i_0 + 1] [i_1]), (arr_7 [i_0] [i_0 + 1] [i_1] [i_1] [i_1 - 1] [i_3])))) : (arr_10 [19] [i_0 + 1] [i_2] [i_0] [i_2] [i_0 + 1] [i_3 + 3])));
                                var_18 = (((arr_8 [i_2] [i_0 - 1] [i_1 - 2]) ? (~157) : (arr_8 [i_2] [i_0 + 1] [i_1 - 2])));
                                var_19 = ((((-(arr_4 [i_3] [i_3 + 2] [i_3] [i_3 + 2]))) + (((arr_4 [i_3] [i_3 + 2] [i_3] [i_3 + 1]) - (arr_4 [i_3] [i_3 - 1] [i_3] [i_3 + 1])))));
                            }
                            var_20 &= ((((((max(var_3, var_10)) ? ((((arr_8 [i_1] [i_1] [6]) || 0))) : var_3))) ? ((min(var_1, 1))) : (((arr_8 [i_1] [i_1] [i_3 + 2]) / (arr_8 [i_1] [i_1] [i_3 + 2])))));
                            arr_12 [i_2] = (((((min(43611, 46094))) ? (((arr_0 [i_3]) ? (arr_0 [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]))) : ((2304508880 ? var_11 : 199)))) < (arr_11 [i_2] [i_2] [i_2] [i_2] [14]));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
