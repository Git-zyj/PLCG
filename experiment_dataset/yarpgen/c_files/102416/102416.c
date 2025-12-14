/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_13 = (min((arr_8 [5] [i_2] [5] [i_0]), ((-(~var_7)))));
                        var_14 = ((-2147483632 ? -2147483632 : 4124739441));
                        var_15 = ((-(arr_7 [i_0] [7] [i_2] [i_1 - 1])));
                    }
                    for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_16 = ((var_7 ? (-2147483634 != 2147483631) : ((-2147483627 ? (!var_0) : ((-1451981964 ? 170227837 : var_7))))));
                        var_17 = (min((((!(((var_1 ? var_10 : -30957)))))), (min(var_11, (((4124739450 && (arr_6 [i_2]))))))));
                    }
                    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_18 = (min((((170227854 > (var_4 / var_0)))), (arr_13 [i_0] [i_0] [i_1] [i_2] [i_5] [i_5 + 1])));
                        var_19 = (min(2445507610, 67));
                        var_20 = (arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]);
                        var_21 = (arr_4 [i_1 - 1] [i_1 + 1] [i_5 - 1]);
                    }
                    var_22 ^= (min(((min(-24838, var_6))), (!-2418)));
                    var_23 &= (((((-((-(arr_15 [1] [i_0] [1] [4] [i_2])))))) ? ((((min(var_11, (arr_4 [i_1] [i_1] [i_1])))) ? (min(39005, 3565552794)) : (arr_16 [i_1 + 1] [i_2] [i_1 + 1]))) : ((((arr_8 [11] [i_2] [i_1 - 1] [i_2]) ? (arr_8 [i_0] [11] [i_1 - 1] [i_2]) : 26547)))));
                }
            }
        }
    }
    #pragma endscop
}
