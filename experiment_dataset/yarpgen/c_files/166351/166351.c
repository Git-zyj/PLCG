/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(((~var_14) % (20428 - var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_1] = (min(((((7674016452561123639 ? 451348192841002425 : var_8)))), (((max((arr_3 [i_0]), 17995395880868549190)) % (arr_1 [i_0])))));
                var_17 *= -7674016452561123639;
                var_18 -= (1 - 2147483647);
            }
        }
    }
    var_19 = (~-15);
    #pragma endscop
}
