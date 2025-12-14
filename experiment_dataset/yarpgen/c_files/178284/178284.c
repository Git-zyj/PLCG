/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((!(((~(!134217727))))));
        arr_3 [i_0] &= (max((arr_1 [i_0]), ((min((arr_0 [i_0] [i_0]), var_17)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_20 = ((((min((var_17 - var_19), var_11))) ? 32740 : (arr_7 [i_3 + 4] [i_3 + 2] [i_3 + 2])));
                        var_21 = max(((max(9223372036854775797, var_10))), (arr_7 [i_3 + 1] [i_2] [i_1]));
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        var_22 = ((~(((((var_2 ? 7132 : (arr_9 [i_4 + 2] [i_2] [i_1] [i_1] [i_0])))) ? (((var_5 ? var_8 : 557866731))) : ((var_3 ? -26098 : -4755955035750043015))))));
                        var_23 = (min(var_23, ((((arr_9 [i_4 - 1] [i_2] [i_2] [i_1] [i_0]) || 4755955035750043019)))));
                    }
                    arr_12 [i_0] [i_0] [i_1] [i_2] = max(31, (((5 || (arr_7 [i_0] [i_0] [i_0])))));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_24 = (arr_5 [i_0] [i_2]);
                        arr_15 [i_0] [i_1] [i_2] = (((!var_6) || ((max(51262, (min(-26102, var_5)))))));
                        arr_16 [i_0] [i_1] [i_2] [i_5] [i_5] = 18446744073709551607;
                        arr_17 [i_5] [i_2] [i_2] [i_1] [i_0] = (min(1, (!58662)));
                    }
                    var_25 = (((min(var_2, ((max(var_2, (arr_1 [i_2])))))) != (((((1233745171 ? 167 : 127)) >> (((arr_1 [i_2]) - 22651)))))));
                    var_26 = (arr_0 [i_2] [i_0]);
                }
            }
        }
        var_27 = var_17;
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] [i_6] = ((((0 ? 65525 : (arr_4 [i_6] [i_6])))) / 618308652);
        var_28 = ((-4755955035750043008 ? ((min(32737, 167))) : ((min(0, (!var_7))))));
        var_29 = ((((((~var_2) >> (((arr_18 [i_6] [i_6]) ? (arr_4 [i_6] [i_6]) : var_5))))) ? ((1956996621 ? ((188 ? var_17 : 4755955035750043025)) : (min(-8121333140002500416, 2132812152)))) : -0));
        arr_21 [i_6] |= -469611327;
    }
    var_30 -= ((!(((var_0 ? var_12 : 1)))));
    var_31 = var_18;
    #pragma endscop
}
