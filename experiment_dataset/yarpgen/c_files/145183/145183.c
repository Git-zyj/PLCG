/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = var_12;
        var_20 = (max(var_20, (min(((var_3 ? var_7 : var_0)), ((var_0 ? var_8 : var_2))))));
        var_21 = (min((min(var_3, var_6)), ((((((var_12 ? var_15 : var_12))) == (min(var_8, var_4)))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_22 = (min(((((((var_11 ? var_13 : var_13))) ? var_17 : (var_9 >= var_8)))), -var_2));
            var_23 = (max((min(var_16, (max(var_1, var_11)))), ((max(var_13, (~var_17))))));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_10 [i_1] = ((((var_7 ? var_4 : (var_12 ^ var_13))) ^ (((~(~var_13))))));
            var_24 = (((((~(~-1719817627)))) ? (((-(max(var_1, var_12))))) : (max(var_0, (~var_8)))));
        }
        var_25 ^= (0 >= -4846255422833739658);
        arr_11 [1] [i_1] = ((((max(((max(var_17, var_18))), ((var_11 << (var_14 - 3833719341)))))) ? ((max(var_16, (var_8 && var_2)))) : (min((((22 ? -1 : 31))), ((var_12 ? var_0 : var_12))))));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            arr_16 [i_4] [i_5] = ((var_2 ? ((((!(((var_10 ? var_5 : var_12))))))) : (max(((max(var_17, var_7))), var_0))));
            var_26 *= (max((max(var_3, var_2)), -var_6));
            var_27 = var_2;
        }
        var_28 *= ((((min(var_12, var_18))) ? (min((min(var_15, var_2)), (!var_8))) : (((min(var_15, var_18))))));
    }
    var_29 = ((((min(var_18, var_16) + ((var_15 ? var_14 : var_17))))));
    var_30 = ((!(((var_0 ? var_8 : -var_0)))));
    var_31 = var_16;
    #pragma endscop
}
