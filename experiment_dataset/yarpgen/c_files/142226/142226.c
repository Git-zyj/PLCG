/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_3);

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [2] = ((!((max((((arr_1 [i_0] [i_0]) ? 1 : (arr_1 [i_0] [i_0]))), ((var_11 ? 1149 : 1)))))));
        var_20 = ((((~(arr_0 [i_0] [i_0]))) ^ (max(var_9, (arr_0 [i_0] [i_0])))));
        var_21 ^= ((((((max(var_18, (arr_1 [0] [0])))) ? (arr_1 [20] [i_0]) : (~var_13))) >= (((((arr_1 [1] [i_0]) != (arr_1 [20] [i_0])))))));
        var_22 = (((((+(min((arr_0 [i_0] [i_0]), (arr_1 [i_0] [9])))))) ? (max(-4611686018427387904, (max(-3, (arr_1 [i_0] [i_0]))))) : ((max((arr_1 [i_0] [i_0]), (~var_8))))));
        arr_3 [i_0] = (((!(arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((!(arr_4 [8])));
        arr_8 [i_1] = ((((-5800088002086286069 ? (arr_5 [i_1] [i_1]) : 18446744073709551615)) < (arr_4 [i_1])));
    }
    #pragma endscop
}
