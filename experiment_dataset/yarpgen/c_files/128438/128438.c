/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (min(var_18, (!32767)));
        arr_3 [i_0] [i_0] = ((0 ? ((((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0])))) : ((255 ? 52 : (arr_1 [i_0] [i_0])))));
        var_19 -= (-117 % -32767);
        var_20 = (((-1594108504 + 2147483647) >> (23681 - 23674)));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1 + 1] = (arr_0 [i_1] [i_1]);
        var_21 = (max(((((0 << (127 - 115))) <= (arr_0 [i_1 - 1] [i_1 - 1]))), (1 < -61)));
        var_22 = (min(var_22, (((~(min(4294967295, (((var_6 ? (arr_1 [12] [i_1 + 1]) : var_16))))))))));
    }
    #pragma endscop
}
