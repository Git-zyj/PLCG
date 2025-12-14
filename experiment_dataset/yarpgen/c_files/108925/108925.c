/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 *= ((((((((var_14 ? 82 : 2099236982))) < (min(var_4, var_9))))) > ((+((17556551149413474329 ? (arr_1 [i_0]) : 1))))));
        var_22 = (((((min(var_0, var_3)))) || (((~(arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((174 - (arr_3 [i_1])));

        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            var_23 = var_1;
            var_24 = (arr_10 [i_2 - 2] [i_2 - 3] [i_2 + 1]);
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_25 = ((!((((min(var_12, 65535)))))));
        var_26 = ((var_8 && (((~((~(arr_2 [i_3]))))))));
        var_27 = (max(var_27, 1));
        var_28 = ((((((arr_11 [i_3] [i_3]) ? ((7291 ? (arr_1 [i_3]) : var_19)) : var_5))) ? (arr_13 [14] [i_3]) : (463486269 + 1126663691)));
    }
    var_29 = var_5;
    #pragma endscop
}
