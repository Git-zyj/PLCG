/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max((-1519710943 >= var_7), ((var_7 ? var_4 : var_10)))) / (((max(var_10, var_1))))));
    var_13 &= (min(((29637 ? var_4 : var_8)), (var_2 | 703500887)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (min(var_14, ((((~(((-32 != (arr_0 [i_0]))))))))));
        arr_2 [1] [i_0] = (((~(((arr_1 [i_0]) % 15393162788864)))));
    }
    var_15 = ((!(1 | var_7)));
    var_16 = (~0);
    #pragma endscop
}
