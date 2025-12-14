/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_7 ? 16546 : (((var_1 << (var_17 - 4161088721))))))) || (var_4 && var_18));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [9] = ((var_11 ? (((((var_17 * (arr_0 [10] [i_0])))) ? ((var_4 ? var_16 : var_2)) : ((min(var_11, var_15))))) : (((((85 ? 189 : 0))) ? ((min(var_3, 22718))) : ((((arr_0 [4] [i_0]) == var_19)))))));
        var_21 += (((((!(arr_1 [i_0] [i_0]))))) ^ ((max((87 && 215), (-29087 >= 69)))));
        var_22 = (max(-70, 0));
    }
    var_23 = (max((max((max(var_10, 215)), (var_14 / var_7))), ((((((45 ? 7 : 211))) ? 35 : ((var_12 ? 255 : 208)))))));

    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = -21717;
        arr_6 [i_1] [4] = (((arr_3 [i_1 + 1] [i_1 + 1]) ? (((max(var_16, var_12)))) : var_10));
    }
    #pragma endscop
}
