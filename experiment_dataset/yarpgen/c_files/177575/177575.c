/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_5;
    var_13 = (var_1 << (!var_3));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((max(((((max((arr_7 [i_0] [i_0] [i_0] [i_0] [i_4]), (arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4])))) / (arr_4 [i_0 + 2] [i_1] [i_1]))), (arr_4 [i_0] [i_1] [i_2]))))));
                                arr_12 [i_1] [i_2] [4] [i_3] = (((((max((arr_0 [i_0]), (arr_0 [i_0]))))) + (max((max((arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]), (arr_5 [i_2] [i_3] [i_4]))), ((max(0, (arr_6 [i_1] [i_2] [i_3]))))))));
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_1] = ((((max((arr_2 [i_0 - 3]), (arr_2 [i_0 - 1])))) | (((arr_5 [i_0 + 1] [i_0 - 2] [i_1]) & (arr_2 [i_1])))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_21 [i_1] &= (3790898652 <= 19);
                                arr_22 [i_0] [12] [i_1] [i_1] [i_5] [i_6] [12] = ((~(((arr_10 [i_0]) - (-26961 - 580928745)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
