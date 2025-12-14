/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_2] [i_0] &= (arr_4 [i_0] [i_3]);
                        var_13 = (min(var_9, ((max(63, var_1)))));
                        arr_12 [i_0] [i_1] [i_2] [i_0] = ((max((arr_5 [i_0 + 2] [i_0 + 2] [i_0]), (min(63, var_0)))));
                    }
                    var_14 = 63;
                    var_15 &= var_10;
                    var_16 = var_11;
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_17 = (min(var_6, ((max(((max(var_10, 63))), (min(63, var_12)))))));
        arr_15 [i_4] = 63;
        arr_16 [i_4] = (max(192, (min(-1486101296, 8388352))));
        var_18 &= var_7;
    }
    #pragma endscop
}
