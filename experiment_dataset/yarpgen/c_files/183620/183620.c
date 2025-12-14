/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (min(-98, (-127 - 1)));
    var_11 = (max(var_0, 127));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_12 *= (min(((-127 ^ (arr_1 [5]))), (min((arr_7 [i_1] [i_4]), -576460752303423488))));
                                var_13 = (max((((((-127 - 1) + 2147483647)) >> (!2688329512123016786))), ((-(!1067266234378751667)))));
                            }
                        }
                    }
                    var_14 |= arr_5 [i_0] [i_0] [21] [4];
                    arr_13 [i_2] [i_1 - 3] = (min(((((max((arr_11 [i_0] [17] [17] [i_0 + 1] [i_1 - 3] [i_2] [i_1]), (arr_12 [i_2] [i_0 - 1])))) ? (((arr_1 [i_0]) ? (arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2 + 1] [i_2]) : 101)) : (((min((arr_6 [i_1] [i_1]), (arr_9 [i_0] [i_1 - 3] [i_1 - 3] [i_2 - 1]))))))), ((min(((((arr_11 [24] [24] [24] [i_0] [i_1] [16] [16]) >= (arr_12 [i_0] [i_1 - 3])))), (arr_3 [i_0 - 1] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_18 [i_5] [i_1] [i_2 - 1] [i_5] [i_6] = (min(-125, ((min(((!(arr_10 [i_0] [i_1] [i_1 - 1] [i_1] [20] [i_5 - 1] [1]))), (((arr_16 [17] [i_1 - 3] [i_2 + 1] [17] [i_6]) || 59818)))))));
                                var_15 = (!44220);
                            }
                        }
                    }
                    arr_19 [i_2] [i_1] [i_0] = ((((((arr_5 [i_1 + 1] [8] [i_2] [6]) >> (((arr_16 [i_2 + 1] [i_1 - 3] [i_1 - 1] [10] [i_0 - 1]) - 54564))))) && ((!(-127 - 1)))));
                }
            }
        }
    }
    #pragma endscop
}
