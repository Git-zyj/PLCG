/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((560750930165760 ? (-127 - 1) : -5)) & var_3))) ? var_13 : (((var_3 ? (!var_4) : ((min(var_15, var_4))))))));
    var_19 &= var_4;
    var_20 = -7;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_21 += var_12;
        var_22 += (arr_1 [i_0] [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (((arr_2 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])));
        var_23 -= ((-25 ? (arr_2 [i_1]) : (arr_2 [i_1])));
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        arr_9 [i_2] &= (arr_1 [i_2] [i_2]);
        arr_10 [i_2] = (max((max((var_13 / -6), var_2)), (((-(min((arr_8 [i_2] [i_2]), var_4)))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_24 = (min(var_24, ((((((!-1995940344) * ((((arr_13 [i_2]) > (arr_13 [i_2])))))) >= ((var_12 ? 0 : (arr_12 [i_2 - 1]))))))));
                    arr_15 [i_2] [i_2 - 1] [i_3] [i_4] |= 1;
                    arr_16 [i_2] [i_3] [i_4] [14] = ((((min(var_1, var_4))) ? 18446744073709551615 : ((((arr_8 [i_2 - 1] [i_2 - 1]) ? (((((arr_4 [i_2]) == var_10)))) : 120)))));
                }
            }
        }
    }
    #pragma endscop
}
