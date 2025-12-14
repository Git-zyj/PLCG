/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = 18446744073709551610;

                for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    var_20 += (max(14968680558791078691, 7669945146525533643));
                    var_21 = min(8780769390941877038, 18013559919256386896);
                    var_22 = 17639821769697859399;
                }
                for (int i_3 = 3; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_23 = max((((arr_15 [i_5] [i_5] [i_5 - 3] [i_5] [i_5 - 2] [i_5] [i_5]) | (17752694281012396345 & 4893588105724511187))), ((18013559919256386896 ? 806922304011692205 : (((((arr_11 [13] [i_1]) < 18013559919256386896)))))));
                                arr_16 [i_5] [i_5] [i_5] [i_5] [i_4] [i_5] [i_5] = (~1656988120846895530);
                                arr_17 [i_0] [i_0] [12] [i_0] [i_4] = ((((arr_10 [i_4] [i_4]) ? (~var_0) : ((14186958767724091256 ? 16789755952862656085 : 15054568991180615801)))) % (((((max(var_14, var_5)) != ((5486037101945166457 ? 868086599345162498 : (arr_9 [i_4]))))))));
                            }
                        }
                    }
                    var_24 -= ((!(!var_18)));
                }
                for (int i_6 = 3; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    arr_20 [i_6] [0] [i_1] [i_0] = (0 < 5486037101945166457);
                    var_25 = (max(var_25, 3478063514918472924));
                    var_26 = arr_18 [i_6] [i_6] [i_6 - 1] [i_6 - 1];
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_27 = 433184154453164720;
                    arr_24 [i_7] [i_7] [i_0] [i_0] = -var_11;
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_30 [2] [i_1] = arr_8 [i_9] [i_8] [i_1] [i_0];
                                var_28 = (-(10724445672781238674 & 18446744073709551594));
                            }
                        }
                    }
                }
                arr_31 [i_1] [i_0] = (-(((arr_10 [i_0] [i_0]) ? var_5 : var_9)));
            }
        }
    }
    var_29 = (((((var_10 ? var_16 : var_10)) - (18446744073709551594 / 13953552805274148486))) - (var_1 - 3738747254117655366));
    var_30 *= var_14;
    #pragma endscop
}
