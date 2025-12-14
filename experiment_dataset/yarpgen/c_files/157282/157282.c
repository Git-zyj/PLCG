/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 &= ((((((60 == (arr_0 [i_0]))))) >= ((~((~(arr_0 [i_0])))))));
        var_12 = ((4640 ? (min((((arr_0 [i_0]) << (var_3 + 421275847))), (((arr_0 [i_0]) ^ var_9)))) : ((((!(arr_0 [i_0])))))));
    }
    var_13 = ((var_7 ? (((-var_4 ? var_2 : (min(-4640, var_10))))) : var_5));
    var_14 = ((((max((max(var_2, var_8)), var_2))) / (((((-4659 ? var_3 : var_0))) & ((var_1 ? 3279418180967915180 : var_3))))));
    var_15 &= var_5;
    var_16 = -4646;
    #pragma endscop
}
