/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = var_0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [10] = (((arr_0 [i_0 + 2]) ? (arr_0 [i_0 - 1]) : -281474976710656));
        var_15 = (((((var_4 | (arr_1 [i_0] [i_0])))) && var_4));
        var_16 = ((((((arr_2 [i_0 + 2]) * (arr_2 [i_0])))) ? (arr_2 [i_0 + 1]) : ((~(arr_2 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_17 ^= (((((var_2 ? (arr_5 [8]) : (arr_5 [i_1 + 1])))) ? ((((((arr_1 [i_1 + 2] [i_1]) ^ 1))) ? (arr_5 [i_1 + 1]) : (((1665359193 >> (arr_2 [i_1 - 1])))))) : ((((arr_0 [i_1 - 1]) ? -1665359194 : ((var_9 ? -612283601 : 4)))))));
        arr_7 [i_1] = (min((((arr_6 [i_1] [i_1 - 1]) << (((arr_6 [i_1 + 1] [i_1 - 1]) - 60180)))), (((arr_2 [i_1 - 1]) ? (arr_6 [i_1] [i_1 + 1]) : (arr_6 [i_1] [i_1 + 2])))));
        arr_8 [i_1] = (((((((-(arr_1 [i_1] [i_1]))) < (arr_2 [i_1 - 1])))) | ((+(((arr_4 [i_1] [i_1]) ? 1665359193 : 23795))))));
        var_18 = (max(1665359192, (arr_5 [i_1])));
        arr_9 [i_1] [i_1] = ((1942284205 ? (arr_5 [i_1 + 1]) : ((~(arr_5 [i_1 - 1])))));
    }
    #pragma endscop
}
