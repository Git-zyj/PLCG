/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (((((((!8097) ? var_5 : var_10)) + 9223372036854775807)) << var_9));
    var_19 = (max(var_12, (((var_17 && (!var_0))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_20 = ((-5722 ? var_6 : 5734));
        var_21 += ((var_15 << (10 / var_1)));
        arr_3 [i_0] [i_0 + 1] = (arr_0 [7]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_22 += (((((((((!(arr_5 [9] [i_1]))))) % ((var_4 ? var_5 : (arr_5 [i_1] [i_1])))))) + (max((arr_6 [6]), 121))));
        arr_7 [i_1 - 1] = (((arr_5 [3] [3]) ? (max(var_15, ((24709 >> (arr_5 [2] [i_1]))))) : (~10)));
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_23 = (min(var_23, ((max(5716, (arr_8 [i_2 - 2]))))));
        var_24 += ((((arr_9 [1]) != var_16)));
        arr_10 [i_2] = (arr_9 [i_2]);

        /* vectorizable */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            var_25 = (min(var_25, var_0));
            var_26 = (!var_12);
        }
        for (int i_4 = 4; i_4 < 18;i_4 += 1)
        {
            var_27 = var_17;
            var_28 = (max((((!(!-29)))), ((-5719 ? 1 : 9453220106621259922))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_29 = (min(var_29, (((arr_23 [1] [i_4] [i_7]) > (arr_19 [i_2] [12] [i_2 + 3] [i_4])))));
                            var_30 = (min(var_30, (arr_18 [1] [i_4] [4])));
                            var_31 += (-29430 || 2144431238);
                            arr_26 [i_2] [11] [i_5] [i_4] [i_2] = ((((((arr_13 [i_2] [3] [i_2 + 1]) ? (((379903873939340804 < (arr_25 [i_2] [i_2] [i_5] [i_4 - 1] [i_2] [i_2] [19])))) : var_3))) <= (min(var_6, 231))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
