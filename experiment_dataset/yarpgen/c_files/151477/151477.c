/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, 8388604));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 |= ((((((min((-9223372036854775807 - 1), 9223372036854775779)) + 9223372036854775807)) + 9223372036854775807)) << (((((min((arr_0 [i_0]), (arr_0 [i_1]))) + 764868207)) - 42)));
                var_21 = 1;
            }
        }
    }
    var_22 = ((~((((var_3 ? var_9 : 1))))));

    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        var_23 = (min(var_23, (((~(arr_1 [i_2 - 1]))))));

        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            arr_10 [i_2] = min(var_1, (min(var_15, (arr_5 [i_2 + 3]))));
            arr_11 [i_3] [i_3] |= (max((arr_8 [i_2] [i_3]), 2570934926));
            var_24 = (~((38153 ? (arr_3 [i_2] [i_2] [i_3 - 1]) : (arr_2 [i_2 - 3]))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                arr_14 [i_2] [i_2] [i_2] = (!757234323);
                var_25 = ((~(arr_8 [i_3 + 1] [i_2 - 3])));
                var_26 = (arr_0 [i_3 + 1]);
                var_27 = (min(var_27, ((((((var_2 ? (arr_4 [i_2] [i_2] [i_2]) : 1))) * (((-9223372036854775807 - 1) % (arr_0 [i_2]))))))));
                var_28 = ((9223372036854775805 ? (arr_9 [i_2] [i_2]) : (arr_8 [i_4] [i_3])));
            }
            arr_15 [i_2 + 1] [i_2] = 2570934926;
        }
    }
    #pragma endscop
}
