/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_2);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [9] [i_1] = (((~0) != var_2));
                                arr_17 [i_0] [i_1 - 1] [i_2] [i_1] [10] = ((((((arr_12 [i_0 - 1] [i_1]) ? (arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 2] [2]) : 2192286782))) + ((var_0 ? (arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_2]) : var_0))));
                                arr_18 [i_0 - 1] [0] [7] [i_3] [i_3] [i_1] = ((var_4 ? (~4294967295) : (((arr_8 [i_1 - 1] [i_1] [13] [13]) ? (max(8778913153024, 4487640589789663089)) : 1))));
                                arr_19 [i_3] [i_0] [i_3] [i_3] [i_3] [i_4] [6] = 17254360425340679439;
                            }
                        }
                    }
                }
                arr_20 [i_1] [11] = (min(var_4, (((!((((arr_8 [i_0] [i_1] [i_1] [i_1]) ? (arr_4 [3] [i_1]) : var_4))))))));
                arr_21 [i_0 - 1] [i_0 - 1] [i_1] = ((-(!var_1)));
                arr_22 [i_0 - 1] [i_1] [i_1] = var_5;
                arr_23 [i_0] [11] [i_1] = ((((!var_9) ? 2102680510 : (max(3547273873, 4487640589789663089)))));
            }
        }
    }
    #pragma endscop
}
