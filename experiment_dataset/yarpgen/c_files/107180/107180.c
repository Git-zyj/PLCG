/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((2210188720 != var_1), var_7));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((2210188723 ? ((((arr_1 [i_0]) * (arr_1 [i_0])))) : (((var_9 / var_7) ? var_4 : (max(var_7, 2210188705))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = 2084778589;
                    arr_7 [i_0] [i_1] = (((((arr_5 [i_0] [i_2 - 1] [i_0] [i_1]) ? (arr_5 [i_2] [i_2 + 1] [i_2 + 1] [i_1]) : (arr_5 [i_0] [i_2 + 1] [i_2] [i_1])))) ? ((max(0, (arr_1 [i_0])))) : var_2);
                }
            }
        }
        var_12 = ((min((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [7] [1]))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_13 = (min(var_13, (1 && 18446744073709551615)));
        var_14 = var_4;
        arr_12 [i_3] = (((arr_9 [i_3] [i_3]) ? (var_8 ^ var_9) : 32817));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_15 = (((arr_8 [4]) ? ((((arr_14 [i_4] [i_4]) * (arr_14 [i_4] [i_4])))) : (max((arr_8 [14]), ((18446744073709551615 ? var_3 : (arr_11 [7] [7])))))));
        var_16 = (arr_11 [i_4] [i_4]);
        var_17 ^= ((!((max(((var_1 ? var_4 : (arr_9 [8] [8]))), (((arr_10 [i_4] [i_4]) & var_7)))))));
        arr_15 [i_4] = (arr_8 [1]);
        var_18 = (min(var_18, ((((-(arr_13 [i_4])))))));
    }
    var_19 -= var_5;
    var_20 = (min(var_20, 0));
    #pragma endscop
}
