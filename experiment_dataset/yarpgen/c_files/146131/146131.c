/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 += ((((((arr_3 [i_2]) ? (arr_3 [i_1]) : (arr_3 [i_0])))) ? (max(0, 18446744073709551615)) : ((min(var_14, var_11)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = ((~(((arr_4 [i_4] [i_4] [i_4]) ? (arr_4 [i_0] [i_3] [i_4]) : var_9))));
                                var_17 |= ((((((arr_4 [i_2] [i_2] [i_1]) ? (((var_5 >> (var_13 - 1378011797)))) : var_14))) ? (max(1186463635, ((var_5 ? var_7 : (arr_4 [i_0] [i_3] [i_4]))))) : ((min(var_6, 4558564334159639628)))));
                                var_18 = 57;
                                var_19 = ((!((min(((16609558177907210754 ? var_12 : var_11)), (((var_8 ? var_8 : (arr_9 [i_0] [i_0] [i_2] [8] [i_0] [i_0] [i_0])))))))));
                            }
                        }
                    }
                    var_20 = ((((var_7 ? 14009667197596057635 : 874811854)) * ((((((var_10 ? (arr_4 [i_2] [1] [1]) : var_11))) ? (((arr_9 [i_0] [i_1] [i_2] [i_1] [i_2] [i_2] [i_2]) >> (210 - 183))) : (((arr_11 [i_2] [i_2] [7] [i_0] [i_0] [i_0] [i_0]) ? -855273034 : var_7)))))));
                }
            }
        }
    }
    var_21 += (!var_5);
    #pragma endscop
}
