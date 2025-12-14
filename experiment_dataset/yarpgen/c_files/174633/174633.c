/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (max(((!((max(var_5, var_9))))), var_7));

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0 + 1] [i_0] = ((((max((arr_2 [i_0 + 1] [i_0 + 2]), var_0))) ? var_0 : (((((16 ? var_9 : var_7))) ? (arr_0 [i_0 - 1] [i_0 - 2]) : var_4))));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            var_14 &= ((var_4 * ((7 ? var_4 : 507100017))));
            var_15 = (+(((arr_7 [i_0]) / (arr_5 [i_1 - 4] [i_0]))));
            var_16 &= ((~(arr_1 [i_0 - 1] [i_1 + 2])));
        }
        arr_8 [i_0] = (min((9223372036854775807 || 13909651357012960769), -17));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] [i_2] = var_7;
        var_17 ^= (!-34);
    }
    var_18 = var_2;
    var_19 = (-17 + 1);

    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_20 ^= (((arr_1 [i_3] [i_3]) / -16));
        var_21 = (((var_7 > -1157) > ((var_9 ? 0 : (arr_5 [i_3] [i_3])))));
        var_22 = (((((arr_0 [i_3] [i_3]) ? var_1 : var_9)) >> (var_12 || var_1)));
    }
    #pragma endscop
}
