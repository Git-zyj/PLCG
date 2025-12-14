/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (min(((var_8 ? ((var_11 ? 1014 : var_6)) : ((var_3 ? var_5 : var_0)))), var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max((~var_6), ((~(max(-102, var_4))))));
                var_16 = var_11;
                var_17 = (((((((var_6 ? var_4 : var_10)) / (arr_3 [i_0])))) ? ((((max(var_7, (arr_3 [7])))) ? var_3 : ((((var_0 && (arr_3 [11]))))))) : ((((!(arr_0 [i_0])))))));
                var_18 = (min(((max(-4668651765673142476, 2251799813685247))), var_13));
            }
        }
    }
    var_19 = ((var_10 ? var_11 : (min(var_11, var_10))));

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] [1] = 2251799813685251;
        arr_9 [i_2] [i_2] = ((((((((var_6 ? (arr_7 [17]) : var_4))) ? var_12 : (max(var_9, 18444492273895866369))))) ? (min(((var_8 ? 6396526559973128690 : var_5)), var_12)) : (!-var_8)));
    }
    #pragma endscop
}
