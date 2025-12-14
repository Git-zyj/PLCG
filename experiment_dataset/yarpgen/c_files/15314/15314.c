/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = var_16;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_21 = (min(((max((arr_6 [i_0 - 1] [i_1 - 3] [i_2]), (arr_6 [i_0] [i_0 - 1] [i_0 + 1])))), (((arr_6 [i_0] [i_0] [i_2]) << (((arr_6 [i_3] [i_1] [i_1]) - 147))))));
                                var_22 = ((-((-((-(arr_2 [i_1] [i_1])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_1] [i_6] [i_2] = ((132 + (268173312 >= 13281640580093800908)));
                                arr_19 [i_6] [i_6] [i_6] [i_6] [i_1] = ((120 ? (max((arr_4 [i_5] [i_1]), var_9)) : (!var_3)));
                                arr_20 [i_1] = ((!((max((arr_2 [i_0 - 1] [i_0]), (arr_2 [i_0 - 1] [i_0 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 ^= (~((-(min(2147483647, 2147483647)))));
    var_24 = var_17;
    var_25 |= (var_2 < var_2);
    #pragma endscop
}
