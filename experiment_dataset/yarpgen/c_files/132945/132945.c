/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = ((9215595013371687591 ? (((max((arr_4 [i_0 + 1] [i_1 - 1] [i_0]), (arr_4 [i_0 - 1] [i_1 + 2] [i_0]))))) : ((var_12 ? var_0 : (((arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_2]) ? var_6 : 7825903506814795171))))));
                    arr_7 [i_0] = (min((((((arr_6 [i_0] [i_0] [i_0 - 1] [i_0]) || 11500)))), (min((min((arr_4 [12] [i_1] [i_0]), var_16)), 11490))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] = ((((!(arr_0 [i_0 + 2] [i_0 + 1]))) ? (((var_15 * (arr_1 [i_1 + 1])))) : (max(8059152415240320906, 2930059042))));
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_3 + 2] [i_3] [i_4 - 2] = (!var_7);
                                var_18 = ((-(((!(arr_11 [i_0 + 1] [i_0] [i_2]))))));
                            }
                        }
                    }
                    var_19 = ((var_1 ? (((arr_11 [i_0 + 2] [i_0] [i_1 + 2]) ? (1 - 1536) : ((39731 ? 39731 : var_16)))) : ((-(arr_9 [i_0])))));
                }
            }
        }
    }
    var_20 = (((63225 - 39731) / var_11));
    var_21 = (max(var_21, (((39731 | ((min(var_6, (!23577)))))))));
    #pragma endscop
}
