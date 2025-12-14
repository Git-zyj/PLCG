/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_4 * (((max(536739840, 30538)) - var_9)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 -= (((arr_10 [i_0] [i_0]) ? (((min((arr_7 [i_0] [i_0] [i_3] [i_4]), 2480383454)) % ((((arr_4 [i_2 - 2]) ? (arr_4 [i_1]) : (arr_9 [6] [6] [10] [i_4])))))) : var_5));
                                var_21 = (((((7 ? 33780 : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))) << (((((max((arr_5 [i_1] [i_2] [i_1]), 31758)))) - 31737))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_0] = (((((((-(arr_0 [i_0] [i_0])))) ? (((max((arr_0 [i_0] [i_0]), 3)))) : (((arr_12 [i_0] [i_0] [i_1] [i_0] [i_0]) ? var_4 : var_12)))) ^ (((var_12 * 20815) & (((max((arr_0 [i_0] [i_0]), (arr_5 [i_1] [i_1] [i_2])))))))));
                    arr_14 [i_0] [i_0] [i_0] = arr_3 [i_0] [i_0] [0];
                    arr_15 [14] &= ((-16511 ? ((max((arr_9 [0] [i_1] [i_0] [0]), (arr_7 [i_0] [17] [17] [17])))) : ((~(arr_1 [i_0])))));
                }
            }
        }
    }
    var_22 = (max(var_12, (var_12 + var_0)));
    #pragma endscop
}
