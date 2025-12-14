/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = (max(var_18, var_3));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_19 = ((~((23257 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_20 = (((((arr_2 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))) | (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((((-(arr_4 [i_1]))) << (-10002801608356821394 - 8443942465352730202)));
        var_21 = ((-var_15 << ((((min(var_15, var_15))) + 52))));
        var_22 = ((((var_5 ? var_9 : ((var_4 ? 2147483647 : 1719061480113263433)))) ^ ((max(1, 42266)))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_23 -= var_16;
        arr_10 [i_2] = (((-(((27117 < (arr_0 [24])))))));
    }
    var_24 = ((((var_10 == (((var_0 ? var_1 : var_7))))) ? var_14 : (((max(var_11, var_4))))));
    #pragma endscop
}
