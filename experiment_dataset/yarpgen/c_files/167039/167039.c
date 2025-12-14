/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(var_13, var_17)) - var_6));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = -var_0;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_19 *= ((((17633470473029888218 ? var_14 : var_10)) / (((~(arr_1 [1]))))));

            /* vectorizable */
            for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
            {
                var_20 &= (((arr_4 [i_0 - 3] [6] [i_0 - 1]) ? 17633470473029888218 : (arr_3 [i_0 + 1] [i_2 - 2])));
                var_21 ^= (arr_5 [i_0 - 1] [i_2] [i_2 - 2]);
                var_22 = (((arr_7 [i_0] [i_0 - 3] [i_0]) || var_14));
            }
            for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
            {
                arr_11 [i_0] [i_0] [5] = (((((+(min((arr_8 [i_0] [i_0 - 1] [i_1] [8]), var_10))))) ? (max((arr_8 [i_0 - 1] [i_1] [i_1] [i_1]), var_15)) : (((min((max(var_0, 15290)), (!17633470473029888239)))))));
                arr_12 [6] [i_0] [i_3] [i_0] = var_9;
            }
            for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
            {
                var_23 = ((min(var_9, var_17)));
                var_24 = (min(var_24, (((((max(var_14, ((max(var_1, var_7)))))) ? ((((var_15 | var_16) && (var_12 ^ -8295755445712194364)))) : (arr_1 [8]))))));
            }
        }
        arr_15 [i_0] = 50241;
        arr_16 [i_0] = var_11;
    }
    var_25 = ((var_7 ? var_17 : var_16));
    var_26 = (var_8 / var_11);
    #pragma endscop
}
