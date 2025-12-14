/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((~var_12) & ((329516641 ? 13476 : 14212660692271410359)));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_20 += (2847132285668468028 > 1);
                            var_21 = (arr_6 [i_3 - 1] [i_3 + 1]);
                            var_22 = ((~((-(arr_9 [i_0] [i_1 - 3] [i_3])))));
                            var_23 = ((-(arr_3 [i_4] [i_0] [i_0])));
                            var_24 = ((1 ? (((((arr_4 [i_0] [i_0] [i_0 - 4]) + 2147483647)) << (210 - 210))) : (arr_12 [i_4] [16] [16])));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_16 [i_0] [i_1 - 1] [i_2] [i_3 - 2] [i_3] = (((arr_14 [i_1] [i_3] [i_3]) > var_16));
                            arr_17 [i_3] = var_5;
                        }
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            var_25 = (max((((var_17 > -79) & var_6)), (arr_14 [i_1 - 3] [i_1 + 1] [i_3])));
                            var_26 = ((-((-6 ? -6 : 45))));
                            arr_20 [i_0] [2] [2] [i_3] [i_0] [i_6 - 1] = ((~(((var_12 <= (arr_11 [i_3 - 2] [i_3 - 2] [i_2] [8]))))));
                        }
                        var_27 = (((((-641278566 ? (-127 - 1) : 45))) ? (max((~14328), (max(var_14, -1355735818)))) : (arr_4 [16] [1] [1])));
                        arr_21 [i_1] [i_3] = (max(1, (max(-31690, ((17460405841603274515 ? 0 : 2292204494))))));
                    }
                }
            }
        }
    }
    var_28 = var_9;
    var_29 = var_8;
    #pragma endscop
}
