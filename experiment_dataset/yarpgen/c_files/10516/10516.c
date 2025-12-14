/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = ((arr_5 [i_2 + 1] [i_0] [i_2]) ? ((max((!var_11), ((!(arr_6 [i_0] [i_2] [i_0] [i_0])))))) : (min(8317, 2147483647)));
                            arr_9 [i_0] [i_1] [i_0] [i_2] = ((min((arr_8 [i_2 - 2] [i_2] [i_2 + 2] [i_3]), 7)));
                        }
                    }
                }
                var_13 = (max(((2147483647 >> (var_2 + 1539226238))), var_3));
                arr_10 [i_0] [i_1] = (((((((arr_4 [i_0] [i_1] [i_1]) ? var_10 : var_7)))) ? var_5 : (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_1] [i_1]) : var_0))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_15 [i_5] = 31744;

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_24 [i_8] [i_5] [i_6] [i_5] [i_4 + 2] = (arr_2 [i_4 - 1]);
                                var_14 = (((((15936 ? 9223090561878065152 : -62))) ? ((min(var_0, 63))) : 5899788881219020492));
                                arr_25 [i_5] [i_7] [i_6] [i_5] [i_5] = (!1023);
                                var_15 = (((arr_23 [i_5] [i_8] [i_7] [i_7] [i_8] [i_5] [i_4]) ? ((min((min(58808, 1)), var_8))) : (~var_0)));
                            }
                        }
                    }
                    arr_26 [i_4] [i_5] [i_6] = (((1 / 1) ? -4541 : (max((arr_7 [i_6] [i_5] [i_4 + 2] [i_4 + 3] [i_4]), -64))));
                }
                var_16 = (min((arr_0 [i_4]), (arr_21 [i_5] [i_5] [i_4 + 2] [i_4] [i_5] [i_4] [i_4 + 3])));
            }
        }
    }
    var_17 = (((((var_5 ? var_8 : 255))) ? (min(var_1, 128)) : ((min(var_8, var_4)))));
    var_18 = var_0;
    #pragma endscop
}
