/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((var_8 <= (((!65535) & var_4))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_16 = var_3;
                    var_17 = var_14;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_18 ^= ((-(arr_6 [i_0] [i_1] [i_0])));
                    var_19 -= (arr_6 [i_0] [i_0 - 2] [i_0]);
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_20 = (arr_9 [i_0] [i_1] [i_0 - 1] [i_4]);
                    var_21 = (max(var_21, ((var_0 < (arr_0 [i_4])))));
                }
                var_22 = var_3;
            }
        }
    }
    #pragma endscop
}
