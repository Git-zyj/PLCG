/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (max(var_19, (arr_0 [i_0])));
        var_20 = (arr_1 [i_0] [i_0]);
        var_21 = (max(var_21, 2220357242));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_22 = (max(var_22, 2074610039));
        var_23 = (((((-((2220357256 ? var_9 : var_14))))) ? (arr_2 [3]) : (arr_2 [i_1 - 1])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_24 -= (23558 ? 2220357242 : 2220357256);

        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_25 = ((((((arr_6 [i_4] [11]) || (arr_10 [3] [i_3]))) ? (-4665614059493528269 || 2074610039) : 2074610040)));
                            var_26 = ((((2074610039 || ((((arr_7 [i_2] [i_5] [i_6 - 1]) ? (arr_7 [i_5] [i_4] [i_2]) : var_8))))) ? ((23558 * (4032 || 2074610039))) : (arr_9 [i_6 + 1] [i_3 - 1] [i_3 - 2])));
                        }
                    }
                }
            }
            var_27 = (max(var_27, (((((((arr_9 [i_3 - 1] [i_3 - 2] [i_2]) ? (arr_9 [i_2] [i_2] [i_3 - 1]) : (arr_7 [i_2] [6] [i_3 + 1])))) ? ((max((arr_14 [i_3] [i_3] [i_2]), (arr_8 [i_2] [i_3])))) : ((((!(((23558 ? (arr_12 [i_2]) : 1200123249))))))))))));
        }
        var_28 = (((((2074610055 ? (arr_6 [20] [6]) : ((-(arr_9 [i_2] [14] [i_2])))))) ? -10977 : ((-(arr_12 [i_2])))));
    }
    var_29 = ((var_1 ? var_17 : 19152));
    #pragma endscop
}
