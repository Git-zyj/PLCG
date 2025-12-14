/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((222 << (((174 / var_11) << ((((max(-32227, 81))) - 78))))));
    var_13 = (((((((-32230 ? -8352770813825727258 : var_3)) / (max(81, var_5))))) ? (18446744073709551615 || var_5) : var_2));
    var_14 = (((((((26 ? -122 : var_9))) || var_5)) ? var_3 : (((!(1492198722 || 2802768571))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (((!((max(var_1, var_0))))));

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        arr_11 [i_1] [5] [i_1] [5] = (12119 <= 24);
                        var_15 = (max(var_15, 6));
                        arr_12 [1] [1] [i_2] [i_2 + 2] [i_1] = (((1 && var_11) || (((var_0 ? 67108863 : var_9)))));
                        arr_13 [i_2] [i_2 - 3] [i_1] [i_2] = (((95 ? var_5 : (arr_0 [i_1]))));
                    }
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        var_16 = (((min((arr_5 [6]), -25))));
                        arr_16 [i_1] [i_1] [i_4 + 2] [i_4] = (((((((148602520 << (14562 - 14536)))) * 8960437768546266900)) * ((max((max(-1, var_5)), (((21451 <= (arr_10 [i_0 + 1] [i_0] [i_0 + 3] [i_0 + 1])))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
