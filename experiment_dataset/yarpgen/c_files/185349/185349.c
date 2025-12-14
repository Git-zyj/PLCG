/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_1;
    var_17 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_18 = (var_14 ? var_14 : (((((arr_2 [i_0] [i_1]) ? var_7 : var_9)))));
                    arr_9 [i_0] [i_1] [i_0] = ((~(((max(3856922153, 54442)) ^ 65535))));
                    arr_10 [i_0] [i_1] [6] = -9935;
                    var_19 ^= var_12;
                }
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
