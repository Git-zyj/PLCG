/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_17 *= ((~((max(146, 110)))));
                    arr_6 [8] [6] = (max(156, 2029644255));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_11 [i_0] [1] [i_1] [i_3] = var_3;
                    var_18 = ((!((98 <= (arr_3 [i_1 - 2])))));
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    arr_14 [i_4 - 3] [i_1] = var_5;
                    var_19 ^= (!var_15);
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_20 = var_12;
                            arr_20 [0] [i_0] [i_1 + 1] [i_6] |= var_2;
                            var_21 = (((var_2 <= var_12) % (var_2 & var_6)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 4; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 13;i_9 += 1)
            {
                {
                    var_22 ^= var_6;
                    var_23 ^= var_1;
                    arr_28 [i_7 + 1] [i_7] [i_7] [i_7 + 2] = ((var_8 & ((min((!var_6), (var_8 == 16976))))));
                    arr_29 [i_7] [i_8] [i_9 - 2] &= (max((((!((max(var_3, var_8)))))), 61300));
                    arr_30 [8] [i_9 - 2] = ((!(((-213065665 / (var_13 | 3170915447))))));
                }
            }
        }
    }
    var_24 *= (max((2 + 131), var_10));
    #pragma endscop
}
