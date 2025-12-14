/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_1, var_4));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (((~(min((arr_0 [i_0]), (arr_1 [i_0]))))));
        var_14 = ((1226527735 ? (arr_2 [i_0]) : (min((arr_0 [i_0]), ((1 ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2 + 2] [i_1] [i_3] = ((1 * (arr_4 [i_1])));
                    arr_12 [i_1] [i_2 + 2] [i_2] [i_2 - 1] = (((!var_12) * (arr_1 [i_1])));
                }
            }
        }
        arr_13 [i_1] [i_1] = (~(((-9223372036854775807 - 1) + 4257406378)));
        var_15 = (max(var_15, 0));
        var_16 = ((1 ? (arr_2 [i_1 + 2]) : var_8));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_17 = -40;
        arr_18 [i_4] [i_4] &= var_8;
        var_18 += ((var_6 >= ((((-111 ? 56 : var_0))))));
        arr_19 [i_4] = ((((max(var_7, var_5))) || (((((min(126, 6090938516480467910))) ? ((((arr_10 [i_4] [i_4] [i_4] [i_4]) ? (arr_4 [i_4]) : var_4))) : (arr_6 [i_4] [i_4] [i_4]))))));
        var_19 -= ((((arr_2 [i_4]) ? ((min(var_11, (arr_1 [i_4])))) : ((~(arr_0 [i_4]))))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_23 [i_5] = (arr_2 [i_5]);
        arr_24 [i_5] [i_5] = var_7;
    }
    #pragma endscop
}
