/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = ((306308339 ? ((max(var_7, ((var_2 ? 23 : (arr_0 [i_2])))))) : (min((arr_8 [i_0] [i_1] [i_2 - 2]), 306308361))));
                    var_16 = -306308339;

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_17 = (min(-9093, (min((((var_3 ? (arr_4 [i_0] [i_1]) : (arr_0 [i_0])))), var_11))));
                        var_18 = ((306308339 > ((((arr_9 [i_0] [i_1] [i_2] [i_3] [i_1]) ? (-2039371003 - -306308314) : ((-306308339 ? 306308339 : 37409)))))));
                        var_19 = (~-306308339);
                        var_20 -= (var_6 % 306308346);
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_21 = (min(var_21, var_0));
                        var_22 -= 8611;
                        var_23 = (((37409 ? 306308339 : (arr_2 [i_1]))) & ((((arr_3 [i_1]) || (arr_9 [i_0] [1] [i_0] [i_0] [i_2])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_24 = ((-306308343 / -306308348) / -1037150560);
                        var_25 = (((arr_3 [i_1]) ? var_14 : -1291832368));
                        var_26 *= (var_10 < 1);
                    }
                }
            }
        }
    }
    var_27 = 306308342;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            {
                var_28 = 3237742731625120168;
                var_29 = 474754206;
                var_30 = (((((arr_23 [i_7]) || (((1 - (arr_9 [i_6] [i_6] [12] [i_7 + 1] [i_7 - 1])))))) ? (arr_10 [i_6] [i_7 + 1]) : ((((!(arr_11 [1] [i_6] [i_7] [i_7])))))));
            }
        }
    }
    #pragma endscop
}
