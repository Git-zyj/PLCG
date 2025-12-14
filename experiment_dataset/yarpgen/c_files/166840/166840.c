/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_12;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = (((arr_1 [i_0] [i_0 - 2]) ? (arr_2 [i_0] [i_2]) : (max(var_15, ((0 ? 3407870957 : 3407870937))))));
                        var_19 = -1;
                    }
                    var_20 = var_0;
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 7;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_13 [i_0] [3] [i_0] [i_0 + 1] &= (min(16, (arr_2 [i_5] [i_1])));
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_4 + 3] [i_4] [i_5] = ((887096353 ? -293762826 : ((-416187810 ? -416187810 : -1))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
