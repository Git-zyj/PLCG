/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max((max(((max(1948105120, var_8))), (max(-5730200613436340961, 1948105121)))), (((max(var_18, 1948105121)) / 1948105121)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (max((max((max((arr_5 [i_1]), -1948105121)), -var_14)), (max((-1948105121 * 1), ((max((arr_0 [i_0] [i_0]), var_9)))))));
                var_22 += (max((max(-var_11, (((var_6 ^ (arr_3 [i_0] [i_1])))))), ((max((arr_3 [i_0 - 1] [i_0]), (arr_3 [i_0] [i_0 - 1]))))));

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_1] = (max((var_8 / -1948105127), (max(1948105130, (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                    arr_10 [i_0] [i_0] [i_0 - 1] [i_0] = ((!((max((var_5 < var_7), (max(var_8, var_3)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_18 [i_4] [i_3] &= (max((max((-5730200613436340977 - var_5), (max(2109212881453375273, var_14)))), ((((14926 < var_5) | ((max(72, (arr_14 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] [i_4])))))))));
                                var_23 += max(((((max(var_0, 1658719465496747202))) + (max(var_16, (arr_3 [i_0 - 1] [i_1]))))), (((max(3750854796, 89)))));
                                arr_19 [i_4] [i_1] [i_2 + 1] [i_3] [i_4] |= (max((max(((max(0, 86))), (max(-22078, (arr_1 [i_0]))))), ((((((max((arr_8 [i_0] [i_0] [i_2] [i_3 + 1]), 49547)))) & (max(8804567059352944101, 1)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 ^= (max(8993004421942436297, ((max(-25965, -1948105121)))));
    #pragma endscop
}
