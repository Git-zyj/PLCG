/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1023;
    var_17 = 1023;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_14 [i_0] [i_2] [i_0] [i_2] [i_2] [i_0] = (arr_12 [i_0] [i_2] [i_1] [i_2] [i_2] [i_3]);
                        arr_15 [i_0 - 2] [i_1 + 1] [i_2] [i_2] = (min((min((min(3852475570809350498, 0)), (!var_5))), 1023));
                        arr_16 [i_2] [i_2] = ((+(((arr_9 [i_2] [i_2] [i_1 + 1] [i_2 + 1]) ? (arr_9 [i_2] [i_1] [i_1 - 1] [i_2 + 1]) : (arr_9 [i_2] [i_1] [i_1 + 2] [i_2 - 1])))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_19 [i_0 - 1] [i_1] |= ((((min((arr_6 [i_4] [i_1 + 1]), var_11))) || ((min((((arr_8 [i_0] [i_1] [i_0] [i_0]) ? (arr_6 [i_0 - 3] [i_1]) : (arr_11 [i_1] [4] [i_2 - 1]))), (~127))))));
                        var_18 = var_7;
                        arr_20 [i_2] [i_1 + 2] [i_2] [i_4] [i_2] [i_4] = (((~(var_3 | var_1))) / (min(((0 ? 21808 : (-127 - 1))), (arr_11 [i_2] [i_2] [i_2]))));
                        arr_21 [i_0] [i_0 - 3] [i_0] [i_2] = (max(((~(arr_9 [i_2] [i_1 + 3] [i_2 + 1] [i_4]))), ((((min((-2147483647 - 1), var_9))) ? (arr_10 [i_2] [i_2] [i_2] [i_2 + 1]) : ((-121 ? -49 : (-2147483647 - 1)))))));
                    }
                    var_19 = (max(var_19, (max((arr_13 [i_1] [i_1 + 4] [i_1 + 3] [i_1] [i_1] [i_1]), ((((min(16, var_12))) ? (min((arr_17 [i_1]), var_13)) : ((min((-127 - 1), (arr_7 [i_0]))))))))));
                    arr_22 [i_2] [i_1] [i_0] [i_2] = var_14;
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_20 = ((arr_10 [i_5] [i_1 + 3] [i_5] [i_1 + 3]) - var_11);
                                var_21 = -1366686211;
                                arr_29 [i_0] [1] [i_5] [i_5] [i_6] [i_7] = (((((var_4 ? 1749150811 : 239))) ? (!var_6) : (((arr_10 [i_5] [i_1 - 2] [i_1 - 1] [i_1 - 2]) << (((arr_10 [i_5] [i_1 - 2] [i_5] [i_1 - 2]) - 35866))))));
                                arr_30 [22] [i_1] [i_5] [i_5] [i_5] [20] [i_7] = ((((((413519401 << (511 - 509))))) ? (arr_8 [0] [i_5] [0] [15]) : ((-((min((arr_8 [i_0] [i_5] [i_7] [16]), var_13)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
