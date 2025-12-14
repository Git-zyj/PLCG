/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((1 + -23) - (max((var_1 * var_12), var_7))));
    var_16 = ((((((2239181739 ? 1960642598 : 1218787744)) > (var_10 > var_11))) ? ((var_6 ? 6372 : var_4)) : (((~(var_6 == var_13))))));

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_2 [4] [4] = (arr_1 [i_0]);
        var_17 &= (max((arr_0 [i_0 - 3]), (var_9 == 1960642609)));
    }
    var_18 = (max(var_18, (((((((-601800612 ? 601800611 : var_9)))) ? (((((-1218787744 ? 61 : -900607352))) ? var_3 : 8681)) : var_9)))));
    #pragma endscop
}
