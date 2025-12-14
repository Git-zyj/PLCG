/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0]) ? ((-3188794791976280503 ? (arr_0 [i_0]) : -3188794791976280503)) : var_8));
        arr_2 [i_0] [i_0] |= ((-((var_0 ? -3188794791976280503 : var_2))));
        var_18 = (((arr_0 [i_0]) >> (((arr_0 [i_0]) - 876058998))));
    }

    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] = (((3188794791976280503 % -3188794791976280524) ? 1 : (((-3188794791976280486 != (arr_3 [i_1 + 3] [i_1 - 1]))))));
        var_19 = ((((((arr_3 [i_1 + 3] [i_1 + 3]) / ((((arr_0 [i_1 + 3]) ? 65535 : -1599889477)))))) ? (((((((arr_1 [i_1]) ? -5610 : 0))) ? (max(var_1, var_9)) : (var_0 || 5428865513616087686)))) : ((-1 ? 3188794791976280486 : var_5))));
        arr_6 [i_1] = -44;
        var_20 = ((1 ? (((var_2 ? 2867172011 : (((max(var_9, -4385))))))) : (((11475158249866990995 / var_2) * 44))));
    }
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2 + 1] = (arr_8 [i_2]);
        arr_10 [5] = ((((var_4 ? (arr_0 [i_2 - 1]) : (arr_0 [i_2 - 3]))) - var_2));

        /* vectorizable */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_21 = (((((3202170126 ? (arr_4 [i_6]) : (arr_11 [i_3] [i_3])))) ? (((!(arr_20 [2])))) : (((1427795285 < (arr_18 [11] [i_4] [i_5]))))));
                            var_22 = (((!-3188794791976280505) * -1082263168510661083));
                            arr_21 [i_6] = (arr_13 [i_2 - 3] [i_2 + 1]);
                        }
                    }
                }
            }
            var_23 = (((arr_3 [i_2 - 2] [i_2 - 2]) - ((((!(arr_4 [12])))))));
            arr_22 [i_2] [i_3 + 1] = ((var_12 ? var_12 : -1821490633534574960));
        }
    }
    #pragma endscop
}
