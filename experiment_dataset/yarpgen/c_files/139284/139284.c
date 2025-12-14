/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_9));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = (max(var_11, (arr_1 [10] [i_0])));
        arr_2 [10] |= 96667780;
        var_12 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_13 = (max(var_13, -1));
        var_14 = (arr_5 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_15 = (min(var_15, ((1 / (((arr_4 [i_2 + 2]) ? 112 : (arr_4 [i_2 + 3])))))));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_16 [10] [i_4] [i_4] [i_2] &= (max((((((var_3 / (arr_7 [i_1] [i_3] [i_1])))) ? ((((arr_3 [i_1]) ? 1 : 1))) : ((var_8 ? (arr_14 [3] [i_2] [3] [4] [i_5 - 1]) : var_0)))), (arr_12 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [13])));
                                var_16 = (max(var_16, (((((max((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]), (min((arr_12 [16] [8] [i_3] [i_4 - 1] [8]), (arr_8 [i_1] [0] [i_1] [i_3])))))) || var_9)))));
                                arr_17 [i_2] [i_2] = 220;
                                var_17 = ((3544818100941519290 ? -1 : 1));
                            }
                        }
                    }
                    var_18 *= ((+(min((arr_1 [i_3] [i_2 + 3]), (((arr_8 [i_2 + 1] [i_2] [i_2] [i_3]) ^ (arr_5 [5])))))));
                }
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
