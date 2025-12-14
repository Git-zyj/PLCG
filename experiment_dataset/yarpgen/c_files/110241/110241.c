/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((((((min(var_4, var_0))) ? var_11 : ((max(var_7, -151579870447271378))))) << (-var_7 - 2807217343022025532)));
    var_19 = (max(var_19, var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = -151579870447271378;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_1] = ((((max(51396, 122))) != var_2));
            var_21 = (((((((arr_1 [i_0] [i_0]) ? 6 : (arr_3 [i_0]))))) ? (((((max(var_16, var_17))) > ((max(var_5, var_6)))))) : var_0));
        }
    }
    var_22 = var_7;
    var_23 = var_15;
    #pragma endscop
}
