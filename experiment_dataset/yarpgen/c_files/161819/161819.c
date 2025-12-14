/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((((((((var_3 + 2147483647) << (var_9 - 2286695574)))) ? (((var_8 ? var_3 : var_0))) : var_9))) ? (var_12 % var_1) : (((((var_19 ? var_13 : var_11))) ? var_13 : -var_13))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_21 ^= (((((var_10 ^ (arr_2 [i_0 + 4] [i_0])))) ? (min(var_18, (arr_2 [i_0 + 2] [i_0]))) : (min((arr_2 [i_0 + 3] [i_0]), (arr_2 [i_0 + 2] [i_0 + 2])))));
        var_22 &= (min(((244 ? 17592181850112 : 16)), ((min(((~(arr_1 [i_0]))), var_12)))));
        var_23 -= ((!((((((-(arr_1 [i_0])))) ? (min((arr_2 [i_0 + 1] [i_0]), var_3)) : ((min((arr_0 [i_0] [i_0 - 1]), (arr_1 [i_0 - 1])))))))));
        var_24 *= ((35 ? 120 : -240096822249146168));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_25 &= (min(((+(((arr_0 [i_1] [i_1 + 4]) + var_14)))), (((~var_17) ? (arr_0 [i_1 + 4] [i_1 + 4]) : (arr_0 [i_1] [i_1 + 4])))));
        var_26 = (min(var_26, (139 > var_7)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_27 -= min((((var_3 * var_11) ? ((max(var_4, var_8))) : (((arr_11 [i_2]) + var_8)))), ((934008297 ? 60 : var_8)));
                        var_28 ^= (max(((var_13 ? var_9 : (arr_9 [i_1 + 3] [i_1 + 3] [i_1]))), ((min(var_4, (arr_9 [i_1 + 2] [i_1 - 1] [i_1]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
