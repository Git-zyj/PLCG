/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min(var_8, 604388296))) ? -var_4 : (((var_4 ^ var_3) ? var_5 : (!var_8))));
    var_11 = var_7;
    var_12 = min(((max(var_8, (!var_3)))), (min(-604388299, ((56294 ? var_0 : var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = (((arr_0 [i_3] [i_1]) ? (arr_4 [i_1] [18] [i_0]) : (min((((!(arr_3 [i_0])))), (((arr_2 [i_0] [i_0]) * 34898))))));
                                arr_12 [i_0] = min((2393891243170685169 & 5), (((var_1 < var_3) & (arr_1 [i_1] [i_0]))));
                                var_14 += var_9;
                                var_15 = ((var_1 || (((var_3 ? ((1 ? (arr_9 [9] [i_0] [i_1] [i_2] [6] [i_4]) : 5)) : (arr_8 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0]))))));
                                var_16 = (min(var_16, (arr_2 [i_0] [16])));
                            }
                        }
                    }
                    arr_13 [i_0] = ((((((var_8 ? 18347 : (arr_3 [8])))) ? 56295 : 1)));
                    var_17 = var_6;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((((arr_5 [i_0 + 2] [12]) ? (min((arr_5 [i_0] [8]), 2393891243170685194)) : (arr_10 [18]))))));
                                var_19 |= var_7;
                                arr_19 [i_0] [i_5] [i_1] [i_0] = (((((((max(5326075697381233499, 148))) & 2393891243170685162))) ? (((~var_5) % (arr_10 [i_0]))) : (((max((!var_5), (!251)))))));
                                var_20 = var_3;
                            }
                        }
                    }
                    var_21 = (!-27548);
                }
            }
        }
    }
    #pragma endscop
}
