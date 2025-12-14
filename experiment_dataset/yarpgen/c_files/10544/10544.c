/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_16 ? ((var_1 ? var_2 : var_1)) : (var_10 - var_12))) + (((!(((var_1 ? var_16 : var_17))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((~var_11) & (arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [10] = (arr_4 [3] [i_0] [i_1]);
            arr_7 [i_0] [i_0] [7] = (((((((arr_2 [14]) > (arr_1 [i_1] [i_0]))))) ^ ((~(arr_5 [i_0])))));
            arr_8 [i_0] = (((arr_4 [i_0] [i_1] [i_1]) ? (((arr_0 [1] [i_0]) / var_7)) : (((arr_0 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
            arr_9 [i_0] [i_0] = (arr_4 [i_0] [i_1] [16]);
        }
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_19 ^= ((((!(arr_2 [i_2]))) ? (arr_1 [i_2] [i_2]) : -73146202));
        var_20 ^= (min((((((~(arr_5 [i_2])))) ? (((arr_0 [i_2] [i_2]) ^ (arr_5 [i_2]))) : (arr_0 [i_2] [i_2]))), (~68)));
        arr_12 [i_2] [i_2] = ((~((var_10 ? ((((arr_1 [i_2] [i_2]) | var_17))) : (((arr_0 [14] [i_2]) & (arr_4 [i_2] [i_2] [i_2])))))));
        arr_13 [i_2] [8] = ((!(arr_4 [i_2] [i_2] [i_2])));
        var_21 = ((!(((~(arr_5 [i_2]))))));
    }
    var_22 = var_3;
    #pragma endscop
}
