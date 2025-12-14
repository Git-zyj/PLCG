/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(var_5, ((var_3 ? var_7 : 0))))) ? var_3 : ((((~var_7) != (var_1 ^ var_0))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_13 = ((((((arr_2 [i_0 - 1]) ? (min(var_10, (arr_1 [i_0]))) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : var_5));
        arr_3 [i_0] [i_0] = (min((min((max(var_0, (arr_2 [i_0]))), (((var_1 ? (arr_2 [i_0]) : var_2))))), 1));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_14 = (min(var_14, var_1));
            arr_8 [i_2] = (min((((arr_4 [0]) ? (arr_4 [i_1]) : var_11)), ((var_1 ? (arr_0 [i_1]) : (((var_8 || (arr_4 [i_1]))))))));
            var_15 = (min(var_15, (((((max(var_3, var_8))) ? ((((!(arr_1 [i_1]))))) : (arr_1 [i_1]))))));
        }
        var_16 *= (arr_1 [9]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_11 [i_3] [6] = (arr_9 [i_3] [i_3]);
        arr_12 [i_3] = (min(-var_2, (((((-(arr_9 [i_3] [21])))) ? (((var_6 ? var_7 : var_5))) : ((~(arr_9 [i_3] [i_3])))))));
        var_17 = ((var_8 ? var_6 : (((arr_9 [i_3] [i_3]) ? (arr_9 [i_3] [i_3]) : (arr_10 [i_3])))));
    }
    #pragma endscop
}
