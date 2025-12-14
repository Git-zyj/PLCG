/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_17 ^= (((((arr_0 [i_0]) + 2147483647)) >> (((arr_0 [20]) / (arr_0 [i_0])))));
        var_18 *= var_1;
        var_19 &= var_9;
        var_20 = ((arr_1 [i_0] [i_0]) || ((min(((min((arr_0 [i_0]), var_0))), ((1 ^ (arr_1 [i_0] [i_0])))))));
        var_21 = (max(var_21, ((((((arr_0 [0]) | var_1)) > (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((51466 ? 127 : (arr_1 [i_1] [i_1]))))));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_23 = ((var_4 ? 14070 : (arr_4 [i_1] [17] [i_1])));
            arr_6 [i_2] [i_1] [9] = ((-((~(arr_0 [i_1])))));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_24 = (((arr_0 [i_3]) ^ (arr_0 [i_3])));
        var_25 = ((-107 >= (arr_0 [i_3])));
        var_26 &= (--1);
    }
    var_27 = (max(var_27, (var_5 % 1)));
    #pragma endscop
}
