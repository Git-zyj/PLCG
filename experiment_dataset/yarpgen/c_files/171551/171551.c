/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_10 = (~var_1);

                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            arr_14 [i_1] [i_1] [i_1] [i_1] = 0;
                            var_11 = arr_10 [5] [i_3] [7] [i_1] [11] [7] [i_0];
                            arr_15 [i_0] [i_0] [i_1] [i_0] [i_3] [i_0] [i_4] &= (((((6935361305079703097 ? (arr_4 [i_0] [i_1] [10] [i_4 - 1]) : -6935361305079703101))) && (arr_3 [i_4])));
                            var_12 = (min(var_12, ((6935361305079703107 >> (var_4 - 83)))));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_13 = 55;
                            arr_19 [i_3] [i_3] [i_3] [i_1] [1] [i_3] = (((((1471001273033314821 ? 178 : (arr_5 [i_3])))) ? -6935361305079703108 : (((var_1 ? (arr_13 [i_0] [i_0] [i_2] [i_0] [15]) : 4149)))));
                        }
                    }
                    var_14 = ((-(arr_17 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2])));
                }
            }
        }
        var_15 = 38;
        var_16 = var_6;
    }
    var_17 = (min(((~(var_1 / var_9))), var_0));
    #pragma endscop
}
