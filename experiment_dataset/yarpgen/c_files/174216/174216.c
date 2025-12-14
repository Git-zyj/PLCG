/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = (max(((((var_6 ? var_14 : var_7)) | (((61 ? var_12 : var_18))))), 131071));
    var_22 &= var_10;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_23 |= ((((arr_1 [2] [i_0]) ? (((~(arr_1 [i_0] [i_0])))) : (arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_24 = (((arr_1 [i_0] [i_0]) ? 7486169451579419964 : ((4294836225 ? 131069 : 0))));
        var_25 = (max((((4294836229 ^ ((max(var_15, var_4)))))), (((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [12]) ? (arr_0 [i_0] [i_0]) : var_6)) : 1))));
    }
    var_26 = ((var_16 ? (((((var_5 ? var_17 : var_6))) ? var_13 : (((var_17 ? var_5 : var_4))))) : ((max(var_5, (var_10 >= var_0))))));
    #pragma endscop
}
