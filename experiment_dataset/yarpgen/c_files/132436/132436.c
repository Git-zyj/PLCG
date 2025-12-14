/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 101;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        var_20 = ((~24381) ? 24388 : ((((!(arr_0 [i_0]))) ? (~32) : ((41159 ? 24377 : 1)))));
        var_21 = (min(var_21, (((((max((((arr_2 [i_0]) ? 0 : 24370)), var_16))) <= ((3971063762 ? 323903534 : 17671379698022304788)))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_8 [i_1] [i_1] [i_0] = (((min(2097151, (((-(arr_4 [i_0] [i_1])))))) != (((3094150614 ? var_18 : ((var_4 ? (arr_4 [i_0] [i_1]) : var_11)))))));
            var_22 = (((((21 ? (min(var_14, 8798016249480398231)) : (!0)))) || 16));
        }
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_11 [i_2] = (((~var_3) ? (arr_9 [i_2] [i_2]) : (min((arr_9 [i_2] [i_2]), 27))));
        var_23 |= ((((((arr_9 [i_2] [i_2]) ? (arr_9 [i_2] [i_2]) : (arr_9 [i_2] [i_2])))) && ((((2924399695621399770 * var_8) ? (arr_9 [i_2] [i_2]) : (((var_12 ? var_16 : (arr_9 [i_2] [i_2])))))))));
    }
    #pragma endscop
}
