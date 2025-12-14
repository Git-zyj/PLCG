/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_11 = (8772117574261027133 && 0);
        arr_2 [i_0] = 7593;
        var_12 += ((((!(arr_0 [i_0]))) ? (arr_1 [i_0 + 2]) : (arr_1 [7])));
        arr_3 [i_0 + 2] [i_0] = ((65534 ? (((7591 ? (arr_0 [i_0 + 2]) : (arr_0 [i_0])))) : 8191330108525692600));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 += (((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : ((-1 ? 57943 : (arr_4 [i_1] [i_1])))));
        arr_6 [i_1] = (((((arr_1 [i_1]) ? 7593 : (arr_5 [i_1] [i_1]))) % (((arr_0 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1])))));
    }
    var_14 &= (((-2147483647 - 1) ? (((var_1 ? ((min(var_0, var_6))) : -2147483637))) : (((var_4 != -1) ^ (max(4294967295, var_2))))));
    var_15 = (min(var_15, ((max((var_6 ^ var_10), ((57942 & (var_0 ^ 255))))))));
    #pragma endscop
}
