/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = 255;
                var_12 ^= ((!((min(((min(var_8, 1))), -var_4)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_13 = var_10;
        var_14 = (max(var_14, 1));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                {
                    var_15 = ((((((((-(arr_11 [i_2] [i_3] [i_3] [i_3])))) ? (((9223372036854775807 ? var_8 : var_3))) : (var_0 - 0)))) ? (min(-2259175711808164148, -9223372036854775807)) : (arr_9 [i_2] [i_3] [i_4])));
                    var_16 = 0;
                    var_17 = -508298239;
                    var_18 = ((var_10 + 2147483647) >> (((((~var_0) ? 183 : -9223372036854775807)) - 155)));
                }
            }
        }
        var_19 |= -2032570312;
    }
    #pragma endscop
}
