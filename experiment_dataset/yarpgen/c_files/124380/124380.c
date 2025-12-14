/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_18 ^= ((~(((arr_0 [1]) / (arr_1 [4])))));
        var_19 *= ((((max(75, (arr_0 [12])))) * (52 & var_15)));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_20 = (min(var_20, (((-(arr_0 [10]))))));
            arr_5 [i_1 + 2] [i_0] = (min(-var_3, ((1 ? -66 : 1))));
            arr_6 [i_0] = (!var_16);
            var_21 = -596063233;
        }
    }
    var_22 = ((!(((10827 ? ((min(var_14, var_4))) : ((var_2 ? var_12 : var_11)))))));
    #pragma endscop
}
