/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((!140) ? var_7 : 1222835946))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 += (arr_1 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = ((~(arr_12 [i_0] [i_3] [i_2] [i_3] [6] [i_4])));
                                var_17 = (arr_0 [i_4] [i_4 - 2]);
                                var_18 = ((((!(arr_12 [i_0] [i_1] [5] [i_0] [i_0] [i_0]))) ? (((arr_1 [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_14 [i_0] [i_0] [i_1] [6] [i_2] [i_0] [i_4]))) : ((((!(((1535974787 ? 3650983960989039026 : (arr_3 [i_1]))))))))));
                                var_19 = (((((((arr_0 [i_4] [i_1]) / (arr_13 [i_0] [i_1] [5] [i_0] [i_4] [i_4]))) / (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [1]))) >= (((((536870904 ? 152 : (arr_6 [i_1] [i_1]))) << (37504 - 37493))))));
                            }
                        }
                    }
                }
            }
        }
        arr_15 [i_0] = (arr_0 [i_0] [i_0]);
        arr_16 [i_0] = (((((4197624071 ? var_10 : 116))) || ((((arr_14 [9] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    #pragma endscop
}
