/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (max(var_11, ((min((((((3279 ? 0 : -1945295096))) ? 262143 : (min(var_6, var_1)))), var_2)))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 2147483638;
        var_12 = 0;
        var_13 = var_6;
        var_14 = ((((((arr_0 [i_0 - 1]) & var_3))) ? (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))) : (arr_0 [i_0 + 1])));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_15 = (!-25513);
        var_16 = (((((((6 ? -24931 : 61))))) ^ var_1));
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_17 = (min(((var_7 ? (arr_7 [i_2 - 2] [i_2]) : var_9)), 65253));
        var_18 = ((165 ? 2147483620 : 22));
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_19 |= ((-(((((-26 || (arr_9 [i_3])))) >> ((((var_9 ? var_6 : -1945295093)) + 42))))));
        var_20 = (min(var_20, (!var_7)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                {
                    var_21 = (max(var_21, (((((min(16256, 79))) ? var_5 : (arr_11 [i_5]))))));

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_22 *= -var_0;
                            var_23 = (arr_17 [i_3] [i_4] [i_5 - 1] [i_6]);
                        }
                        for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            var_24 |= (((arr_20 [i_3] [i_3] [i_3 + 2] [i_6] [i_8]) ? (arr_7 [i_6] [i_4]) : (var_2 & var_5)));
                            var_25 = (min(var_25, ((((arr_20 [i_4] [i_4] [i_5 + 1] [i_8 + 1] [i_8 + 1]) != (arr_20 [i_3] [i_4] [i_5] [i_8 + 1] [i_4]))))));
                        }
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            var_26 = ((!(((var_9 ? var_0 : 80)))));
                            var_27 = (max(var_27, (((-1 ? -37049925916136515 : 12377028961593757348)))));
                            var_28 = ((4294967282 ? 119 : (arr_11 [i_3 + 2])));
                        }
                        var_29 = (((arr_11 [i_3]) != var_2));
                        var_30 |= -20;
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_31 |= (((((12828 ? -19 : 14045))) && (arr_11 [i_3 + 2])));
                            var_32 = (((-3715854817442568522 && var_4) ? -1 : 0));
                            arr_34 [i_4] |= (((((arr_21 [i_3] [i_4] [i_5] [i_10] [i_3] [i_5]) != var_9)) ? (arr_26 [i_3]) : (arr_18 [i_3 + 2] [i_4] [i_4] [i_4] [i_4] [i_11])));
                            var_33 = (((arr_16 [i_3 - 2] [i_5 + 1] [i_5 + 2]) < (arr_16 [i_3 + 2] [i_5 + 1] [i_5 + 2])));
                        }
                        var_34 *= var_0;
                    }
                    var_35 = (max((((arr_22 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 + 2] [i_3 - 2] [i_3]) | (arr_22 [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3] [i_3 + 2]))), (min(var_1, var_6))));
                }
            }
        }
        arr_35 [i_3] = ((((((max((arr_19 [i_3] [i_3] [i_3] [i_3]), 63))) & (~17))) | var_8));
        var_36 |= ((((max((arr_27 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3]), (arr_27 [i_3] [i_3] [i_3 + 2] [i_3 + 1] [i_3] [i_3])))) ? (((arr_22 [i_3] [i_3 + 2] [i_3] [i_3] [i_3] [i_3]) / (((var_0 ? var_6 : (arr_26 [i_3])))))) : ((min(185, (arr_23 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 2] [i_3] [i_3 - 2]))))));
    }
    var_37 = (((var_9 ? (2582947381 ^ var_3) : (~-2147483621))));
    #pragma endscop
}
