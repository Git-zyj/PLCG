/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((21424 ? 11596 : 21451)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [20] [i_1] [i_1] = (arr_4 [i_0] [i_1]);
                arr_7 [i_0] = 1800838394902823504;
                arr_8 [17] [15] = ((5350 ? -21456 : 1293407933));
                var_16 = ((!((max(0, -8100186247442003679)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_17 = -2450523767452905973;
                arr_14 [i_3] &= ((((((arr_3 [i_2 + 4]) ? (arr_3 [i_2 + 2]) : (arr_3 [i_2 + 2])))) ? (arr_13 [1]) : (arr_2 [i_2 + 3])));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_20 [i_2] = (((0 ? 595486572 : 21451)));
                            var_18 = (arr_5 [i_2 + 2] [i_2]);
                            var_19 = ((((((arr_5 [i_2] [i_2]) ? (arr_16 [i_2 + 2] [i_2 - 3] [i_2 + 4] [i_2 + 4]) : (arr_4 [i_2 + 1] [i_5])))) ? (((arr_2 [i_2]) + (max((arr_18 [i_2] [i_3] [i_4] [7]), -21461)))) : 914277224));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
