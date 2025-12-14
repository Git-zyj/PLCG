/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 ? var_12 : var_9));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_12 ? (min(((0 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))), var_0)) : ((((((arr_0 [i_0] [i_0]) == 24576)) ? 1251687281 : var_11)))));
        arr_3 [i_0] [i_0] = (min((((((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_2)) + 9223372036854775807)) >> (((arr_0 [i_0] [i_0]) + 148)))), ((((arr_1 [i_0]) ? var_9 : var_8)))));
        arr_4 [i_0] = -105;
        arr_5 [12] [i_0] = ((-(((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : 70368744177663))));
        arr_6 [i_0] = ((((min((((8 ? -8 : -70368744177664))), ((-32745 ? 18446744073709551615 : 24560))))) ? (arr_0 [i_0] [i_0]) : var_11));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        arr_10 [i_1] = ((-(arr_7 [i_1])));

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            arr_13 [i_1] [i_1] = (arr_7 [i_2]);
            arr_14 [i_1 - 1] [i_2] [i_2] = (!4090298539);
        }
        arr_15 [i_1] = (12302 - -70368744177664);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_18 [i_3] = ((-(((arr_12 [i_3] [i_3] [i_3]) + (arr_12 [i_3] [i_3] [i_3])))));
        arr_19 [i_3] [i_3] = ((var_0 ? (arr_12 [i_3] [i_3] [i_3]) : ((14497 * (arr_11 [i_3] [i_3] [i_3])))));
    }
    #pragma endscop
}
