/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (min(var_7, var_10));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_13 = var_0;
                        var_14 = (((((max((arr_8 [i_0] [i_1] [i_2] [i_3] [i_0] [4]), var_6)) ? (((11778505729439884642 ? -125 : (arr_7 [i_0] [i_0])))) : (arr_2 [i_3] [2]))) ^ (42 + -2147483644)));
                    }
                    var_15 = (((arr_4 [i_0] [i_1] [i_2]) ? var_6 : ((((!7935706398373876169) <= (((arr_5 [i_0] [i_1] [i_2] [i_2]) ? 23 : (arr_3 [0] [i_1] [i_1]))))))));
                    arr_11 [i_0] [i_1] [i_1] = (arr_1 [i_1]);
                    var_16 = 16383;
                }
            }
        }
        var_17 = (i_0 % 2 == zero) ? ((((2305843009213693951 | 32767) << (((arr_10 [i_0] [i_0]) - 227))))) : ((((2305843009213693951 | 32767) << (((((arr_10 [i_0] [i_0]) - 227)) + 88)))));
        var_18 *= (!31002);
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 20;i_4 += 1)
    {
        var_19 = ((arr_12 [i_4 + 2]) == (arr_12 [i_4 + 2]));
        var_20 *= (arr_13 [i_4]);
        var_21 = (arr_12 [i_4 - 1]);
        var_22 = (arr_13 [i_4 - 3]);
    }
    var_23 = (((((min(115, 32256))) ? var_5 : var_3)));
    var_24 = var_11;
    #pragma endscop
}
