/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((var_16 ? (var_0 != var_5) : ((var_7 ? var_18 : ((max(211, var_0))))))))));
    var_21 ^= var_1;

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_22 = (min(var_22, ((((((((var_9 ? var_0 : (arr_0 [i_0 - 1] [0])))) ? ((min(var_13, var_14))) : ((max((arr_0 [4] [4]), 252))))) + ((((arr_0 [i_0] [14]) > var_7))))))));

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_23 ^= (((((arr_1 [i_0 - 3] [i_0 - 3]) ? var_4 : (arr_1 [i_0 + 1] [i_0 - 1]))) <= var_15));
            var_24 |= (((((var_6 ? var_4 : (arr_3 [i_1 - 2] [i_0 - 3] [5])))) ? 190 : ((~(arr_0 [i_0] [0])))));
        }
        var_25 = ((((((var_19 / var_18) ? (arr_2 [i_0] [i_0]) : ((var_10 | (arr_3 [i_0] [i_0] [i_0])))))) ? ((((!118) < (arr_3 [i_0] [i_0 - 2] [i_0])))) : ((~((~(arr_3 [i_0] [i_0] [i_0])))))));
    }
    #pragma endscop
}
