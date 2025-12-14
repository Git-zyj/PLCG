/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((!((min(6979341404099066701, var_2))))) ? (((var_12 ? (var_8 / var_3) : (6979341404099066701 >= 0)))) : (((((var_6 ? var_13 : var_12))) ? (~-63) : var_11)))))));
    var_15 = (((((var_8 ? var_3 : -18417))) ? var_11 : 4194303));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (+-11160);
        arr_5 [i_0] = ((~((1 ? (((arr_1 [i_0]) | 127)) : var_0))));
        arr_6 [i_0] [10] = ((((!(((27 ? (arr_2 [i_0] [i_0]) : var_5))))) || -32767));
    }
    var_16 = -63;
    #pragma endscop
}
