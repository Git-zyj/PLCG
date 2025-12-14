/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((339722215 ? 252 : var_5))) ^ var_11)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = ((((28979 << (var_9 - 49367))) | (((arr_0 [1]) ? (arr_1 [i_0]) : var_8))));
        arr_2 [i_0] [i_0] = (((~(arr_1 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = (arr_4 [i_1]);
        arr_6 [i_1] = ((((!(!118))) ? 5855045072194180590 : ((((arr_3 [13]) ? (arr_4 [i_1]) : (arr_4 [3]))))));
        arr_7 [i_1] = (arr_3 [i_1]);
    }
    #pragma endscop
}
