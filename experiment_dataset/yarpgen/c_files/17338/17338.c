/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((((max(((var_6 >> (243 - 233))), (var_3 - var_3)))) ? var_12 : var_5));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = (arr_1 [i_0] [i_0]);
        var_18 |= (((arr_2 [i_0] [i_0]) ? (((var_15 ? 5356579459050543872 : (arr_1 [i_0] [i_0])))) : (var_11 >= var_13)));
        arr_3 [i_0] [i_0] = ((((~(((-1 >= (arr_2 [i_0] [i_0])))))) >= ((((((var_14 ? var_4 : var_13))) || ((max(24, (arr_2 [i_0] [i_0])))))))));
    }
    var_19 = (((((((var_11 ? var_10 : var_2))) ? -var_6 : (!var_10))) <= var_10));
    #pragma endscop
}
