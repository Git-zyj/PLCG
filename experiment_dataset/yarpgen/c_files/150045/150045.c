/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((((-(min(var_9, var_10))))) ? var_8 : ((var_6 ? var_14 : (!var_0)))));
    var_21 *= (((((min(var_19, var_14)))) ? (((!(((var_11 ? var_19 : var_2)))))) : ((-var_13 ? ((min(var_2, var_5))) : var_3))));
    var_22 = ((-(((!var_5) ? var_10 : (((var_12 ? var_8 : var_11)))))));
    var_23 = -8188;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (((!4124665090) ? ((-404331581 ? 37990 : -1234565940)) : -var_10));
        arr_4 [i_0] [i_0] = (((((var_7 ? var_2 : var_0)) ? var_8 : var_18)));
        arr_5 [i_0] [i_0] = min((((var_18 ? var_12 : var_5))), ((-var_4 ? ((var_11 ? var_4 : var_15)) : var_10)));
        var_24 = var_0;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_25 = (((-64 ? -623819405 : (-127 - 1))));
        arr_10 [i_1] = (var_17 ? var_12 : -var_13);
    }
    #pragma endscop
}
