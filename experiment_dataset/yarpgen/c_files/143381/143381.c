/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((min(var_2, var_3)), (((max(var_15, 127))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((arr_4 [3] [8]) && ((((arr_3 [i_0] [i_1] [i_1]) ? (arr_5 [i_1]) : (((arr_2 [5]) ? (arr_1 [i_1]) : var_9)))))));
                var_18 = (((((((1529438538 ? 4142 : 4135)) * 1))) ? ((max((arr_2 [i_1]), (arr_2 [i_1])))) : (((((var_6 ? var_3 : (arr_0 [i_1] [i_1])))) ? ((max(var_6, var_9))) : (-532412587 || var_8)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_19 = (arr_11 [i_0] [i_0] [i_0] [i_0]);
                            var_20 -= (max(((min(var_14, var_11))), 4398046511103));
                        }
                    }
                }
                var_21 = ((var_11 ? ((-(arr_1 [i_0]))) : ((var_6 ? (arr_1 [2]) : (arr_1 [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                {
                    var_22 -= (((((arr_20 [0] [i_6] [i_6 + 1]) < (((!(arr_20 [14] [16] [4])))))) ? (arr_15 [i_6 - 1] [1]) : var_7));
                    var_23 = (((!-3249) ? ((-94 ? 48 : 1)) : (!77)));
                }
            }
        }
    }
    var_24 = ((-18446739675663040481 ? (((((var_13 ? 1006784583 : var_8))) ? var_8 : var_0)) : ((((!((max(var_4, 4142)))))))));
    #pragma endscop
}
