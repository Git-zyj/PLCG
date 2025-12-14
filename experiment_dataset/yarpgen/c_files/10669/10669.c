/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= -24;
    var_19 -= var_9;
    var_20 = (min(var_20, var_3));
    var_21 = (max(((max(var_7, (var_9 && 14955)))), 176));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = var_15;

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_22 = (min(var_22, (((232 * (arr_1 [i_2] [i_2]))))));
                        arr_12 [i_0] [i_0] [i_3] = ((!(arr_4 [i_0] [i_2] [i_3])));
                        var_23 = -24536;
                        var_24 |= (min((max((max((arr_2 [i_0] [i_0]), (arr_4 [i_0] [i_2] [i_1]))), -74)), ((((arr_1 [i_2] [i_2]) ? 231 : (arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_4] [i_4] = 127;
                            var_25 = (((((var_9 ? var_9 : (arr_11 [i_5 - 2] [i_4] [i_1] [18] [i_1] [18])))) ? (arr_13 [i_5 - 2] [i_5 - 3] [i_5] [i_5 - 1] [i_5] [i_5]) : (arr_14 [i_5 + 1] [i_5 - 1] [i_5 - 3] [i_5 + 1] [i_5 - 1])));
                        }
                        for (int i_6 = 3; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_26 += (arr_4 [1] [i_2] [i_2]);
                            var_27 ^= (arr_18 [1] [1] [i_2] [i_1] [3]);
                            var_28 = (arr_13 [i_0] [i_1] [i_1] [i_2] [i_0] [11]);
                        }
                        var_29 = 1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
