/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 |= 1;
        var_17 = ((((((13652 ? var_10 : var_4)) ? (min(var_1, var_5)) : 0))));
        var_18 -= (((((((((var_13 ? var_10 : (arr_0 [i_0])))) && ((var_5 < (arr_1 [i_0]))))))) != ((var_9 ^ (((min((arr_1 [i_0]), (arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_19 = (min(var_19, (arr_3 [16])));
        var_20 = (max(var_20, (arr_2 [i_1 + 2])));
    }
    var_21 = (min((max(var_1, var_7)), (((max(4690218774903671105, var_1)) | var_6))));
    #pragma endscop
}
