/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (!253);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, (((var_0 * (var_1 / var_3))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_13 *= (((arr_11 [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 - 1]) && var_10));
                        var_14 = (min(var_14, (var_1 >= var_7)));
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [10] [10] [i_0] |= (0 > 1991828888);
                        var_15 = (max(var_15, (var_7 < var_9)));
                    }
                    var_16 ^= (var_0 | var_3);
                    var_17 = (max(var_17, (((~((var_9 ? var_3 : var_9)))))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] &= (4264686863 << 1);
        var_18 ^= ((43200 ? (-127 - 1) : 1));
        var_19 += (((((max((arr_16 [i_5]), var_10)))) ? (arr_2 [i_5]) : (((min(var_9, var_0))))));
        var_20 -= (-4096 != 4264686868);
        var_21 += (min((((~((var_7 ? var_2 : var_2))))), (((arr_8 [i_5] [i_5] [i_5]) ? (~var_2) : var_8))));
    }
    var_22 = (min(var_22, ((((((-13 ? ((var_8 ? -29 : 1752772968)) : 93))) ? (((((0 ? 43200 : 10))) ? var_9 : 225)) : var_2)))));
    var_23 -= ((min((((var_8 ? var_4 : var_6)), var_10))));
    var_24 ^= var_4;
    #pragma endscop
}
