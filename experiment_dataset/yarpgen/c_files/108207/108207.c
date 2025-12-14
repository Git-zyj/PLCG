/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= max((((min(204, var_8)) & var_5)), ((var_0 ? var_7 : 36028797018963967)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = (min((~4294967280), ((min((arr_0 [i_0 + 1]), var_11)))));
                                var_15 += ((((arr_10 [i_0] [i_2] [i_0 - 2] [i_0]) ? (arr_10 [i_0] [i_1] [i_0 - 2] [i_0]) : var_12)));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] = (((~-1) + ((((arr_9 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1]) >= var_12)))));
                    var_16 = ((-(((((arr_1 [i_1]) << (-26763 + 26774)))))));
                }
            }
        }
    }
    #pragma endscop
}
