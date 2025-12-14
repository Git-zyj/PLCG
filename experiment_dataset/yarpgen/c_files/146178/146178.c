/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 49152;
    var_17 = (max(var_4, var_2));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (((max((((arr_0 [i_0] [i_0]) + (arr_1 [i_0]))), ((min(var_14, var_3))))) >> ((((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? (!16355) : (arr_0 [i_0] [i_0])))));
        var_19 = ((~((49208 ? (arr_0 [i_0] [i_0]) : 49174))));
        var_20 *= (min((((1799497215 ? -9840 : 49152))), (((~2495470078) ? (arr_0 [i_0] [i_0]) : 32763))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_21 = arr_2 [i_2];
            var_22 = -2759803067851251356;
        }

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_23 = (((arr_0 [i_1 + 1] [i_1]) ? (9827 && var_7) : 1799497214));
            var_24 = ((-(arr_2 [i_1 + 1])));
            var_25 = ((arr_4 [i_1 + 1] [i_1 - 1]) ? (arr_4 [i_1 - 1] [i_1 + 1]) : (arr_4 [i_1 + 1] [i_1 - 1]));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_26 = ((49194 ? (arr_3 [i_1 - 1]) : (arr_10 [i_1 + 1])));
            arr_16 [i_4] = ((-((var_0 ? 32747 : (arr_1 [i_4])))));
        }
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            var_27 ^= (!var_13);

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_28 = (!-32764);
                var_29 = (min(var_29, var_5));
                arr_23 [i_1] [i_1 + 1] = ((arr_1 [i_1 + 1]) ? (arr_1 [i_1 - 1]) : (arr_18 [i_5 + 4]));
                var_30 += (((var_0 + 2147483647) << (((arr_0 [i_1 + 1] [i_5]) - 3232872131))));
            }
            var_31 *= (((arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1]) & (arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1])));
        }
        arr_24 [i_1] = (((arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1]) * (arr_8 [i_1 + 1] [i_1 - 1])));
        var_32 = (var_8 - 9223372036854775807);
    }
    var_33 = (min(var_33, var_0));
    #pragma endscop
}
