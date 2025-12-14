/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((var_3 <= (~-945169686)))))));
    var_11 = (~var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_4] = (((~(arr_12 [i_3 - 1] [i_3 + 1] [i_1 - 1] [i_1 - 1] [i_0] [i_0]))));
                                var_12 = ((((max(2078512814, -1414221104159002866)))) ? 3695436097809613388 : (((min(((((arr_12 [i_0] [16] [i_2] [i_3] [i_0] [i_2]) <= (arr_12 [i_4] [i_3 - 1] [i_2] [i_1] [17] [i_0])))), (arr_10 [i_1 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]))))));
                            }
                        }
                    }
                    var_13 |= (arr_8 [i_0] [13] [i_1] [i_2] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_14 = (((arr_12 [i_0] [i_0] [i_0] [7] [i_0] [i_0]) ? (arr_17 [4] [i_1] [4]) : (((((arr_14 [i_6] [i_5] [i_2] [i_0]) ? (arr_7 [1] [i_1 - 1] [i_0]) : var_9))))));
                                var_15 *= (min((((arr_17 [i_1 + 1] [i_1 - 2] [i_1 - 1]) ? (arr_17 [i_1 + 1] [i_1 - 2] [i_1 - 2]) : (arr_17 [i_1 - 2] [i_1 + 1] [i_1 - 2]))), (arr_17 [i_0] [0] [i_1 - 2])));
                                var_16 = (!((max((arr_16 [i_0] [i_1] [i_1 - 1] [10] [i_6]), (arr_16 [i_0] [i_1 - 2] [i_1 - 1] [i_5] [i_0])))));
                            }
                        }
                    }
                    var_17 = (((max((arr_16 [i_0] [i_0] [i_0] [1] [7]), (arr_6 [i_2] [i_0] [i_0]))) >= (((((arr_16 [13] [i_1 - 2] [3] [i_2] [i_1 - 2]) <= (arr_16 [i_0] [i_0] [i_1 + 1] [i_2] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
