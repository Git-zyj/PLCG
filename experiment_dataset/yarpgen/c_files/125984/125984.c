/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (arr_5 [i_0] [8] [4])));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) / (max(((((arr_4 [i_0] [i_4] [i_4]) ? -1454796440088778264 : (arr_0 [i_1 - 1] [i_4])))), var_8))));
                                arr_13 [i_0] [i_0] [i_0] [5] [i_3] [i_0] [i_4] = ((((((arr_10 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_4]) ? (arr_3 [i_3]) : var_11))) > (max((arr_9 [i_1 + 1] [i_0 + 1]), (arr_9 [i_1 - 2] [i_0 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = 32195;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                arr_19 [10] = (~4294967295);
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_16 = (max(var_16, -26265));
                            var_17 = (((6067 / 3) ? var_0 : var_4));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
