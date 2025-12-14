/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_18 &= ((-var_9 ? (((369344258 ? 0 : 1083921765))) : (((arr_0 [i_1]) ? 4294967284 : -2147483632))));
            var_19 = (min(var_19, (((~(((arr_2 [i_1]) ^ var_4)))))));
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            var_20 &= (min((arr_2 [i_0]), ((-((var_3 ? var_4 : var_1))))));
            arr_6 [2] &= ((((var_13 ? var_11 : var_4))));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_21 = (min(var_21, var_14));
            var_22 &= (arr_5 [i_0] [i_0] [2]);
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_23 = (min(var_23, -1074758514));
            arr_12 [i_0 + 2] [i_4] [i_4] &= ((-(((var_6 ? var_11 : var_2)))));
            var_24 = (min(var_24, ((max((((~var_1) ? var_11 : (arr_1 [i_4]))), var_3)))));
            var_25 &= (min(var_10, var_11));
        }
        var_26 &= var_13;
    }
    var_27 = (min(var_27, -var_15));
    var_28 &= ((~(~var_13)));
    var_29 &= (!var_3);
    #pragma endscop
}
