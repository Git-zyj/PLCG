/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((min((((-(min(var_13, 6024667988083572406))))), ((var_11 ? ((var_15 ? var_10 : 220)) : ((min(2147483647, 2147483647))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = ((~((((((var_6 ? (arr_6 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4]) : 6708109417150876458))) && (((~(-9223372036854775807 - 1)))))))));
                                var_20 = (-(((((max(220, (arr_1 [i_0]))))) & (min((arr_0 [i_0]), var_2)))));
                                var_21 = (min(var_21, ((((18101045334840784116 % 17365) || 14708125631742859787)))));
                            }
                        }
                    }
                    arr_10 [i_0] [i_1] [i_0] = 107;
                }
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    arr_13 [18] |= ((((-(arr_9 [i_0 + 1] [8] [i_5] [i_5 + 3] [i_5 + 3] [i_5 - 1] [18])))) ? var_13 : (!1));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_22 = ((13659 ? (max(((var_9 ? var_0 : 15837572450244612104)), (var_13 - 74))) : ((max(-8382509403986873555, 1)))));
                                var_23 = ((((max((min(-10281775, -1990436036717215491)), (var_10 <= 8689596341451186808)))) ? ((min((arr_3 [i_0 + 1] [i_0]), (arr_3 [i_0 + 1] [12])))) : var_6));
                            }
                        }
                    }
                    arr_20 [i_0] [i_1] [i_0] = ((-80 ? 1575712840 : (-2147483647 - 1)));
                    var_24 = (max(var_24, (((((((arr_12 [i_1] [i_1] [6]) >= (-9223372036854775799 + 528416083)))) - ((((arr_6 [i_5 + 1] [17] [i_5 + 1] [17] [i_5] [17]) < (-127 - 1)))))))));

                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        arr_23 [i_0] [i_5 + 3] [i_1] [i_0] = 107;
                        var_25 = (min((!2147483647), ((((min(4476, var_0))) && ((min(var_0, var_14)))))));
                    }
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    arr_26 [i_0] [i_1] [i_1] [i_0] = -1345209607;
                    var_26 = min(-114, 4245885042063660571);
                    var_27 = (2147483647 & -114);
                }
                var_28 = (min(var_28, (((((((((var_3 && (arr_14 [i_0] [i_0] [12] [i_1])))) & 255))) != ((-36 * (18446744073709551615 | 7))))))));
            }
        }
    }
    var_29 |= (!var_14);
    var_30 = var_3;
    #pragma endscop
}
