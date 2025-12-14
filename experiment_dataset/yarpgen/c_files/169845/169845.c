/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((((~(~var_2)))) ? (min(((var_14 ? 16611161308643025994 : -7548546748169938311)), var_2)) : var_7)))));
    var_17 = (((((min(var_12, var_1))) ? 90 : (max(47, var_8)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_18 = ((7548546748169938305 / -7548546748169938316) ? ((min((min((arr_1 [14] [i_0]), (arr_0 [4]))), (arr_0 [16])))) : (((arr_0 [i_0]) ? 1 : (((arr_0 [3]) ? var_15 : (arr_2 [i_0]))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_1] [i_0] = (((((var_0 ? 29347 : var_2))) ? (arr_2 [i_0]) : var_0));
            var_19 = (max(var_19, (((var_11 ? (arr_1 [i_1] [i_1]) : (arr_1 [i_1] [i_1]))))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_20 = ((-(((!2853615248) ? (((max(1, 62510)))) : (min(var_0, 605))))));
            var_21 = (min(var_21, (min((max((!7548546748169938308), ((-6364147004415564094 ? var_11 : var_11)))), 23477))));
            arr_9 [i_0] [15] [i_2] |= (min(((((((63552 ? (arr_8 [10] [i_2] [i_0]) : var_5))) ? ((min(var_3, 30856))) : ((((arr_2 [i_0]) > (arr_6 [i_2] [i_0]))))))), (max(((7548546748169938315 & (arr_3 [i_2] [i_0] [1]))), 1))));
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_22 = (max(1, (10591 == 1)));
        var_23 *= (max((arr_10 [i_3]), ((-(max((arr_2 [20]), 65535))))));
        var_24 = (min(var_24, (arr_11 [i_3])));
    }

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_15 [i_4] &= ((-20002 ? (((arr_12 [i_4]) ? var_4 : (arr_14 [i_4]))) : var_3));
        var_25 = max((((!(~65535)))), ((((105 ? var_11 : (arr_14 [19]))) + var_10)));
    }
    #pragma endscop
}
