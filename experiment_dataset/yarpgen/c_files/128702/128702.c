/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (((-var_4 + (max(-2147483647, 4224543536)))));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_13 ^= -var_4;
        var_14 += ((-((min(var_6, var_8)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {
                        var_15 = ((!((((arr_12 [i_1]) * 3461865726)))));
                        var_16 -= ((+((max((var_8 > var_8), var_2)))));
                    }
                }
            }
        }
        var_17 = (max(var_17, var_9));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_18 = (max(var_18, (((-(arr_4 [i_5]))))));
        var_19 += 0;
        var_20 = (~var_0);
        var_21 = (((var_6 + 9223372036854775807) >> (((arr_5 [i_5] [i_5]) - 16609))));
        var_22 = -0;
    }
    var_23 ^= var_7;
    #pragma endscop
}
