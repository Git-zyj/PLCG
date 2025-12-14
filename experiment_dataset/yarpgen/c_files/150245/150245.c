/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [1]);
        var_12 = 255;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_13 = -325476127;
            arr_6 [i_1] = (arr_5 [i_0]);

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_14 = ((((arr_9 [i_0] [i_0] [i_2]) / 1949036869)) - (!-7209909142120010618));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_15 = (231 / -4366084072558528133);
                            arr_17 [i_1] = 131070;
                            arr_18 [i_4] [i_3] [i_2] [i_1] [i_0] = (arr_13 [i_3] [i_3] [i_3] [i_3] [i_3]);
                            var_16 = ((!(arr_16 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4])));
                            arr_19 [i_4] [i_3] [i_2] [i_1] [i_0] = ((~(arr_8 [1] [1] [i_4])));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_17 = (((~var_1) ? ((max((arr_9 [i_0] [i_0] [0]), (arr_5 [i_5])))) : (((arr_5 [i_5]) & (arr_5 [i_0])))));
            var_18 = (max(((12177706862720189394 ? -117 : -487592125)), var_2));
        }
        var_19 = (((arr_7 [i_0] [i_0] [i_0]) ? (((arr_14 [i_0] [1] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (max(7257931785193997390, 131099)) : ((((arr_9 [i_0] [i_0] [i_0]) % (arr_13 [i_0] [8] [8] [i_0] [8])))))) : ((max(4294967295, (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_20 = var_8;
    var_21 = var_7;
    var_22 = (((((var_2 ? 111 : var_0))) ? var_2 : 27));
    #pragma endscop
}
