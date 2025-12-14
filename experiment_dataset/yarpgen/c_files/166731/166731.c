/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 *= (((((var_4 || 6144) && ((6447826080450175947 && (arr_5 [i_0 + 1] [i_1]))))) ? (((!58813) ? (!17392792550346325423) : ((max(47, -126))))) : ((-(!-1789524508176649300)))));
                    var_18 ^= (((arr_1 [i_1]) == ((min(var_2, (min(var_15, 21288)))))));
                }
            }
        }
        var_19 = (min(var_19, 8961119084992739231));
        var_20 = (((((((1 << (64 - 50)))) ? (arr_6 [i_0] [1] [i_0 + 2] [i_0]) : (arr_4 [i_0 + 2] [i_0 + 2] [i_0 - 1]))) * (((arr_2 [i_0]) ? -1364 : -1))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_21 = (max((var_8 == var_8), (arr_9 [i_3])));
            var_22 = (min((min((arr_9 [i_3]), (arr_9 [i_3]))), ((min(var_14, 56)))));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_23 = (arr_9 [i_3]);
            var_24 = 8;
        }
        var_25 = ((~(~2826478125500832542)));
    }
    var_26 = (min(var_26, (((var_1 ? ((min(2027825668, 0))) : (((134217728 ? var_7 : var_15))))))));
    var_27 = (max(((((var_3 ? 17392792550346325423 : -1322306533)) * (!1))), ((max(((1 ? var_3 : var_13)), 1)))));
    var_28 = var_4;
    #pragma endscop
}
