/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            arr_5 [2] [1] = (((min(var_2, (arr_4 [4] [i_1 - 2]))) >= (((((arr_4 [i_1 + 1] [i_1 - 1]) || (arr_2 [i_1 - 1] [i_1 - 1])))))));
            var_17 = var_1;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = (((((((arr_8 [i_0]) ? (arr_2 [i_0] [12]) : var_8)))) ^ (arr_7 [i_2] [i_2])));
            var_19 = var_7;
        }
        var_20 = (max(var_20, (arr_1 [i_0])));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_21 -= (((2928186593 & 189) ? (((arr_9 [i_3] [i_3]) ? var_9 : var_0)) : var_9));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_21 [i_3] [i_3] [13] [i_3] [i_3] = (((((arr_20 [i_3]) && var_5)) ? (min((arr_17 [i_3] [i_4] [i_5] [i_6]), (arr_12 [i_6] [i_3]))) : (arr_18 [i_3] [i_4] [i_5] [11])));
                        var_22 = (min(var_22, var_10));
                        var_23 = (arr_14 [i_6]);
                        var_24 = (min((((!var_4) ? (-9223372036854775807 - 1) : (!var_13))), (((var_15 || (((arr_16 [i_3] [i_4] [i_5] [i_6]) && var_10)))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] [i_7] &= ((!((min(-7577065990838354090, 54)))));
        arr_27 [i_7] = (min((((var_6 ^ (arr_14 [i_7])))), ((var_14 ? (arr_25 [i_7]) : (arr_15 [i_7] [23] [i_7])))));
    }
    #pragma endscop
}
