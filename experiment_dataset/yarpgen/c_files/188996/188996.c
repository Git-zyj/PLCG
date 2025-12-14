/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = ((-((((!(arr_4 [i_0] [13] [4]))) ? var_14 : (((!(arr_2 [i_1]))))))));
                    arr_7 [11] [i_2] [i_2] [i_0] = var_1;
                    var_22 = (max(var_22, (((!((min(var_12, ((var_15 ? var_9 : 4095))))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_23 = (((arr_9 [i_4 + 2]) ? (((!(((var_10 ? var_2 : (arr_8 [1]))))))) : ((((((arr_0 [i_3]) - (arr_1 [i_3])))) ? ((-4101 ? (arr_3 [i_3 - 1] [16] [i_5]) : (arr_15 [11] [i_5] [i_4] [3]))) : (min(var_19, var_14))))));
                            var_24 &= ((-(((!((((arr_6 [10] [i_5] [i_5]) ? -4101 : var_3))))))));
                        }
                    }
                }
                arr_20 [i_3] [i_4] [9] = (arr_17 [i_4] [i_3 - 1]);
            }
        }
    }
    #pragma endscop
}
