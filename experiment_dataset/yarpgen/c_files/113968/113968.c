/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0 - 1] = ((30555 / ((((((max(-1, 0)))) >= ((var_6 ? var_8 : var_9)))))));
        var_20 = (((((arr_2 [i_0 - 1]) >= (arr_2 [i_0]))) ? 3145880057209748415 : (arr_1 [i_0])));
        var_21 += (max(30, ((~(arr_0 [i_0] [i_0 - 1])))));
        arr_4 [i_0] = (~-30556);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_22 = arr_5 [i_1];
        arr_9 [i_1] [i_1] = (3 ? (arr_8 [i_1 - 1] [i_1 - 2]) : (arr_5 [i_1 - 1]));
        var_23 = (((arr_2 [i_1 - 1]) ? (arr_1 [i_1 - 3]) : var_17));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_24 = max((max((arr_2 [i_2]), 53740)), ((max(var_12, var_17))));
        arr_12 [8] |= ((((((48006 == (arr_10 [6]))) && (((var_17 ? (arr_2 [i_2]) : (arr_10 [2])))))) ? (max(2147483647, (arr_2 [i_2]))) : (arr_0 [i_2] [i_2])));
    }
    var_25 = ((~(((((max(var_8, 53740))) == (17522 % 255))))));
    var_26 = ((var_4 ? (((((-30557 ^ var_6) <= -var_16)))) : var_9));
    #pragma endscop
}
