/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [0] [i_2] [i_1] [0] [i_2] |= (((arr_4 [i_0 - 1] [i_0 - 1] [i_2]) / (((arr_7 [i_3 - 2]) ? (arr_7 [i_3 - 1]) : (arr_10 [10] [i_0] [i_3 - 2] [7] [i_4])))));
                                var_12 = (min(var_12, ((((-169754737 ? (min(7753068475638167150, 6255218354306537197)) : ((min(var_11, var_7)))))))));
                                var_13 = (min(var_13, ((min(((var_7 && ((max(var_1, -10839))))), ((!((min(7348877265991287513, var_6))))))))));
                                arr_15 [i_1] [i_1] [i_1] [6] = (((((169754763 ? -169754737 : 7753068475638167123))) > (arr_6 [i_0 + 1] [i_0] [i_0 - 1])));
                            }
                        }
                    }
                }
                arr_16 [i_0 - 2] [i_0] = -7753068475638167103;
                var_14 -= arr_10 [6] [i_0] [i_0 - 3] [i_1] [i_0];
                arr_17 [i_0 - 1] [i_0] = (max((((arr_12 [i_1] [i_1] [i_0 + 1] [i_1]) ? (arr_10 [i_0 - 3] [i_1] [i_0 - 1] [i_1] [i_0 - 1]) : 4611686018427387903)), (((!(arr_9 [i_1] [i_1] [i_1] [i_1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    arr_25 [i_7] [i_6] [i_7] [i_7] = ((-(var_5 > -1342742733)));
                    arr_26 [i_5] [6] = arr_20 [i_6] [i_6];
                }
            }
        }
    }
    #pragma endscop
}
