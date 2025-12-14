/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [6] [6] &= var_2;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_13 = (~0);
                                arr_14 [i_0] [i_1] [i_0 + 1] [i_1] [i_2] [i_0] = 148;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = -69;

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = (min(31, 5311794228887775593));
        arr_19 [i_5] = (((((147 ? -1 : 13134949844821775998))) ? (((75 ? var_1 : var_10))) : (-463606453 != var_11)));
        var_15 = (min(var_15, (~var_11)));
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        var_16 = ((var_5 ? var_10 : ((8191 ? ((var_7 ? (arr_20 [i_6]) : -4528917146888372496)) : (-6 && -124)))));
        var_17 = (((((1 ? (arr_17 [i_6 - 1]) : 68))) ? ((max(((((arr_16 [i_6]) || 1567234652))), 1567234646))) : var_5));
        arr_22 [i_6] [i_6] = (((23805624 ? -var_10 : var_6)));
        arr_23 [i_6] [5] = (max(-124, (((~89) ? 13134949844821776022 : (((1 ? var_11 : var_12)))))));
        var_18 = (max(var_18, ((((-124 % -13) ? (((!(((var_0 ? 13134949844821776022 : var_12)))))) : ((((arr_21 [i_6] [i_6 + 1]) != var_7))))))));
    }
    #pragma endscop
}
