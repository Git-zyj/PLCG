/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!-97);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_15 &= 14;
            var_16 = (max(var_16, (((((((arr_3 [i_0]) ^ (arr_4 [i_0])))) ? -6358367410768485484 : 112)))));
        }
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_17 = (((arr_0 [i_2 + 2]) ? (arr_0 [i_2 - 2]) : ((96 ? 96 : 47))));
                        arr_12 [i_0] [i_0] [i_2] = (min(((~(arr_1 [i_0]))), ((((arr_0 [i_2 + 2]) != var_1)))));
                    }
                }
            }
            var_18 = 208;
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            var_19 = ((var_11 || ((2013265920 || (arr_9 [i_0] [i_0] [10] [i_5])))));
            var_20 = (arr_15 [i_0] [i_5] [1]);
            var_21 *= (65535 < -97);
            var_22 = var_1;
        }
        var_23 = ((2791783528 ? 6760 : (~0)));
    }
    for (int i_6 = 3; i_6 < 8;i_6 += 1)
    {
        arr_18 [i_6] [7] = ((min(var_1, (min(-2013265921, var_8)))));
        arr_19 [0] = ((0 ^ (47 / -1)));
    }
    var_24 = (max(var_24, var_1));
    var_25 = (~-220233744);
    #pragma endscop
}
