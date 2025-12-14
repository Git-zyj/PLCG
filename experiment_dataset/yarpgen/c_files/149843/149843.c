/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((!((((((~32767) + 2147483647)) >> (!var_9))))));
    var_13 = (var_4 / var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] |= (arr_0 [i_0]);
                    arr_9 [i_0] [19] [19] = ((!((((arr_2 [i_2] [i_2] [i_2 + 1]) ? 3224409287 : (arr_2 [11] [i_2] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = (max((arr_1 [i_2 + 1]), (arr_3 [7])));
                                arr_15 [i_0] [i_0] [4] = (arr_12 [3] [i_3] [7] [i_0] [i_0]);
                            }
                        }
                    }
                    var_15 = (max(var_15, (((max(((~(arr_10 [0] [i_2 + 1] [i_2] [i_0] [i_2] [i_0]))), (!-15114)))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_16 = (-15114 ^ 47);
        arr_19 [i_5] [i_5] = ((-((max(160, ((max((arr_4 [1]), (arr_5 [i_5] [i_5] [13])))))))));
    }
    #pragma endscop
}
