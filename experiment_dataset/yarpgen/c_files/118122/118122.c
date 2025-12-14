/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, -2165460476559343275));
                                var_13 = (arr_10 [i_0] [i_4 + 1] [i_3 + 1] [i_0]);
                                arr_15 [i_0] [8] [i_2] [i_2] [1] = (arr_6 [i_3] [1]);
                                var_14 = (min(var_14, (arr_4 [i_1] [i_1])));
                            }
                        }
                    }
                    var_15 += ((var_10 ? (2165460476559343246 > var_9) : (((((arr_12 [i_0] [i_0] [i_1] [0]) * (arr_13 [i_0] [17] [i_1] [17] [14])))))));
                    arr_16 [i_0] [i_0] [i_2] = ((53597 ? 23 : 0));
                }
            }
        }
    }
    var_16 += var_4;
    #pragma endscop
}
