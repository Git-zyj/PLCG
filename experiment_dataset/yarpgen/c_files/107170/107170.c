/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_10 &= ((((((!(((var_5 / (-32767 - 1)))))))) > (arr_1 [i_1 - 3])));
                var_11 = (min(((-32766 ? 32758 : 1)), var_7));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_12 = max((((arr_6 [i_2]) ? (arr_6 [i_2]) : 24159)), ((-60 ? 32767 : var_2)));
        arr_8 [i_2] = var_2;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_13 = (min(var_13, (((-((+(((arr_11 [8] [i_3]) ? var_6 : var_3)))))))));
        arr_12 [i_3] = ((0 ? (max((arr_9 [i_3]), (arr_11 [i_3] [i_3]))) : ((((!(arr_10 [i_3])))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = (((1 ? 449080707 : var_5)));
        var_14 = (min(var_14, (((((!((((arr_11 [16] [i_4]) ? var_3 : var_4))))) ? (((((arr_16 [i_4]) || var_7)) ? var_2 : (((arr_10 [i_4]) ? var_7 : var_5)))) : ((((((arr_6 [1]) | var_4))) ? (!1) : (((arr_14 [i_4]) - 65533)))))))));
        var_15 |= (max((((var_3 && ((min(449080701, -6285241939158900278)))))), ((-449080706 ? 17598241778446097816 : -449080703))));
        var_16 = 1;
    }
    #pragma endscop
}
