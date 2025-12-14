/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 &= ((((((((18446744073709551615 ? (arr_2 [i_0]) : var_6))) ? (3843036379438447272 != -1) : ((-(arr_6 [i_2] [i_1] [i_0] [i_0])))))) ? 1 : (arr_7 [i_1])));
                    var_21 = (min(((((arr_0 [i_0]) ? (((arr_0 [i_1]) ? 1 : (-127 - 1))) : 1))), ((var_7 ? ((1470389715 ? 18256323091574777928 : var_13)) : 0))));
                    var_22 = var_11;
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((((((arr_8 [i_0] [i_2] [i_2]) ? ((var_15 ? (arr_5 [i_2] [i_1] [i_0]) : 1)) : 138))) ? (arr_7 [i_2]) : (arr_1 [i_1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_19 [i_3] [i_4] [i_5] [i_5] = (max(-1, (arr_14 [i_5 - 1])));
                            arr_20 [7] [i_4] = (max((((~1012621379) ^ ((117 ? 5231 : 18446744073709551615)))), ((max(-1470389707, 70)))));
                            var_23 = var_9;
                            var_24 = (max(var_24, (max(((var_1 ? (arr_16 [i_5 + 1] [i_5] [2]) : (arr_16 [i_5 + 1] [i_6] [i_6]))), ((min(50331648, 120)))))));
                        }
                    }
                }
                var_25 = ((var_4 == ((-(arr_0 [i_3])))));
            }
        }
    }
    #pragma endscop
}
