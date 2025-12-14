/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    var_11 = ((((!((((arr_3 [9] [i_1 - 1] [i_1]) - (arr_5 [i_0] [i_1 - 1] [i_2])))))) ? ((min((arr_2 [i_1]), (arr_2 [i_1])))) : var_1));
                    arr_9 [i_1] = (((-(var_4 == -1832179428))));
                    var_12 = (((arr_6 [i_2 + 2] [i_1 - 2] [i_1 - 2]) != (arr_6 [i_2 - 2] [i_1 - 1] [i_1 + 1])));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {

                            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                            {
                                var_13 = ((((((var_0 ? 1355249063 : var_10)))) ? var_6 : var_4));
                                var_14 = var_4;
                            }
                            for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                            {
                                var_15 = ((((min(var_5, var_3))) ? (min((arr_20 [i_1] [i_1] [i_1] [i_1 - 3]), (arr_20 [i_1] [21] [i_1] [i_1 - 2]))) : (((((arr_7 [i_4 - 1] [i_4 - 1] [i_1]) < var_2))))));
                                arr_21 [i_0] [i_1] [i_1] [i_4] [i_6] [i_6] [i_4] = (min((((-var_1 && (((-(arr_8 [i_1] [i_1] [i_6]))))))), var_2));
                                arr_22 [i_6] [i_1] [i_1] [i_1] [i_0] = ((((((min(1, -1607951095))) <= 3136010940)) ? ((((max(var_5, 52144)) << (var_4 / var_5)))) : var_8));
                            }
                            var_16 = (((max(((((arr_13 [i_1 - 3] [i_1] [i_1] [i_0]) ? var_6 : var_5))), (~var_0))) | -1));
                            var_17 = (min((arr_11 [i_0] [i_0] [i_1]), (((arr_17 [i_0] [i_0] [i_1 - 3] [i_4 - 1] [i_4 - 1] [i_3] [i_1]) & (min(228030216, 1540638214795674878))))));
                            arr_23 [i_1] = ((((max(var_1, (arr_1 [i_0] [i_1])))) << ((((((arr_5 [i_0] [i_4] [i_0]) ? var_2 : 110)) < (1430090073 / 1832179448))))));
                            arr_24 [21] [i_1] [i_4 - 1] = (max((!2382092554), ((var_0 ? (arr_14 [i_3]) : (arr_14 [i_3])))));
                        }
                    }
                }
                var_18 = (((var_4 != var_2) ? ((+((52136 ? (arr_4 [i_0] [11] [i_1]) : 52136)))) : 3));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_19 = 218;
                            var_20 = (((var_7 % -30837) & (arr_2 [i_1])));
                        }
                    }
                }
                var_21 = min((((~var_7) ? (var_0 + 10) : (!var_5))), (((max((arr_2 [i_1]), var_10)) + (max((arr_11 [i_0] [i_1] [i_1]), var_10)))));
            }
        }
    }
    var_22 = var_4;
    #pragma endscop
}
