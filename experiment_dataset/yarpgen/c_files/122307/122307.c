/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!((max(var_0, var_1)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 -= ((((((((var_11 ? (arr_0 [i_0]) : 3734086928))) ? (arr_0 [i_0]) : (!var_12)))) ? ((((((var_12 ? 1 : 1)) < ((var_0 ? var_5 : var_6)))))) : (((25248 - var_13) ? (((-10 + (arr_2 [i_0] [i_0])))) : (max(6681431682890920261, (arr_1 [i_0])))))));
        var_16 = arr_2 [i_0] [i_0];
        var_17 = (min((((arr_0 [i_0]) % var_8)), (670 + 0)));
        var_18 = (min(var_18, -75));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [i_2] [i_1] &= min(var_2, (arr_5 [i_3]));
                    var_19 += var_12;
                    arr_12 [i_1] = var_2;
                    var_20 = (((arr_5 [i_1]) * ((3823935976019386671 & ((var_0 ? var_3 : (arr_9 [i_1] [i_1] [i_3])))))));
                }
            }
        }
        arr_13 [12] = (((((var_10 ? (arr_8 [i_1] [i_1]) : (arr_8 [i_1] [i_1])))) ? (((9909 ? 818561496 : 818561510))) : (((arr_8 [i_1] [i_1]) - (arr_8 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_21 = (max(var_21, ((((((arr_14 [i_4]) ? (arr_15 [i_4]) : var_4))) ? ((-75 ? (-127 - 1) : (arr_14 [i_4]))) : (arr_14 [i_4])))));
        var_22 = -var_9;
        arr_16 [i_4] = (var_5 | ((3511899437177239820 * (arr_14 [i_4]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_19 [i_5] = ((var_9 != (!var_0)));
        arr_20 [i_5] = var_1;
        var_23 = (max(var_23, (arr_6 [i_5])));
        var_24 = (0 != 11377177163306297482);
    }
    var_25 = ((-var_13 || ((((var_1 % var_2) + (var_5 | var_7))))));
    var_26 = (3927083881 < 1);
    #pragma endscop
}
