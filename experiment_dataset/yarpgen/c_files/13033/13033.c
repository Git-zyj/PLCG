/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((~(~var_6))) | (-709373309 / 709373333)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_2] [i_2] [i_0] = ((197 ? ((((arr_7 [i_0] [i_1] [i_0]) ? ((min(179, 153))) : 77550755))) : (((arr_4 [i_1 + 2] [i_1] [i_1]) ? (arr_4 [i_1 + 3] [i_1] [i_1]) : (arr_4 [i_1 + 1] [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 ^= (+(((arr_5 [i_2]) ? (arr_3 [i_1] [i_2] [i_3 - 1]) : (arr_5 [i_2]))));
                                var_14 = -165;
                                arr_16 [i_0] [i_1] [i_2] [i_3] = ((((!(arr_14 [i_2] [i_3 + 1] [i_0] [i_3] [i_3 + 1]))) ? ((~(arr_13 [i_1] [i_1] [i_1] [i_2] [i_3 + 1]))) : (((arr_13 [i_1] [i_1] [i_0] [i_3 - 1] [i_3 + 1]) ? (arr_14 [i_2] [i_2] [i_2] [i_3] [i_3 - 1]) : (arr_13 [i_1] [i_4] [i_3] [i_4] [i_3 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 &= ((~((var_11 ? var_0 : var_5))));
    #pragma endscop
}
