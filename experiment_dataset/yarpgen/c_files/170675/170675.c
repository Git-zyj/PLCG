/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = var_9;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, (((!-117) ? 1 : 1235209754))));
                            arr_10 [i_2] [i_2] = var_6;
                        }
                    }
                }
                var_14 &= 15;
                var_15 += (min((var_5 ^ var_9), (arr_4 [14] [i_1])));
            }
        }
    }
    var_16 = (min(var_6, var_7));
    var_17 = var_10;
    var_18 &= var_11;
    var_19 = var_6;
    #pragma endscop
}
