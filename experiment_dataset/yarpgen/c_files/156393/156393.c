/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((arr_0 [i_1 + 2] [i_1 + 1]), (arr_0 [i_1 - 2] [i_1 - 1])));
                var_10 += ((-(arr_1 [i_0])));
            }
        }
    }
    var_11 += var_6;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            {
                var_12 += var_8;
                var_13 = (arr_6 [i_2] [i_2]);

                /* vectorizable */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_14 = (max(var_14, (((~(arr_9 [i_3 - 3] [i_2 + 1]))))));
                    arr_15 [i_4] [i_3] = var_4;
                    var_15 += (64394 > 0);

                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        var_16 = (max(var_16, (((252 ? 1 : 1)))));
                        var_17 = (arr_16 [i_5] [i_3 - 3] [i_4] [i_5]);
                    }
                }
            }
        }
    }
    var_18 = var_2;
    var_19 = var_4;
    #pragma endscop
}
