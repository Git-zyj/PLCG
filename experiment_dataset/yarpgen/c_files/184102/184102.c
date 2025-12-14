/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 = -12;
        var_11 = (max((arr_2 [i_0]), ((((max((arr_2 [i_0]), (arr_2 [i_0])))) ? (((arr_1 [19]) & 11)) : (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_6 [i_1] = ((arr_2 [i_1 - 1]) ? (arr_0 [i_1 - 2]) : (arr_5 [i_1 - 1]));
        arr_7 [i_1 - 2] [i_1 - 1] = (arr_5 [i_1 - 1]);
        var_12 = (((arr_0 [i_1 + 1]) ? (arr_2 [i_1 - 2]) : (arr_1 [i_1 - 2])));
        arr_8 [i_1 - 1] [i_1] = ((((5 && (arr_2 [1]))) ? -123 : ((~(arr_5 [i_1])))));

        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_13 |= (arr_9 [i_1 + 1] [5]);
            arr_11 [i_1] &= (arr_2 [i_1 - 2]);
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_14 = ((-12 - (arr_10 [i_1 + 1] [i_1] [1])));
            arr_15 [i_1 - 2] = (arr_5 [i_1 - 1]);
            var_15 = (arr_5 [i_1 + 1]);
            var_16 = (!(arr_4 [i_1 + 1]));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_19 [i_4] = (arr_1 [1]);
        var_17 = (!-4294967295);
    }
    var_18 = (((var_5 / var_7) / var_3));
    var_19 = (max(var_19, (((max(((var_6 ? var_6 : var_3)), var_9))))));
    #pragma endscop
}
