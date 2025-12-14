/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 *= (23527 && 23527);
                    arr_9 [i_0] [1] [i_2] [i_2] = var_0;
                    arr_10 [i_0] = (var_9 << (((arr_2 [6] [i_1 - 3] [6]) - 55)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_3] [i_1] [i_2] = (((arr_14 [i_0] [i_1] [i_1] [i_0] [i_4]) + ((+((((arr_7 [i_0] [i_2]) >= (arr_0 [i_2] [i_1]))))))));
                                var_14 = (min((((arr_0 [i_4 - 1] [i_1 - 3]) ? (max((arr_0 [i_0] [i_0]), var_3)) : (((var_9 >= (arr_6 [i_0] [i_1])))))), ((min((arr_7 [i_1 + 1] [i_1 - 1]), var_11)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (~var_1);
    #pragma endscop
}
