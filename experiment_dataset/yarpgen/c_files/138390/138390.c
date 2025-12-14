/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (max(-1, -32758));
                var_18 = (max((arr_0 [i_0] [i_1]), (((!(arr_1 [i_0] [i_0]))))));
                var_19 = var_0;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_20 = arr_0 [i_3 + 1] [i_3 + 1];
                    var_21 = (((-((min(1, (arr_12 [i_3] [i_3] [4] [i_4])))))));
                    var_22 = (max(var_22, ((((min(-117, (41319 || var_10)))) ? 41319 : (((var_10 | var_12) ? 0 : (arr_5 [i_3 + 1])))))));
                    var_23 = (arr_0 [i_2] [i_2]);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_24 = (((arr_7 [i_3] [i_3 + 1] [i_3]) ? (arr_3 [i_3 + 1] [i_3 - 1] [i_5]) : ((-117 ? var_12 : 13162568112558546154))));
                                var_25 = (min(var_25, var_4));
                                var_26 |= (((arr_8 [i_7] [0] [i_7]) > (arr_17 [i_3 + 1] [i_3 + 1] [i_2] [i_3] [i_3] [i_2])));
                                var_27 |= (arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1]);
                                var_28 = (1 + 5284175961151005462);
                            }
                        }
                    }
                    var_29 = (max(var_29, var_15));
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                {
                    var_30 = (arr_15 [i_3 + 1] [i_3] [i_3] [i_3]);
                    var_31 = (((arr_23 [i_3 + 1]) ? var_7 : (((arr_23 [i_3 + 1]) | (arr_23 [i_3 - 1])))));
                }
                var_32 = max((min((((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_18 [i_2] [i_2] [11] [i_2] [i_3]) : -1)), (((var_3 ? var_7 : var_13))))), var_5);
            }
        }
    }
    var_33 = (((((var_10 ? var_0 : ((max(1, 0)))))) ? var_15 : ((((((5284175961151005461 ? 4294967295 : -32761))) > var_14)))));
    var_34 = (min((((((var_3 ? var_2 : var_8))) ? var_10 : (max(var_10, 14510454559043372813)))), 12487927362757105410));
    #pragma endscop
}
