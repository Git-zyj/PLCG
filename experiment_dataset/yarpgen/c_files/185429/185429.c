/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(~var_6)));
    var_11 = (max(var_11, (!1996309832)));
    var_12 = ((var_5 ? var_9 : (~3)));
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_14 *= 5088171694228421704;
                var_15 = (((((var_9 ? var_6 : (arr_3 [i_0])))) ? ((82 ? 0 : 2077189060)) : (~var_0)));
            }
        }
    }
    #pragma endscop
}
