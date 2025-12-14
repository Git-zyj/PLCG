/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_18 = (min(var_18, ((((arr_1 [i_0] [i_0]) <= (((((~(arr_0 [i_0])))) * (var_11 / var_4))))))));
        var_19 = ((((!(arr_2 [i_0]))) && var_13));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 = (max(((~(arr_1 [i_0 - 4] [i_1]))), (var_6 >= var_10)));
            var_21 -= ((~(65535 >= 113)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_22 = ((-567660916465231413 ? 19376 : 1587157756));
            var_23 |= ((12448 ? 0 : 19376));
            var_24 = (min(var_24, (((var_5 >= (arr_2 [18]))))));
        }
        var_25 = (((arr_0 [i_0]) >= (arr_1 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_26 -= ((~((((1379940417 * var_10) < (((((arr_8 [8]) <= -19374)))))))));
        var_27 = (min((arr_7 [i_3]), var_9));
    }
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        var_28 = 121;
        var_29 = var_16;
    }
    var_30 = var_1;
    var_31 = ((~(max(var_17, var_0))));
    #pragma endscop
}
