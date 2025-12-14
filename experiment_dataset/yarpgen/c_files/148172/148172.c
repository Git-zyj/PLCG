/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(max(((0 ? -9223372036854775798 : 9223372036854775797)), var_1))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = var_14;
        var_19 += (!224983667);
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_20 = (max((min(-9223372036854775798, 3123186065800907563)), (((1 ? 32767 : 1)))));
                    arr_12 [4] [4] [4] [i_1] = (min((max((var_1 * 0), var_12)), ((min(var_16, (arr_1 [15] [i_1 + 1]))))));
                }
            }
        }
        var_21 &= (((var_7 || (arr_10 [i_1 - 2] [i_1 - 1] [i_1]))));
        var_22 = -1;
        var_23 = (((((((~(arr_5 [i_1]))) | (arr_5 [i_1])))) ? var_9 : var_15));
        arr_13 [i_1] = 1;
    }
    var_24 *= (min(var_9, var_11));
    var_25 = (min((((863 * 4069983628) * var_6)), ((var_15 / ((15323558007908644063 ? var_15 : var_9))))));
    #pragma endscop
}
