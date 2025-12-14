/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_10);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = ((702173847 ? 100 : 1));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 |= ((1 | (min((-13 + 3599772224006438921), ((max(1093586766, 101)))))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_22 *= (((arr_8 [i_0] [i_0] [i_0] [i_0]) != ((83 * (arr_5 [i_0] [i_2] [i_2])))));
                            var_23 = (max(var_23, (arr_8 [i_1] [i_1 + 1] [i_3 - 1] [i_3 - 1])));
                        }
                        var_24 = ((((((-(arr_8 [i_0] [i_0] [i_0] [i_0])))) ? (1 & -1374403799) : ((var_14 ? -12034 : (arr_10 [i_0] [i_0] [i_0] [i_3]))))));

                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_25 -= min(((!((!(arr_13 [i_1] [10] [i_5]))))), ((!(-127 - 1))));
                            var_26 = (((((10741 ? 32538 : 221))) ? 2094710761647385241 : 328558047314393644));
                            var_27 *= var_18;
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_28 = (((-(arr_1 [i_0 - 1] [i_3 - 1]))));
                            var_29 = (arr_13 [i_0] [i_6] [i_0]);
                            var_30 -= ((((((arr_6 [i_0] [i_3] [i_6]) ? (arr_13 [i_1 + 2] [1] [i_1 + 2]) : (arr_13 [i_0] [10] [10])))) ? ((40 + (arr_0 [i_0] [i_0]))) : ((((arr_11 [i_0] [i_1] [i_2] [i_3] [i_1]) ? (arr_18 [i_0 - 1] [i_0 - 1]) : (arr_19 [i_0] [i_1 - 3] [i_2] [i_3 - 1] [i_6]))))));
                            var_31 &= ((((min(1, (arr_5 [i_3 - 1] [i_1 + 1] [i_0 - 1])))) > (arr_5 [i_3 - 1] [i_1 + 1] [i_0 - 1])));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_32 *= (min((arr_19 [i_0] [i_3] [i_0] [i_0] [i_0]), var_15));
                            var_33 = ((max((arr_10 [i_3] [i_3] [i_3] [i_3 - 1]), (arr_10 [i_3] [i_3] [i_3] [i_3 - 1]))));
                            var_34 *= ((((~-125) ? (arr_8 [i_1] [i_3 - 1] [i_1] [i_0 - 1]) : (((!(arr_9 [i_0] [i_2] [i_2] [i_0] [i_0] [i_0])))))));
                            var_35 = (arr_18 [i_1 - 1] [i_0 - 1]);
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        var_36 = (arr_0 [i_2] [i_2]);
                        var_37 = (arr_10 [i_8] [i_0] [i_0] [i_0]);
                        var_38 = (((arr_19 [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1]) >= 86));
                    }
                }
            }
        }
        var_39 = var_9;
    }
    var_40 = (max(var_7, ((-(var_17 + var_9)))));
    #pragma endscop
}
