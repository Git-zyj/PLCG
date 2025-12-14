/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_10;
    var_19 = ((+(((!var_15) & (min(var_14, var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = ((!((max(var_7, (max(var_1, var_2)))))));
                arr_5 [i_0] [i_1 - 1] [i_0] = ((((min(var_8, -93))) ? (arr_3 [i_0 - 1]) : (var_9 / var_5)));

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] = (!(((-1078937154 ? 0 : (arr_1 [i_1 + 3])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0 - 1] [i_1] [i_0] [i_2 - 1] [i_3] [i_0] = (((((-((max(-93, var_16)))))) ? ((max((max((arr_12 [i_4 + 1] [i_0]), (arr_11 [i_0] [i_1] [i_2 + 1] [i_0] [i_4]))), (((27326 || (arr_11 [i_0] [i_0] [i_0] [i_3 - 3] [i_4]))))))) : 27340));
                                arr_14 [i_4] [i_0] [i_4] [i_4] [1] = (max((-2147483647 - 1), (((!((min(12, var_10))))))));
                                arr_15 [i_0] = ((((min(-22, (arr_9 [i_3 + 1])))) ? (-7215904603447829971 | -2147483620) : ((((!(arr_0 [i_0])))))));
                                var_21 = (max(-2147483643, 38209));
                            }
                        }
                    }
                    var_22 = var_14;
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_23 = (((((((var_5 ? -31352 : (arr_6 [i_0] [i_0] [i_0])))) ? (arr_7 [i_0] [i_0 - 1] [i_5]) : -4193280)) <= -8143));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] = (!(((((min(-11, 2734909671))) ? var_17 : (~2147483643)))));
                                var_24 = ((!(((((max(39, 1))) - (!var_15))))));
                                var_25 = 181824626;
                            }
                        }
                    }
                    var_26 = (max(var_26, 4193280));
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_27 = 38196;
                                var_28 = (arr_27 [i_0 + 2] [i_0] [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_0 - 1]);
                            }
                        }
                    }
                    arr_32 [i_0] [i_1 + 2] [i_0] = (!-2147483643);
                    arr_33 [i_0] [i_1] [6] [i_0] = (max(23625, -23625));
                    arr_34 [i_0] [1] [i_0] = (((1 / (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]))));
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    var_29 = -3390935237380649754;
                    arr_37 [i_0] [i_0] = (((arr_11 [i_0 + 2] [i_1] [i_11] [i_11] [i_11 - 1]) ^ -22));
                    var_30 = (((arr_36 [i_0 - 1] [i_0 - 1]) <= 10151143504381362680));
                }
            }
        }
    }
    #pragma endscop
}
