/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((((-39 * 127) ? ((((var_8 ? (arr_6 [11] [11]) : var_1)))) : -50)))));
                            arr_8 [i_2] [i_3 + 1] = (min(((min(((max(var_10, -39))), var_13))), var_16));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_22 -= (min((var_11 < 117), ((((var_2 ? (arr_6 [i_4] [11]) : var_10)) - ((max(38, -79)))))));
                            var_23 = (((((max(var_4, var_9)))) ? (arr_13 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0 - 3] [i_5]) : (min((arr_1 [i_0 - 3] [i_0 + 1]), var_9))));
                            var_24 = (min(var_24, ((min(168, -1)))));
                        }
                    }
                }
                arr_15 [i_1] [0] = max((((~63) ? (~var_17) : (var_3 == var_18))), ((min((arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]), (arr_11 [i_0] [i_1] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_20 [i_6] = (((arr_3 [i_6 + 1] [i_1]) == (max(((((arr_16 [i_0 + 1] [i_0] [i_0 + 1] [i_0]) ? -63 : 2117))), (min(var_8, var_12))))));
                            var_25 = (max(var_25, (((var_9 ? var_9 : (5315651936217729933 * -1084817052))))));
                            var_26 = (arr_4 [i_7] [i_7 + 2] [i_7 - 1] [i_7 - 2]);
                            var_27 = (max(var_27, ((max((max(var_13, (arr_16 [i_6 + 1] [i_7 - 1] [i_6 + 1] [i_7 - 2]))), ((((var_10 ? (arr_17 [i_0 + 1] [i_0 - 1]) : (arr_3 [0] [i_6]))) / (((arr_14 [i_0] [i_7]) ? var_11 : var_9)))))))));
                            var_28 = ((((((arr_0 [i_6 - 1]) ? (arr_0 [i_6 + 2]) : var_10))) && (~var_12)));
                        }
                    }
                }
            }
        }
    }
    var_29 = var_10;
    #pragma endscop
}
