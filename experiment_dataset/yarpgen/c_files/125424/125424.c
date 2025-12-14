/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = -93;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] [i_3] [i_0] [i_1] [i_0] = (arr_3 [i_0] [i_1]);
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_3 - 2] [i_4] [3] = (arr_7 [i_3 + 1] [i_0]);
                                arr_13 [14] [i_1 - 1] [1] [10] [i_0] = (min(((((arr_2 [i_0] [i_3] [i_0]) || 1558698652))), 1));
                                var_13 *= ((((((arr_3 [i_4] [i_1]) * 1))) ? (((!(arr_1 [i_4] [i_4])))) : 96));
                                var_14 += (max(0, (arr_6 [i_0] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 *= ((-(((((var_5 ? 108 : 1))) ? (108 > var_11) : -1))));
    #pragma endscop
}
