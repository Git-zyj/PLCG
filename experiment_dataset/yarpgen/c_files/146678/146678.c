/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_10 = (min(var_10, (((-100 ? (((31 < (~16384)))) : 1)))));
                            var_11 += (((+((max((arr_1 [i_0]), -1))))));
                            arr_9 [i_0] [i_2] [i_1] [i_0] [i_0] = ((~(-1 && 32760)));
                        }
                    }
                }
                var_12 = (max(3235869733, (!4432)));
                var_13 = (arr_7 [2] [5]);
            }
        }
    }
    var_14 = var_3;
    #pragma endscop
}
