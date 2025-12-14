/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] = ((4 || ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_11 = ((var_6 ? ((((((arr_3 [i_1] [i_1]) + var_8))) + var_7)) : (arr_3 [i_1] [i_1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_12 = (arr_6 [i_1] [i_1]);
            arr_8 [i_2] = (((arr_6 [i_1] [i_2]) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_2])));
        }
    }
    var_13 = (max(1, 3376555029));
    var_14 = (((((var_4 ? var_9 : var_5))) || var_7));

    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        arr_12 [i_3] [i_3 - 2] = ((!(arr_11 [i_3 + 2] [i_3 + 2])));
        arr_13 [13] [i_3] = (max((arr_9 [i_3 + 1]), (arr_9 [i_3 - 1])));
    }
    #pragma endscop
}
