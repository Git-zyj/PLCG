/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 &= 15;
        var_15 = (((-1510332653 ? var_13 : (arr_2 [i_0] [i_0]))) ^ (((~(arr_2 [i_0] [i_0])))));
        arr_3 [i_0] = (~var_8);
        var_16 += (-(var_7 <= var_10));
        var_17 = (max(var_17, ((((var_12 > 1) ^ ((1510332658 ? 33084 : 939524096)))))));
    }
    var_18 |= 2594313285;
    var_19 &= ((((!(1023 != 34)))) & ((var_10 ? var_5 : (~-1185989002))));
    #pragma endscop
}
