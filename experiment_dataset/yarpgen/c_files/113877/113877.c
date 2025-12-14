/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_10 * var_10) ? var_2 : (((3176420449137727034 < -3176420449137727034) ? (25 * 715707933) : 6753388429008179257)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        var_16 += (!9270197531790064470);
                        arr_13 [i_1] [i_2] [i_2 + 1] [i_3] [i_2 + 3] = (((0 ? -3176420449137727025 : var_13)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        var_17 += 30;
                        var_18 = (min(var_18, ((((arr_2 [i_2 + 3]) ? (arr_12 [i_0] [i_0] [i_2 + 3] [i_4]) : ((var_14 ? 4294967265 : var_2)))))));
                    }
                    var_19 += var_13;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_20 = ((((((2458 ? -3176420449137727020 : var_0)) == 7015490418929085401)) ? 7183 : 25085));
                                var_21 = (max(var_21, 212));
                                var_22 ^= 255;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_23 = (min(var_23, 2599775003));
                                var_24 += ((3262058971308371691 ? 3579259363 : 255));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, 3176420449137727024));
    #pragma endscop
}
