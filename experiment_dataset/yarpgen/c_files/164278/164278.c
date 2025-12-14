/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_6;
    var_12 |= (((max(((0 ? 51 : (-2147483647 - 1))), var_0)) * var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ^ 1693000029701241298));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_2 - 3] [i_1] [i_1] [i_0] = -1;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [0] = var_1;
                                var_13 = (var_6 <= var_8);
                                var_14 = (min(var_14, (arr_7 [11] [i_2 - 3] [i_3 - 1])));
                                var_15 = (min(var_15, (18332 + 63996)));
                                var_16 = (min(var_16, ((((arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4] [i_1 - 1]) ? (arr_13 [i_1 - 1] [i_1] [i_1] [i_1] [i_4] [i_1]) : (arr_3 [i_1 - 1] [i_1 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
        var_17 = ((~(arr_8 [i_0] [i_0])));
        var_18 = (min(var_18, (1059042874425918662 | var_4)));
    }
    #pragma endscop
}
