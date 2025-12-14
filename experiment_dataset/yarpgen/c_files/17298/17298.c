/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [6] [i_2] [i_0] [i_4] = 3;
                                var_13 = (max(var_13, ((max(var_1, var_7)))));
                            }
                        }
                    }
                    var_14 = (max(var_14, (max((min(((min((arr_5 [i_1] [i_1] [i_2] [i_0]), 0))), (~var_6))), (arr_1 [8])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_15 = var_5;
                                arr_18 [i_0] [i_1] [i_2] [i_5] [i_0] = 137;
                                var_16 += (min(0, ((+((65515 >> (((arr_1 [10]) + 495440444))))))));
                                arr_19 [i_0] [i_0] [i_2 - 1] = min((!1), (arr_9 [i_0] [i_1] [i_2] [i_5] [i_6 + 1] [i_6] [i_1]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
