/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 ^= var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = (!1);
                                arr_15 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3] = (~(arr_11 [i_0] [4]));
                                var_18 = -9174879147639710426;
                                var_19 *= (min((arr_3 [i_0] [i_2] [i_0]), -0));
                            }
                        }
                    }
                    var_20 = (min(var_20, 1));
                    arr_16 [i_0] [i_1] = (arr_2 [6] [i_1] [i_0]);
                }
            }
        }
    }
    var_21 *= 0;
    #pragma endscop
}
