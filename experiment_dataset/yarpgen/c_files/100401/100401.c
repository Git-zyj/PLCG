/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = -22530;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 += (min(((7687 ^ (arr_3 [13]))), 12));
                            var_14 += (~var_4);
                            arr_11 [i_0] [i_0] [i_0] [i_0] [1] = ((((((1744936664 <= (arr_4 [i_0])))) == (arr_9 [i_0] [11] [11] [i_3]))) ? (((var_2 * 41887) & (min((arr_7 [i_0] [i_2]), 178)))) : (min(-27218, (var_2 + -451))));
                            arr_12 [i_0] [i_1] [i_2] = ((((((var_4 ? var_8 : 0)))) ? var_4 : ((65532 ? (((arr_0 [3] [3]) ? var_5 : (arr_1 [i_0]))) : (arr_4 [10])))));
                            var_15 = (arr_4 [i_0 - 1]);
                        }
                    }
                }
                var_16 *= (((arr_7 [i_1] [i_0]) ? 107 : (~0)));
            }
        }
    }
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            {
                var_18 += (min((arr_14 [i_4 + 2]), ((((arr_15 [i_4] [i_5 + 3] [i_5 + 3]) - (arr_15 [i_4] [i_4] [i_5]))))));
                var_19 = (min(var_19, (((((min(-1, 22531))) ? (arr_13 [i_5 + 1]) : ((var_4 ? ((~(arr_14 [i_4 - 2]))) : (min((arr_14 [i_4]), (arr_13 [i_4 + 2]))))))))));
                var_20 *= (arr_18 [i_4] [i_5]);
                var_21 *= ((!(arr_16 [i_4])));
                arr_19 [i_4] [i_5] [i_5 - 1] = (((((arr_13 [i_4 + 2]) | (arr_13 [i_4 + 2])))) ? (min(((1 ? 1 : 1)), (arr_18 [20] [20]))) : (!33538048));
            }
        }
    }
    #pragma endscop
}
