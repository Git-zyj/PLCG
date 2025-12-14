/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_3 ? ((min(var_6, var_8))) : (~var_2)))) ? (((((1 ? 122 : var_0))) ? ((var_11 ? var_4 : var_0)) : (122 && var_6))) : ((((var_8 ? var_6 : 1)) * ((max(-121, 0))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (max(((max(var_4, (var_1 == var_4)))), (min((max(107, 5702133732799927443)), (arr_2 [i_0])))));
        arr_4 [i_0] = ((((max(((var_11 ? 1533188122 : 4294967295)), -418498267))) ? 798691125 : 1145));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_13 = ((34922 | ((((((var_7 ? -2142634076 : (arr_5 [11])))) || 1)))));
        arr_8 [i_1] = (((arr_6 [i_1] [i_1]) << ((((((65533 ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1]))) + 1927752805)) - 21))));
        arr_9 [i_1] [i_1] = (min(((32767 + ((1147 ? (arr_5 [i_1]) : 32)))), (((arr_2 [i_1]) ? var_3 : (-32767 - 1)))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_14 -= (((var_9 ? 2147483647 : 26087)));
        arr_12 [i_2] = ((((~(arr_7 [i_2] [3]))) * (--2092258537)));
        var_15 *= (var_11 || var_1);

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_16 [i_2] [i_2] = max(((32767 ? (arr_0 [i_2]) : 0)), (max(-1533188123, ((var_0 << (227 - 227))))));
            var_16 += var_9;
            var_17 = 64390;
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_18 *= (~-var_7);
        arr_19 [i_4] [i_4] = -1533188114;
        var_19 *= ((((2048 ? var_7 : var_4)) - (((arr_1 [i_4] [i_4]) - var_9))));
        var_20 = (((arr_15 [i_4] [i_4]) ? (((arr_6 [i_4] [i_4]) ? -2 : 2143289344)) : (((var_7 - (-32767 - 1))))));
    }
    var_21 = var_8;
    var_22 = -9;
    var_23 = (min(var_23, (((!((min(var_11, 2128429008))))))));
    #pragma endscop
}
