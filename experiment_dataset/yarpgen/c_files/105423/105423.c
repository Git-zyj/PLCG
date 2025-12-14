/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] = (min((max(1152921504602652672, (arr_9 [i_3 + 1] [i_3] [10] [i_3 + 1]))), ((((var_3 ^ var_7) ? ((var_11 ^ (arr_9 [i_0] [i_1] [1] [i_3]))) : ((var_13 ? (arr_4 [i_0] [i_3]) : var_15)))))));
                            arr_11 [i_0] [5] [i_0] = ((((((arr_1 [i_3]) ? var_12 : (arr_3 [i_0])))) ^ ((((((var_13 && (arr_7 [i_0] [i_1] [i_0] [i_3])))) - 65535)))));
                            var_19 = (min(var_19, (((var_18 - (arr_2 [i_2 - 1]))))));
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    var_20 = ((((((((var_2 ? var_10 : 31239))) ? 3032267719 : (13379 ^ 1386077857)))) ? (max(var_18, 4180930585998332576)) : (((1152921504602652678 ? (max((arr_2 [i_1]), 11)) : 1)))));
                    var_21 = ((var_17 && ((max(var_10, (min(1152921504602652660, var_12)))))));
                }
            }
        }
    }
    var_22 = (min(var_13, (min(var_7, (2047 - var_9)))));
    var_23 += var_10;
    #pragma endscop
}
