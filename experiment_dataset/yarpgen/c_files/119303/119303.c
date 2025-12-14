/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((1 ? (((-(var_8 <= var_8)))) : var_7));
    var_17 = (min(var_17, (((((((((1 ? 1 : 1))) ? var_7 : (((26 ? var_5 : var_13)))))) ? (max((((610252303016927299 ? -4851 : var_15))), var_8)) : ((max((var_1 | var_4), 1048575))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (min(((((arr_1 [i_0]) ? var_5 : var_13))), ((var_1 ? ((min(1, (arr_0 [i_0] [5])))) : -28880))));
        var_19 = (min(var_19, ((((((!var_6) ? var_13 : (!-1))) + -var_13)))));
        arr_3 [i_0] |= min(((max((arr_0 [i_0] [i_0]), (arr_2 [i_0])))), (min(var_8, (arr_0 [i_0] [i_0]))));
    }
    var_20 = (max(var_20, var_2));
    var_21 = ((~(var_14 || var_1)));
    #pragma endscop
}
