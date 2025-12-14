/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [1] [i_1] = -127;
                arr_8 [i_0] [i_0] [i_0] = 65535;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] = var_8;
                    arr_12 [i_0] [i_1] = ((6 + (22552 - 65509)));
                }
                var_10 = ((349 - ((-2031070238 ? -7406 : var_0))));
            }
        }
    }
    var_11 = var_9;
    var_12 ^= var_1;
    #pragma endscop
}
