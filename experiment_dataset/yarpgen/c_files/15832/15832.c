/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 |= 7765359983429422377;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                var_19 += ((((((10681384090280129238 ? var_9 : var_7)) ? (((((arr_2 [i_4]) || var_3)))) : 12680607573126239925))));
                                var_20 = ((((min((~1), (((arr_13 [i_0] [i_1] [i_1] [i_1] [i_4] [i_1]) ? (arr_15 [i_0] [1] [i_0] [i_0] [1] [i_0] [i_0]) : var_11))))) ? (arr_8 [i_0] [i_1] [i_2 - 1] [i_0]) : (((((max((arr_7 [i_0] [i_0] [i_0] [i_3]), 1))) != (arr_10 [i_3] [i_3] [i_3] [i_3]))))));
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                var_21 &= ((!(arr_17 [i_1] [i_2])));
                                arr_18 [i_0] [i_1] [i_0] [i_0] [i_1] [i_5] [i_1] = (min((max((arr_10 [12] [12] [1] [12]), (arr_7 [i_0] [i_1] [i_2] [i_0]))), ((min(81, (arr_14 [i_0] [i_0] [i_2] [i_3] [i_2 - 2] [i_2] [i_2]))))));
                                var_22 -= ((((var_16 ? var_16 : (max(var_7, -26)))) | ((10643964551503227985 ? 268435455 : 9223372036854775797))));
                                var_23 = (max(var_23, 7802779522206323620));
                                var_24 *= (arr_14 [i_0] [i_1] [i_2] [i_0] [i_0] [i_3] [i_5]);
                            }
                            arr_19 [i_0] [15] [i_0] = ((+(((((arr_0 [i_0] [i_0]) ? (arr_6 [i_0] [i_1] [i_2 + 2]) : -9223372036854775798)) + (arr_11 [i_3] [i_3] [i_0] [i_0] [0])))));
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(((min(254, var_12))), 28546));
    var_26 = var_16;
    #pragma endscop
}
