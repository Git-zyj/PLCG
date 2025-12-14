/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_11 = (max(2686452868038913421, ((min((arr_8 [i_0] [1] [i_0] [i_0] [i_1] [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]))))));
                                arr_13 [i_1] = (arr_10 [14] [i_1] [i_1] [15] [i_1] [i_1] [i_1]);
                                arr_14 [i_1] = (!-2686452868038913422);
                                arr_15 [i_2] [i_2] [i_1] [18] = ((((!(arr_9 [i_0] [i_0] [i_0] [i_0]))) ? (arr_1 [7] [i_3]) : 6));
                            }
                        }
                    }
                    arr_16 [i_1] = (!2686452868038913410);
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_21 [2] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_19 [i_5 - 2] [i_5 - 3] [i_5 - 1] [i_1] [i_5 + 1]) ? (max((arr_20 [i_6] [i_6] [5] [i_6]), var_2)) : ((max((arr_18 [i_0] [8] [0] [i_0] [i_1] [5]), (arr_5 [i_0] [i_1] [i_0] [i_1]))))));
                                arr_22 [i_0] [i_0] [7] [i_1] [18] = (((min(var_2, (arr_5 [i_5] [i_1] [i_1] [1])))));
                                var_12 = (((((-18446744073709551615 ? (min((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]), var_3)) : (((arr_19 [i_0] [1] [8] [i_1] [i_0]) >> (-2686452868038913410 + 2686452868038913440)))))) ? 2686452868038913433 : -8021));
                                arr_23 [i_1] [i_1] [i_1] [i_1] = ((~(((!((min((arr_9 [i_0] [i_0] [11] [i_0]), var_7))))))));
                                var_13 = ((-(1 - 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, 10697025893409743460));
    #pragma endscop
}
