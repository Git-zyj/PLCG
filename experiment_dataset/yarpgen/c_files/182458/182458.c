/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 &= min((~var_9), ((~(((!(arr_0 [i_0])))))));
        var_12 = (max(var_12, (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = 6;
        arr_7 [12] &= 0;
        var_13 = (min(var_13, var_6));
        arr_8 [i_1] [i_1] = (min((arr_3 [i_1] [i_1]), (~var_5)));
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        arr_13 [i_2 - 1] [i_2 - 1] = 15;
        var_14 &= ((-(((!(((var_6 ? 4 : -679987275))))))));
        arr_14 [i_2] [i_2] = ((~(arr_3 [i_2 + 2] [14])));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_23 [i_4] [i_3] [i_3 - 2] = (((!var_1) ? var_4 : (((0 == (arr_11 [i_3] [i_4]))))));
                    var_15 = (min(var_15, ((min(32077, (70 || 32077))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 7;i_6 += 1)
                        {
                            {
                                arr_30 [i_5] [i_5] [i_3] [i_5] [i_5] &= 17;
                                arr_31 [i_2] [i_3] [i_4] [i_4] &= ((~(arr_12 [i_2 + 1] [i_4])));
                                var_16 = ((!(((2 << (((((-2147483647 - 1) - -2147483624)) + 50)))))));
                                var_17 &= (~1);
                                arr_32 [i_2] [i_3] [i_3] [i_2] [i_2] &= ((((arr_10 [i_6 - 1] [i_3 - 1]) || (arr_21 [i_6 + 1] [i_3 - 2] [i_3 - 2] [i_2 - 1]))));
                            }
                        }
                    }
                }
            }
        }
        arr_33 [i_2] = ((((min(2574323070, 1))) ? ((-((var_4 ? (arr_25 [i_2] [i_2 - 1]) : var_5)))) : (!var_6)));
    }
    var_18 = var_5;
    var_19 = (min(var_19, (~1)));
    var_20 = ((-(15872 <= 235)));
    var_21 = (!var_9);
    #pragma endscop
}
