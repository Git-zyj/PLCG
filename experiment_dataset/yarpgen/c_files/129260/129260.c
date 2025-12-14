/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += 45104;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] = (((!(arr_0 [i_0] [i_0 - 2]))));
                    arr_11 [i_1] = (-(((arr_4 [i_0 - 1] [i_0 + 2]) ? var_3 : (arr_4 [i_0 + 1] [i_0 - 1]))));
                }
            }
        }
    }
    var_11 = (max(((var_7 ? var_3 : var_0)), (var_8 * 0)));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                {
                    arr_20 [i_5] [i_3] [i_4] [i_5] = (min((max((arr_3 [i_5]), ((14199994018831171194 ? (arr_3 [i_5]) : (arr_4 [i_4] [19]))))), var_6));
                    var_12 = (min(var_12, (((-((9001907162811201650 & (arr_9 [i_3 + 3]))))))));
                    var_13 += (max((arr_9 [i_5]), (max(((max((arr_14 [i_5]), 1))), var_9))));
                    var_14 = var_4;
                    arr_21 [i_3 + 2] [i_5] [i_3] = (min(10937707460936597744, ((max(44075, (arr_17 [i_3] [i_3] [1]))))));
                }
            }
        }
    }
    #pragma endscop
}
