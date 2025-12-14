/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (~(((((arr_0 [i_0]) ? var_10 : var_10)))));
        var_16 -= (((((var_6 ? var_7 : ((-2 ? var_4 : var_7))))) >= ((~(((arr_1 [0]) * 57230))))));
        var_17 = var_7;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_18 = (min(var_18, ((max(((((max(10, 3116960028))) ? (arr_4 [i_1]) : (max(2, (arr_5 [i_1]))))), (((~(~255)))))))));
        arr_6 [i_1] = (((~8321) + (((!(!1159155038))))));
        var_19 = ((~((((min(var_5, 10))) ? ((7 ? (arr_3 [i_1]) : -125)) : (arr_3 [i_1])))));
        arr_7 [i_1] = ((~((~((~(arr_5 [i_1])))))));
    }
    var_20 = (min(var_20, 1019148321787129415));
    #pragma endscop
}
