/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_1;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_16 -= ((((((arr_1 [5]) ? -3695 : (!0)))) & (((max(var_4, var_14)) & (var_12 >= 3694)))));
        arr_4 [i_0] = (min((var_6 >= 0), ((var_5 ^ (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_17 = (max((arr_6 [i_1]), (((max((arr_0 [i_1]), (arr_5 [i_1] [i_1]))) ^ (~var_12)))));
        var_18 = 3694;
        var_19 = (max(var_19, ((max((((-((max((arr_0 [i_1]), var_6)))))), (min(((max(var_10, (arr_2 [i_1])))), (((arr_5 [i_1] [i_1]) & (arr_0 [i_1]))))))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_2] = (arr_3 [i_2]);
            var_20 = (max(var_20, (arr_2 [i_1])));
        }
        for (int i_3 = 4; i_3 < 15;i_3 += 1)
        {
            var_21 = ((~((((249729848 ? var_8 : var_11))))));
            var_22 = (+((0 ? (arr_11 [i_1]) : (arr_6 [i_3 - 1]))));
        }
        arr_12 [i_1] [i_1] = (arr_1 [i_1]);
    }
    var_23 = ((max(var_4, (~var_3))));
    var_24 = (max(var_24, ((max((((((-2 ? var_9 : 4538))) ? var_10 : ((var_6 ? var_8 : var_9)))), 0)))));
    #pragma endscop
}
