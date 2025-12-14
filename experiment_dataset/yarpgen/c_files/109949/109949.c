/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [1] = (!var_0);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_2] [7] [i_0] &= ((-2147483644 ? var_6 : (arr_1 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((-((-7259312843420686146 ? -2147483632 : 4294967289)))))));
                                var_16 = (max(var_16, (((17575006175232 >> (-1141092264 + 1141092326))))));
                                var_17 += ((((max(((4589204407866134953 ? var_12 : (arr_15 [i_0] [i_1] [i_2] [i_3]))), var_9))) / (((arr_8 [i_0] [i_2] [i_3 + 3] [i_4 + 1]) ^ (arr_16 [i_2] [i_3] [i_3 + 4] [i_4 - 2] [i_4 + 3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, var_3));
    var_19 &= var_4;
    #pragma endscop
}
