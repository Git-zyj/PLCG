/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (7370268935099427533 / 7370268935099427533);
                arr_5 [1] [i_1] [i_1] = -7370268935099427533;
            }
        }
    }
    var_15 = max(var_7, -var_14);
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_16 -= (max(-18179, -9223372036854775788));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_17 = (arr_15 [i_2] [i_3] [i_4] [i_2]);
                                var_18 &= ((((((arr_14 [i_6] [i_5 + 2] [i_4] [i_3] [i_6]) ? var_5 : -15714))) ? (~1) : -7370268935099427535));
                                arr_18 [i_2] [7] [7] [i_5] [i_2] = ((~(((-12857 > (arr_16 [i_2] [i_3] [i_4] [6] [i_6]))))));
                                arr_19 [i_2] [i_2] [i_4] [i_5 + 1] [i_6] [i_4] [i_3] = ((~((max((arr_1 [i_2 - 1]), (arr_1 [i_2 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
