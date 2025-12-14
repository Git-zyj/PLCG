/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_15 = ((!((min(4159633629670653529, 4159633629670653529)))));
        var_16 = arr_3 [i_0];
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((((~(min((arr_3 [i_1]), -4159633629670653508))))) % ((((var_11 ? var_6 : var_5)) | (arr_2 [12] [i_1]))));
        var_17 = -var_5;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_18 = (-81 ? -3689668164809119039 : 32);
        var_19 = ((!(((44481110677623733 ? 32 : (arr_10 [i_2 - 1] [i_2 - 2]))))));
        var_20 = ((!(!-1675343851)));
        arr_11 [i_2 + 1] [i_2 + 1] = (50 != -4159633629670653508);
    }
    var_21 = ((((((((2979547595724193218 ? 18226 : 17317308137472))) ? (var_3 == var_5) : (var_13 ^ 47303)))) ? (((((18232 ? 15397503197478964857 : var_12))) ? 101 : ((var_12 ? var_1 : 4159633629670653507)))) : var_0));
    var_22 = var_9;
    #pragma endscop
}
