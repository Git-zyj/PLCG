/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_11));
    var_14 = var_8;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(var_15, (((((+(((arr_0 [i_0]) ? 5257205776544334135 : var_4)))) ^ ((-((var_12 ? var_10 : (arr_0 [i_0]))))))))));
        arr_3 [i_0] = (arr_0 [i_0 - 1]);
        var_16 |= ((-(((arr_2 [12] [i_0 + 1]) ? var_5 : (arr_2 [i_0] [i_0 + 1])))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_7 [10] [10] |= -3239286951420102704;
        var_17 = (arr_1 [i_1 - 2]);
        var_18 = ((-(!var_0)));
        var_19 = 97;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_20 -= var_5;
            var_21 = (((arr_11 [i_2 + 2] [i_2 + 1]) ? (((arr_6 [i_3] [i_3]) ? var_4 : 3864503823)) : 0));
            var_22 = (arr_10 [i_2 + 1]);
        }
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            arr_17 [i_4 + 1] [1] [7] = (arr_13 [i_4] [i_4 - 1] [i_4]);
            var_23 |= ((arr_11 [i_2] [i_4]) ? (arr_8 [i_2]) : var_11);
        }
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            var_24 = ((var_3 >> (((arr_8 [3]) - 59572))));
            arr_21 [i_2] [i_5] [i_2] = (arr_8 [i_5 - 1]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 15;i_7 += 1)
                {
                    {
                        var_25 -= ((var_8 | ((430463472 ? var_6 : (arr_12 [i_5])))));
                        var_26 = (max(var_26, var_7));
                        var_27 = ((-(!var_4)));
                        arr_26 [i_7] [i_7] [i_7] [i_7 + 1] = (((arr_10 [i_5 + 1]) ? (arr_10 [i_5 - 1]) : (arr_10 [i_5 - 1])));
                    }
                }
            }
            arr_27 [i_2] [i_5] = ((-101 ? 32767 : -32750));
        }
        var_28 = ((~((var_3 ? var_12 : var_11))));
        arr_28 [i_2] [i_2] = var_6;
        var_29 = (((arr_19 [i_2 - 2] [i_2 + 4]) ? var_5 : (arr_19 [i_2 - 2] [i_2 + 2])));
        arr_29 [1] = (((arr_0 [i_2 + 4]) * (arr_18 [i_2 + 3])));
    }
    var_30 |= var_7;
    #pragma endscop
}
