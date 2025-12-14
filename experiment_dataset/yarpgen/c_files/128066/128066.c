/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((-var_9 ? (min(((var_3 ? var_12 : var_3)), (1 >= 9223372036854775807))) : (max((var_13 <= var_9), var_15)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (arr_7 [i_3])));
                                arr_13 [i_1] [i_0] [i_3] [i_4] = (((((arr_5 [i_3 - 1] [i_0 - 2]) ? (arr_2 [i_3 - 1]) : (arr_2 [i_3 - 1])))) ? ((((max(25499, -1))) ? (arr_10 [6] [i_1] [i_1] [i_1]) : (arr_11 [i_0] [i_3 - 1] [i_2] [i_3 - 1] [i_4]))) : ((((arr_6 [i_1] [i_1] [i_3 - 1] [i_4]) ? 0 : (max(1452878322, (arr_9 [i_1 - 3] [i_2] [4] [i_4])))))));
                                var_20 = var_11;
                            }
                        }
                    }
                    var_21 = (min(var_21, (arr_3 [i_0] [i_2])));
                }
            }
        }
    }
    var_22 &= ((!2147483642) ? -21 : ((-1524617222 * (max(624382436, var_2)))));
    var_23 -= var_9;
    #pragma endscop
}
