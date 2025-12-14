/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    var_12 = ((!((!(var_2 & -949941536296023545)))));
    var_13 = (((-4045382786063826548 != var_10) >> (((!((((var_6 + 9223372036854775807) << (var_7 - 185)))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!((var_2 != (arr_0 [i_0] [i_0])))));
        var_14 = var_3;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_15 = var_3;
                        var_16 = ((!((min(-4045382786063826548, 9223372036854775804)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_17 = ((65520 ^ (arr_0 [i_1] [i_2 - 1])));
                        var_18 = -949941536296023545;
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_19 = (arr_4 [i_1]);
                        arr_17 [i_3] [i_3] [i_3] [i_2] [i_2] = ((!(((arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]) != (arr_6 [i_1] [i_2 + 2] [i_6])))));
                        var_20 = (arr_8 [i_6]);
                        arr_18 [i_2] = 1883206283518417584;
                        var_21 = (arr_0 [19] [i_1]);
                    }
                    arr_19 [i_2] = (arr_3 [1] [1]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    var_22 = (min(((max((arr_16 [i_1] [i_1] [i_7 - 3] [i_7] [i_1] [2]), -100))), (arr_8 [i_7 + 1])));
                    arr_24 [i_1] [i_7] = ((14 ? ((((!var_0) ? ((2167113554 ? var_1 : var_6)) : (287747724 >= var_6)))) : (min((!66571993088), (min((arr_10 [i_8] [i_8] [i_7] [7] [i_1] [i_1]), var_5))))));
                    arr_25 [i_1] [i_7] [i_7] = ((-1057399277 * (((!((((arr_12 [1] [i_7] [1] [i_1]) & (arr_21 [i_1] [17])))))))));
                }
            }
        }
    }
    #pragma endscop
}
