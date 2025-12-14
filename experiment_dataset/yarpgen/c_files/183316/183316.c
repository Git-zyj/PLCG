/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_2] = (((arr_1 [8]) ? ((max((arr_0 [i_1]), (arr_1 [i_0 + 1])))) : (min(var_4, (arr_5 [i_0 + 2] [i_0 + 2] [i_0 - 1])))));
                    var_10 += var_1;
                    var_11 = ((4294967294 ? (((((-1 ? var_2 : 28414))) ? (max(83, (arr_4 [i_0 + 1] [i_0]))) : (((max(61440, var_5)))))) : (arr_1 [i_0])));
                }
            }
        }
    }
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_18 [i_3] [i_4] [i_5] [i_6] = ((((max(var_8, (arr_5 [i_3 + 1] [i_3 + 2] [i_3 + 1])))) ? -7135618715537007833 : (((arr_4 [i_3 + 2] [i_3 + 1]) ? 61454 : -1083))));
                            var_13 += (((-87 / -87) / (arr_12 [i_3] [i_3] [i_3] [i_3])));
                            arr_19 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] = ((((((((max(-90, var_6)))) * -64))) ? ((((max(var_5, -54))) ^ 61430)) : (((!(arr_4 [i_3] [i_3 + 1]))))));
                            arr_20 [i_3] [i_3 + 1] = (!1493634984);
                        }
                    }
                }
                var_14 = (max(var_14, ((min(((((max(-85, (arr_1 [i_4])))) ? ((-1083 / (arr_15 [i_3] [i_3 - 2] [i_3 - 2] [i_3 - 2]))) : ((-24305 / (arr_16 [i_3] [i_4 + 1] [i_4 + 1]))))), (arr_11 [i_3]))))));

                /* vectorizable */
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    var_15 = (arr_11 [i_3 + 2]);
                    arr_24 [i_3 - 2] [i_7 - 1] = 36;
                }
            }
        }
    }
    #pragma endscop
}
