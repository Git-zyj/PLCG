/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = (+-1791525739);
                                var_20 = (max(var_20, (arr_0 [i_0])));
                                arr_10 [i_0] [i_4] [i_2] [22] = ((~(arr_7 [i_3])));
                            }
                        }
                    }
                }
                var_21 = (max(var_18, (arr_1 [i_0])));
            }
        }
    }
    var_22 = (-838398291 - 53984);
    var_23 = var_11;
    #pragma endscop
}
