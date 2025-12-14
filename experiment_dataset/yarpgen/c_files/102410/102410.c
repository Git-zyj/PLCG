/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (-127 - 1);
                arr_6 [i_0] [7] [i_0] = (max((max(593279215, (arr_3 [i_0] [i_0] [i_0]))), ((max(-22187, (arr_1 [9] [i_1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_10 = ((max((~var_2), -13521)) | 31);
                                var_11 = (min(var_11, (max((((arr_11 [i_3 + 2]) ? (arr_7 [i_6 + 1] [i_2 - 4]) : (arr_7 [i_6 + 1] [i_2 + 1]))), (arr_16 [i_2] [i_4] [i_6 + 2] [i_5] [i_3 + 3])))));
                            }
                        }
                    }
                    arr_20 [i_2 - 4] = ((228 & (((((-(arr_9 [i_2 + 1] [i_4])))) + ((35 ? var_8 : 2274592410))))));
                }
            }
        }
    }
    #pragma endscop
}
