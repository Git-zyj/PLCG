/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [5] = (((min(-11051, ((11062 ? var_5 : var_11)))) / ((((arr_2 [i_0 - 2]) ? -11057 : 11079)))));
                var_19 *= ((-11051 + (((-127 - 1) + (max(3615473586, (-32767 - 1)))))));
                var_20 = 17479;

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    arr_9 [i_2] [i_1] [i_0] = (min((((var_6 ? 32765 : -6238501843401563161))), (((min((arr_7 [i_0]), -1538987111)) ^ (arr_1 [i_1] [i_1])))));
                    var_21 |= (((((577479703 ^ (arr_1 [i_0] [i_0])))) ? (((arr_2 [i_0]) ? (arr_4 [i_0 + 1] [i_0] [i_0]) : (arr_2 [i_0]))) : ((min((arr_4 [i_0 - 2] [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_22 -= ((127 < (arr_7 [i_0 - 2])));
                        var_23 -= (arr_5 [i_1] [i_2] [i_3]);
                        var_24 = (arr_7 [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_18 [i_1] [i_2 - 1] [i_0] [i_1] [i_0] &= ((!(arr_11 [i_4] [i_1] [i_1])));
                        var_25 = (max(var_25, 3187));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_21 [i_2] [i_0 - 2] = (arr_12 [i_0] [i_2] [i_1] [i_1] [i_0] [i_0]);
                        var_26 = (7005708164997860074 ? 43 : -11091);
                        arr_22 [i_0 - 1] [i_1] [i_1] [i_5] = ((!33) ? 3615473588 : (arr_4 [i_0] [i_2 + 2] [i_0 + 1]));
                        arr_23 [i_0] [21] [i_5] = (arr_0 [i_5]);
                    }
                }
                arr_24 [i_0 - 1] [i_1] [i_1] |= (min((((arr_17 [i_0] [i_0 - 2] [i_0 - 1] [i_0]) ? ((var_13 ? var_18 : -1652823088)) : (!var_1))), ((-((var_18 + (arr_3 [i_1])))))));
            }
        }
    }
    var_27 = 31;
    #pragma endscop
}
