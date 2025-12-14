/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 = (((((~(((arr_5 [i_0] [i_2] [i_1] [i_0]) ? (arr_0 [i_2] [i_1]) : 549755813887))))) ? (((arr_1 [i_1 - 3] [i_1]) & (arr_5 [i_0] [i_1 + 1] [i_0] [i_0]))) : (arr_7 [i_0] [7] [i_2 - 1])));
                    var_17 = (max(var_17, (((~((~(arr_4 [i_0] [i_1 + 1] [4]))))))));
                    var_18 = (((4611686018427387903 * -30475) ? ((((!(arr_7 [i_0] [i_0] [i_2]))))) : (max(var_6, (arr_0 [i_2 - 1] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [8] [i_1] [i_0] [i_3 - 2] [7] = (((((2971 ? 62584 : 2971))) - ((2971 ? ((((arr_1 [6] [i_2 - 1]) ? var_2 : var_9))) : var_4))));
                                var_19 = (min(var_19, (((((((var_10 + 9223372036854775807) >> (((arr_8 [i_0] [i_3]) + 14655))))) && (arr_8 [i_0] [i_3]))))));
                                var_20 = (~1);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 23;i_7 += 1)
            {
                {
                    arr_21 [i_5] [i_5] [i_5] [i_7] = (((max(1, 0)) > (((max((arr_18 [i_7 + 1] [i_6 + 1]), (arr_18 [i_7 + 1] [i_6 - 1])))))));
                    var_21 = (min(var_21, ((((((-91 ? -1 : 9223372036854775807))) ? (arr_19 [i_5] [0] [i_7]) : -1)))));
                    var_22 = var_4;
                }
            }
        }
    }
    var_23 = (var_13 ? var_11 : ((((((var_8 ? 1 : var_2))) < var_4))));
    var_24 = var_15;
    #pragma endscop
}
