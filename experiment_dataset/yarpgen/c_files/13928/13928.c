/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (13 >> (var_7 - 983740989));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 ^= (((arr_2 [20] [i_1]) & (max((arr_7 [16] [10] [i_0]), -474013614))));
                    var_14 |= ((-(arr_4 [i_2] [i_0])));
                    var_15 = ((((((474013601 / var_0) != var_5))) >> (((arr_3 [15] [15] [3]) - 3119328436))));
                    var_16 = (arr_8 [1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [2] [i_1] [i_3] [8] [i_4] = ((((max(-474013616, 3160501490))) ? -474013614 : (((((((arr_8 [i_0] [i_2]) + 2147483647)) << (4132479592 - 4132479592))) >> (3160501493 - 3160501487)))));
                                var_17 = -474013614;
                                var_18 = (min(var_18, (((+((var_0 ? (arr_12 [i_3 - 3] [i_3 + 2] [i_3] [i_4] [i_3 - 1]) : (((!(arr_9 [i_1] [20] [24] [i_2])))))))))));
                                var_19 = (max(var_19, ((max((16383 / 2621524875), (-130166185 != 3160501488))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
