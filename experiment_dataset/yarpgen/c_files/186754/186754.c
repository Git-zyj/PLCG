/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(0, ((((var_5 / var_9) ? var_1 : ((max(var_4, var_4))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = 16384;
        arr_4 [i_0] = ((~(max((var_3 + 192), (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_13 = (min(var_13, var_4));
        arr_8 [i_1] &= (~((9223372036854775788 - (arr_7 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_14 = (min(var_14, var_1));
        arr_11 [i_2] [i_2 + 2] = (arr_1 [i_2 + 1]);
    }
    var_15 = ((9223372036854775781 == ((var_3 % (max(var_1, var_7))))));
    #pragma endscop
}
