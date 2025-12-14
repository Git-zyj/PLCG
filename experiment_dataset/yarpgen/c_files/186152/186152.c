/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (max(var_11, -6024551314354563134));
                arr_6 [i_0] = (((((-6024551314354563134 ? ((var_3 ? 29 : var_6)) : (((arr_4 [i_0]) << (157373920 - 157373916)))))) ? ((min(var_3, var_6))) : ((((((arr_4 [i_0]) | (-127 - 1)))) ? var_0 : (arr_3 [i_0 - 1] [i_0 - 4])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [8] [8] |= (arr_5 [i_3] [i_0]);

                            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                            {
                                var_12 = (((arr_0 [i_0]) < -6024551314354563131));
                                arr_15 [i_0] [i_1] [i_0] [i_2] [i_1] [i_0] = ((1 ? (max((arr_8 [i_1]), ((var_8 ? var_9 : (arr_5 [i_2] [8]))))) : 1574005153));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_3] [6] [i_1] [i_0] = ((((max((arr_2 [i_0 + 3]), var_2))) ? ((((arr_13 [i_0 - 3] [i_0 + 4] [i_0] [i_0 + 1]) ? (arr_13 [i_0 - 4] [i_0 + 4] [i_0 + 1] [i_0 + 1]) : var_6))) : (((~var_8) & (arr_10 [i_0 - 2] [i_0 - 4] [i_0 - 4] [i_0 + 4] [i_0] [i_0])))));
                                var_13 += var_9;
                            }
                            var_14 += (-127 - 1);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((((((1 ? (arr_3 [i_8 - 1] [i_0 + 4]) : (arr_19 [i_0 + 2])))) ? var_1 : (max(((var_2 ? var_1 : var_3)), (arr_23 [i_6] [i_0 - 1] [i_0 - 1] [i_0 - 4]))))))));
                                var_16 = (min((((arr_5 [i_0 + 2] [i_0 + 2]) ? (arr_9 [i_8 - 1] [i_8] [i_8 + 1] [i_8 - 1] [i_0]) : (min(var_8, (arr_16 [i_0] [i_7] [i_1] [i_0]))))), var_7));
                                var_17 = (arr_2 [i_0 - 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 14;i_10 += 1)
        {
            {
                var_19 = 6024551314354563131;
                var_20 = arr_28 [i_9 + 1] [i_10 + 2];
            }
        }
    }
    var_21 = var_7;
    #pragma endscop
}
