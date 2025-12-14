/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = (((((((max(169, -8502))) << (!-8515)))) ? ((((!(-8510 * 207))))) : -8490));
                var_11 += 1;
            }
        }
    }
    var_12 = -11;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_13 += ((max((max(-39, -8490)), 19)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_14 = 0;
                            var_15 = (max((((-(arr_9 [i_2 + 2] [i_3] [i_4])))), (arr_7 [i_2] [i_2 + 2] [i_2 + 1])));
                            var_16 = (((~-8484) ^ ((-39 ^ (arr_10 [i_2 + 1] [i_2])))));
                        }
                    }
                }
            }
        }
    }
    var_17 = 8484;
    var_18 = var_9;
    #pragma endscop
}
