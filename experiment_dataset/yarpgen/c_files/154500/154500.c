/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 12;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            var_21 = ((!(((var_3 ? (arr_1 [i_0]) : (arr_0 [i_0]))))));
            var_22 = (max((((-1302669626 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))), var_11));
            var_23 = (arr_1 [i_0]);
            var_24 = (!var_7);
        }
        var_25 ^= (((((227 && 511) / (arr_0 [6]))) | 64490));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_26 = 10968374234287250296;
        var_27 = var_6;
        var_28 = (min(var_28, ((65524 ? 4294967295 : 1622506230))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_29 = ((770735745 >= (arr_8 [i_3] [i_3])));
        var_30 = (min(var_30, ((((((-450362810 ? 893143365 : 255))) ? (128 >= 3422258180) : (arr_9 [i_3] [i_3]))))));
        var_31 = (((((var_12 ? 150 : var_2))) ? (arr_9 [i_3] [i_3]) : ((9223372036854775807 ? (arr_9 [9] [i_3]) : (arr_9 [i_3] [i_3])))));
        var_32 -= ((((((((arr_8 [i_3] [4]) & 166)) ^ -8))) ? var_19 : ((~(((arr_8 [i_3] [10]) - var_18))))));
    }
    var_33 = ((-((2527135595 ^ (var_12 ^ 40)))));
    #pragma endscop
}
