/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = var_8;
                    arr_9 [i_0] [i_0] [i_2] = ((var_0 ? (arr_1 [i_2]) : 38));
                    var_21 = (max((((((-(arr_7 [i_0] [10])))) ? var_13 : 612193799)), (((((var_3 ? var_5 : var_3)) / (var_9 | var_4))))));
                    var_22 = (min((max(63, 18446744073709551615)), ((((arr_0 [1]) ? 1364610100572698340 : (arr_0 [i_1]))))));
                    var_23 -= (arr_3 [i_0] [1] [i_2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                var_24 = 1364610100572698340;
                arr_16 [i_3] = arr_14 [i_3];
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_25 = (arr_17 [i_6] [i_5] [i_4] [i_3]);
                            var_26 = (max(var_26, ((((arr_15 [i_5 - 2] [i_4] [i_5 - 1]) ? (((arr_15 [i_5 + 2] [i_5 + 2] [8]) ? (arr_15 [i_5 + 2] [i_5 + 2] [i_5]) : 1364610100572698340)) : ((((arr_15 [i_5 + 1] [i_4] [i_5 + 2]) ? var_5 : var_7))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
