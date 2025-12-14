/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 *= ((arr_0 [i_0] [i_0]) >= 21139);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (max((((!1) ? (var_4 + var_3) : (min((arr_5 [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0]))))), var_0));
                            var_13 = (max(var_13, 11637));
                        }
                    }
                }
            }
        }
    }
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((max(var_10, (min((arr_9 [i_6] [i_7 - 1] [i_6] [i_6]), (arr_11 [16]))))))));
                                var_16 = ((((1663878836933497080 ? ((var_8 ? (arr_20 [i_8]) : (arr_1 [i_7 - 1] [i_7 - 1]))) : ((var_6 ? var_8 : var_10)))) - ((var_7 ? (min(var_8, 55809)) : ((var_1 ? var_0 : (arr_4 [0] [i_4] [i_4])))))));
                                var_17 = ((((((!var_0) || (arr_0 [i_5] [i_5])))) - var_6));
                                var_18 -= ((min((arr_11 [10]), (arr_11 [8]))));
                            }
                        }
                    }
                }
                var_19 = ((((((max(var_1, var_9))) ? (arr_1 [i_4] [i_4]) : (arr_9 [15] [i_5] [i_5] [i_4]))) <= ((((!(((88 ? 0 : 60423)))))))));
                arr_26 [i_4] [i_4] = (arr_3 [i_4]);
            }
        }
    }
    #pragma endscop
}
