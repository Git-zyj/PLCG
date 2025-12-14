/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = ((-((5543719476842496002 & (~var_9)))));
        arr_3 [i_0] = (min(((var_1 + (((5805058974104022981 ? 158 : 50822))))), var_11));
        var_19 = 458752;
        var_20 ^= (min(((((var_13 + 2147483647) >> (((arr_1 [i_0] [i_0]) - 5328407405693413223))))), (((arr_0 [i_0] [i_0]) | (arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = var_12;
        var_21 = (((arr_4 [i_1] [i_1]) ? var_7 : ((((arr_0 [i_1] [i_1]) / (arr_2 [i_1]))))));
    }
    var_22 = ((((var_12 ? (((1 ? 89 : var_16))) : (var_2 >> 1)))) ? ((((!(((var_17 ? var_12 : var_10))))))) : var_15);
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2] = min((((arr_9 [i_3]) ? (arr_9 [i_3]) : 5936748047893461885)), (((max(3054214036632196552, (arr_12 [i_2 + 2] [i_2]))) >> ((((arr_12 [i_2 - 1] [i_2 - 1]) && (arr_10 [i_3] [i_3] [i_3])))))));
                var_23 = (-((~(max(var_7, var_15)))));
            }
        }
    }
    #pragma endscop
}
