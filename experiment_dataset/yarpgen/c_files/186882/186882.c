/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_12 ? 2674556125 : 2112640634))) <= var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (((((var_0 ? (arr_1 [i_1] [11]) : (arr_3 [i_0] [i_0] [i_1])))) ? 3699 : (((arr_1 [i_0] [i_1]) * 9482))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2] [i_1] [i_0] [i_0] [i_0] = arr_2 [i_1] [i_3] [i_0];
                                var_21 = 2112640634;
                                var_22 = (!10927449312950853098);
                            }
                        }
                    }
                    var_23 = (min(var_23, ((max(((((arr_8 [i_0] [i_1] [i_2]) ? 429414959 : -92))), (((arr_1 [i_0] [i_0]) ? 61809 : (arr_1 [i_0] [i_0]))))))));
                    arr_13 [i_0] = ((27220 + (max(16314588467722838677, -261033920819935144))));
                    arr_14 [i_2] [i_0] [i_0] = (min((min(var_13, (arr_6 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0]))), ((((arr_9 [i_0] [i_1]) >= (arr_9 [i_2] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_24 -= (max(((1111710655291029213 ? -28636 : 16541681247301195247)), (((21167 | (-127 - 1))))));
                                arr_19 [i_0] = (~18446744073709551615);
                                var_25 += (((-1719839893 && -6116) ? (((arr_6 [i_0] [i_1] [i_1] [i_1] [i_5 - 1] [i_6]) ? var_0 : var_10)) : ((((arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_2 : (arr_6 [i_1] [i_1] [i_2] [i_5 + 1] [i_5] [i_6 - 2]))))));
                                var_26 = (max(var_26, var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (!9223372036854775807);
    #pragma endscop
}
