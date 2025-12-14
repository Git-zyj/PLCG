/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? ((var_7 - (arr_1 [i_0] [i_0]))) : ((((arr_1 [i_0] [i_0]) - (arr_1 [i_0 + 2] [i_0]))))));
        var_20 = ((((((arr_0 [i_0]) ? (arr_1 [15] [15]) : (arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) + var_6)) : (arr_0 [i_0 + 4])));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_21 = var_0;
        var_22 = (min(var_22, (((~(arr_1 [i_1 + 2] [i_1 + 3]))))));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_23 += arr_4 [i_2];
        var_24 = (((((-359183162 - ((-6679776189094035623 ? 6679776189094035622 : 799308670))))) ? (((var_5 + (arr_7 [i_2] [i_2])))) : ((799308660 ? (arr_0 [21]) : ((((arr_7 [15] [i_2]) + (arr_0 [i_2]))))))));
    }
    var_25 = ((((var_16 >= var_2) > var_5)));
    var_26 = var_19;
    var_27 = ((min((var_5 < var_15), (~var_13))));
    #pragma endscop
}
