/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_1 && var_9) ? (min((min(var_5, var_12)), ((min(17, var_4))))) : var_8);
    var_14 = ((max(var_1, ((max(var_1, var_6))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_15 = ((((((!(arr_0 [i_0]))))) ? ((((!(arr_4 [i_1] [i_0]))))) : ((var_5 ? (((arr_3 [i_0 + 1] [i_0]) | 235)) : (arr_5 [i_0] [i_0 + 1] [i_0 - 2])))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_16 = ((!-8127097186760302164) ? (arr_4 [i_1] [i_0]) : -8127097186760302144);
                var_17 = (min(var_17, (~8127097186760302143)));
            }
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_3] = 0;
            var_18 = (~-25549);
            var_19 = 1;
        }
        var_20 = (max(((-(arr_4 [i_0] [i_0]))), (((21213 ? -32757 : 124)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_21 -= (arr_3 [i_4] [i_4]);
            arr_20 [i_4] [i_5] [i_4] = ((arr_7 [i_4] [i_5] [i_5]) ? (arr_7 [i_5] [i_5] [i_4]) : (arr_7 [i_4] [i_5] [i_5]));
            var_22 = ((arr_14 [i_4]) <= (arr_11 [i_4] [i_5]));
        }
        arr_21 [i_4] = (arr_16 [i_4] [i_4] [i_4]);
        var_23 = (min(var_23, var_11));
    }

    /* vectorizable */
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        var_24 = var_11;
        var_25 = (arr_4 [i_6] [i_6]);
        arr_24 [i_6] = (arr_9 [i_6]);
    }
    #pragma endscop
}
