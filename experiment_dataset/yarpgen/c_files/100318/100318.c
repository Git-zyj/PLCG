/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((((max(var_2, ((5 ? var_18 : var_10))))) ? var_15 : var_0));
    var_21 = min(16, (~0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (max(34795, (max(5, (arr_1 [i_0] [i_0 - 1])))));
                var_22 = ((8 ? -16 : 7859));
                arr_5 [1] [i_0] [i_1] = ((-((min((arr_0 [i_0]), (arr_0 [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_2] = ((((max(((max((arr_3 [i_2] [i_2]), 1))), (arr_1 [i_3] [i_3])))) | (arr_10 [14])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_23 = (+(((((1 ? (arr_2 [i_3] [0] [i_3]) : (arr_2 [i_3] [i_4] [i_3])))) ? ((var_0 ? (arr_10 [i_5]) : (arr_9 [i_5] [i_4]))) : (arr_13 [1] [1] [2] [i_5 - 2]))));
                            var_24 = (((~7846) ^ (max((arr_14 [5] [i_3 + 3] [i_3] [i_3 + 1] [i_5 + 2]), -15888))));
                            arr_16 [1] [6] [i_3] [6] [6] = (min(((max(1, (((arr_7 [i_4]) ? 57676 : (arr_6 [i_2])))))), ((+(((arr_6 [i_4]) ? (arr_15 [i_5] [i_2] [i_4] [i_2] [i_2] [i_5 - 2]) : var_2))))));
                            var_25 += ((~(((((arr_6 [9]) == var_9)) ? 14336 : 1))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
