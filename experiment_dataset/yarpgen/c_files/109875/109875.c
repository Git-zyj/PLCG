/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 46781;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_1] = 18779;
                    var_15 = (max(var_15, 18755));
                    arr_10 [i_1] = 187;
                    var_16 = 18765;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_17 *= 0;
                    arr_20 [i_4] [i_4] [i_4] = (-9223372036854775807 - 1);
                    arr_21 [i_3] [i_4] [i_5] = 1;
                }
            }
        }
    }
    #pragma endscop
}
