/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_15 = (~var_8);
            arr_6 [4] [5] [5] = -3719468194660377388;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_9 [1] [i_2] = (((var_12 ^ var_3) ? (((arr_5 [i_0] [i_0] [i_0]) | var_5)) : ((~(arr_5 [i_0] [10] [9])))));
            var_16 -= (-2147483647 - 1);
            var_17 = (max((max(511, 32764)), ((((209 && 55) ? var_6 : (var_7 || var_2))))));
        }
        var_18 = ((17289387788448948709 ? (min(var_8, var_10)) : (arr_8 [11] [i_0] [12])));
        arr_10 [i_0] [i_0] = (arr_3 [i_0] [4] [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_19 = (min(var_19, var_6));
        var_20 = ((55 ? 201 : 55));
        var_21 = (((arr_7 [i_3]) ? 56245 : (arr_1 [i_3])));
    }
    var_22 = var_0;
    var_23 = ((((min((max(var_1, var_7)), 90))) ^ ((((var_8 <= -90) <= ((5 ? var_6 : var_7)))))));
    var_24 = var_7;
    #pragma endscop
}
