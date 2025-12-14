/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (min((arr_2 [i_0]), (((1 == var_4) ? (4294967295 < var_1) : (((arr_1 [i_0]) / var_0))))));
        arr_4 [i_0] [i_0] = 544312860;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_8 [7] [i_1] = (max(((min((arr_7 [i_1] [i_1]), var_0))), 518985686));
        arr_9 [1] = 2843462154;
        arr_10 [i_1] = (min((arr_5 [13]), (arr_6 [i_1])));
        arr_11 [i_1] [i_1] = ((((max((arr_6 [i_1]), (arr_7 [i_1] [i_1])))) ? (((!47812) ? ((((!(arr_7 [i_1] [i_1]))))) : var_10)) : ((((!((((arr_6 [i_1]) ? 4294967284 : var_4)))))))));
    }
    var_11 = var_4;
    #pragma endscop
}
