/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = var_17;
                    var_21 = 2557407104;
                    var_22 = (((((min(61, (arr_3 [i_0]))) ? (arr_6 [i_0] [i_1 - 1] [i_2 - 1]) : (((var_9 ? var_5 : (arr_3 [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_23 = ((~(arr_12 [i_0] [i_2] [i_2 + 1] [i_3] [i_2])));
                                var_24 = min(-var_12, ((min(var_4, (arr_10 [i_0] [i_1] [i_2 - 1] [i_3] [i_4] [i_3] [i_2])))));
                                var_25 = (((arr_4 [i_0] [i_1 - 1]) ? ((8184 ? (arr_4 [i_3] [i_1 + 1]) : (arr_4 [i_0] [i_1 + 1]))) : (((arr_4 [i_0] [i_1 - 2]) ? (arr_4 [i_0] [i_1 + 1]) : -13083))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (max(var_16, -var_6));
    var_27 += 0;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            {
                var_28 = ((((((((arr_18 [i_5 + 1] [i_6 - 1] [i_6 - 2]) && 131071)) ? ((var_3 ? var_12 : var_14)) : var_19))) ? (~1905997551480791693) : (!-16)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_29 = (max(((~(arr_22 [i_8]))), ((~(arr_17 [i_5 - 1] [i_5 - 1] [i_8])))));
                            arr_27 [i_5 - 1] [i_5 - 1] = (max((arr_14 [i_6 - 3]), (max(((((arr_23 [i_5 + 2] [i_7] [i_8]) || var_2))), (min((arr_23 [i_5 + 1] [i_5 + 1] [i_8]), var_10))))));
                            var_30 = (min(((((arr_26 [i_5 - 1] [i_5] [i_5 - 1] [i_6 - 3]) ? (arr_14 [i_5 + 1]) : (arr_14 [i_5 + 2])))), (((arr_14 [i_5 - 1]) ? var_12 : (arr_26 [i_5 + 1] [i_5] [i_5 + 1] [i_6 - 2])))));
                        }
                    }
                }
                var_31 = (min(var_31, ((min((~var_12), ((((var_5 / var_14) ? var_11 : var_18))))))));
            }
        }
    }
    #pragma endscop
}
