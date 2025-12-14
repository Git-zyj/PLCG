/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = ((!(((-1 ? -18 : var_9)))));
                arr_5 [i_1] [i_0] = (((arr_3 [i_0 + 2] [i_1]) ? (((!(arr_1 [i_0 + 1])))) : (((var_4 >= (arr_4 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 += (arr_4 [i_1]);
                            var_14 *= ((((min(225, 251))) ? 213 : (((arr_0 [i_2 + 1] [i_0 + 2]) ? (arr_0 [i_2 + 1] [i_0 + 2]) : (arr_0 [i_2 + 1] [i_0 + 2])))));
                            var_15 += (arr_3 [i_1] [i_1]);
                            var_16 = var_7;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_17 = (!238);
                    var_18 = (208 || var_0);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                arr_21 [i_5] [i_5] [i_5] &= 16;
                var_19 = (max(var_19, 4));
                arr_22 [i_5] [i_5] = (((((max(253, (arr_20 [i_6]))) ? -8875331217009843147 : (1822082145007317415 + var_10)))));
            }
        }
    }
    var_20 = var_1;
    var_21 ^= (max((max(var_2, var_0)), -2090195198));
    var_22 = var_10;
    #pragma endscop
}
