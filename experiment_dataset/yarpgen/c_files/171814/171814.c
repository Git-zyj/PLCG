/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (arr_0 [i_0])));
                var_14 = (((+(((arr_1 [0] [0]) ? (arr_1 [i_0] [i_1]) : 11651)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_15 += ((((min(((-(arr_1 [1] [i_1]))), ((~(arr_2 [i_0])))))) % (max((arr_0 [0]), (arr_10 [i_1] [i_2])))));
                            arr_11 [4] [4] [i_2] [2] = ((((!(((53882 ? (arr_6 [i_1] [i_2]) : (arr_9 [i_0] [i_1] [i_2] [i_2])))))) ? 37179 : (((arr_9 [i_3] [i_1] [i_1] [i_0]) / (arr_9 [i_0] [i_0] [i_0] [i_3])))));
                        }
                    }
                }
                var_16 &= ((!((max(3017248906282635162, (arr_4 [i_1]))))));
            }
        }
    }
    var_17 = (max(-3473919477231743489, var_10));
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_18 = (((~4294967295) * (var_11 * -3017248906282635162)));
                    var_19 = (min(var_19, (max((arr_13 [i_4 - 1] [i_4 + 1]), (max((((arr_14 [i_4]) ? 6703 : var_10)), 41002))))));
                    var_20 = (arr_16 [i_4 - 1] [i_4 - 1] [18] [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
