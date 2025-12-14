/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-65526 ? ((var_1 ? var_2 : var_0)) : -var_15));
    var_19 ^= var_4;
    var_20 = (max(23335, (-32767 - 1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 ^= var_5;
                    arr_7 [i_0] [i_0] [i_0] = ((4294967283 ? 48457 : 998320703));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((-25411 ? -28691 : (-32767 - 1)));
                    var_22 = ((((((((4294967295 ? var_15 : 1))) ? 1 : 0))) ? (((var_14 / var_8) ? ((var_11 ? var_16 : var_4)) : -var_9)) : var_15));
                }
            }
        }
    }
    #pragma endscop
}
