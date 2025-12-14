/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_20 &= (var_18 ? (arr_3 [i_2 + 3] [i_2 + 2] [i_2 + 4]) : (((!(arr_3 [i_2] [i_2 + 3] [16])))));
                    arr_6 [16] [i_1] [i_1] [15] = ((!((max(987458995, (min(var_18, var_14)))))));
                }
                for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, (((!((min(9223354444668731392, 65530))))))));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_22 -= (((233 > 22) ? ((((255 < ((23 ? 46 : 220)))))) : ((~(min(48661, var_12))))));
                        var_23 = ((((((23 - (arr_3 [i_3 + 4] [i_1] [i_0])))) ? (arr_8 [i_3]) : 47519)));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_24 = (max(var_24, ((min((((23 & 22) ? var_2 : (((arr_2 [i_0] [i_0 - 2]) & 127)))), (((~(~3151115649)))))))));
                        var_25 = (arr_16 [i_0] [3] [i_0 + 1] [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_26 = (max(var_26, 127));
                        arr_20 [17] [i_1] [i_6] = 127;
                    }

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_27 = (!(((((max(23, (arr_17 [i_0] [i_0])))) + (648933824 <= 233)))));
                        arr_24 [i_7] [i_1] [i_1] [i_3] [i_1] [i_0] = (((~74567323) ? ((max(229, (arr_17 [i_0] [18])))) : ((-4337 ? 123 : (-2147483647 - 1)))));
                        var_28 = ((((((1 ? (-2147483647 - 1) : 55890))) ? (min(15172875943595117049, var_10)) : ((max(var_8, var_17))))) * (((-(arr_7 [i_0 - 3] [i_3] [16])))));
                        arr_25 [2] [i_1] &= (max((max((((247 ? (arr_12 [i_3]) : 232))), ((3615 ? var_9 : 1)))), (((-(arr_13 [i_3 - 1] [i_1 + 3] [i_0 + 2]))))));
                        var_29 = (min((((~var_0) ? (max(var_12, 74567323)) : (var_5 ^ var_11))), 3273868130114434585));
                    }
                    var_30 = (arr_16 [i_1] [17] [i_1] [17]);
                }
                var_31 = (max((1263875162 & 2147483633), (((((~125) + 2147483647)) >> (((arr_13 [i_1 + 3] [i_1] [i_1]) + 1713037749))))));
                var_32 = ((-(arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 1])));
                arr_26 [11] = (((max((arr_4 [i_1 + 3] [i_1 + 2] [i_1]), (((arr_2 [i_1] [i_0]) / (arr_22 [i_0] [i_1] [i_0]))))) != -1263875150));
                var_33 -= ((var_15 ? (!-1984046418) : (max(234881024, (((arr_11 [i_1] [i_0 - 1] [i_1 + 1] [i_0 - 1] [i_0]) ? (arr_3 [i_0] [i_1] [i_1]) : 8998403161718784))))));
            }
        }
    }
    var_34 = (((549755809792 - 4060086272) ? ((((!((min(var_4, 3522890023))))))) : var_7));
    #pragma endscop
}
