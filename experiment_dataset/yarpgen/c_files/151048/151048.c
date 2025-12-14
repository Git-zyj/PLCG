/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151048
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
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2 - 1] = var_5;
                    var_16 = (min(var_16, (((-((((((-(arr_0 [i_0])))) < (min(109, (arr_7 [i_1] [i_0])))))))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_17 = (3146 | 16943988061317342295);
                        arr_12 [i_0] [i_1] |= -10390;

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] = 80;
                            var_18 = (max(var_18, ((((((~(arr_14 [i_4] [i_3 + 1] [i_0] [i_0])))) && (40 | -1980))))));
                            arr_16 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] = var_2;
                        }
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_19 -= (((arr_7 [i_0] [i_0]) + var_9));
                            var_20 -= (((arr_18 [i_0] [i_5 + 2] [i_5 + 2] [i_0] [i_2] [i_2] [i_5 + 2]) ? (~-1147) : (arr_2 [i_2] [i_2])));
                        }
                    }
                }
            }
        }
    }
    var_21 ^= var_4;
    #pragma endscop
}
