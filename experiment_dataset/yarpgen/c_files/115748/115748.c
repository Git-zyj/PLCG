/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0 + 4] [i_0] = (-7 & -1);
        arr_3 [i_0] = (((((max((arr_1 [0] [i_0]), var_4)) + (arr_0 [i_0 + 3]))) > (((var_0 >> ((((-(arr_1 [i_0] [i_0]))) - 10936919127817418231)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_15 = (max(var_15, ((max((min(var_11, (max(486089560, 0)))), (((0 | (arr_10 [i_0 + 3] [i_0 + 3])))))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_8 [i_0] [i_0] [i_2] [i_3]);
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_16 -= (max(((-(arr_17 [i_4 - 1]))), (243563804 & 0)));
        var_17 = var_2;
    }
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_18 -= (((~var_5) ? ((((arr_6 [i_7] [i_5 + 2] [i_7]) & var_11))) : ((0 ? var_0 : (arr_6 [i_5] [i_5 - 1] [i_6])))));
                    var_19 = (max(var_19, (!-62)));
                    arr_26 [8] [i_5 + 1] [i_5] = (4294967295 - -486089561);
                }
            }
        }
        var_20 = var_10;
        arr_27 [i_5] = ((((0 ? 127 : 9)) >= (arr_11 [i_5] [18] [6] [i_5] [7] [16])));
        var_21 = (((((+(((arr_9 [i_5] [i_5]) ? 2233785415175766016 : 3679394839458928385))))) ? var_10 : (((0 | ((((arr_13 [i_5] [i_5] [i_5]) >= (arr_0 [i_5 - 3])))))))));
    }
    var_22 = (var_7 <= var_7);
    #pragma endscop
}
