/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!(!var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_21 += (max(((~(arr_2 [i_1 + 2] [10]))), (arr_2 [i_1 + 1] [i_1])));

                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        var_22 = (((arr_8 [i_0] [i_0] [i_2 - 2] [i_3 - 2] [i_1 + 2]) || (arr_8 [i_0] [i_0] [i_2 - 1] [i_3 + 1] [i_1 + 2])));
                        var_23 = ((3682214054 ? 35089 : 14772740954458320798));
                    }
                    for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_24 = (((~((53 ? -4114662562805787819 : (arr_0 [i_0] [i_1]))))));
                        arr_11 [10] [i_1] [i_2 + 1] [i_4 - 2] = (((((!(arr_6 [i_0] [i_1] [i_1] [i_1] [i_1])))) <= 31948));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_25 = ((0 ? (arr_9 [i_5 - 2] [i_1 + 1]) : 4191041229));
                        var_26 = ((5889248403704313970 * (arr_7 [i_5 - 2] [i_5 - 2] [i_2 + 1] [i_1 + 1] [i_1])));
                    }
                    for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        var_27 = -126;
                        var_28 = ((((260487214 == -27584) ? ((-(arr_5 [i_0] [i_1] [i_2] [i_6 + 1]))) : 10719)));
                        var_29 *= ((!((((arr_0 [i_2 + 1] [i_6 + 1]) << (((((arr_9 [i_0] [i_1]) ? 8939480261846049980 : 43027)) - 8939480261846049960)))))));
                        var_30 = (max(var_30, ((min(((+(((arr_2 [i_0] [i_0]) << (3659846587 - 3659846563))))), 2572)))));
                        arr_16 [i_0] [i_0] [i_0] [i_2 - 2] [i_2] [i_6] = -4896261372737067409;
                    }
                    var_31 = var_11;
                }
            }
        }
    }
    #pragma endscop
}
