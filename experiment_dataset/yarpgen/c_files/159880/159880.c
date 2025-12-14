/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_12;
                var_14 = ((177 ? 314228992 : (((var_3 ? 2953771040338358677 : -2953771040338358682)))));
                arr_6 [i_0] [i_0] [i_1] = (~0);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1 + 2] [i_2] [i_0] = ((2017612633061982208 ? 946326183350778832 : 4294967295));
                            arr_13 [i_0] = ((946326183350778832 >> ((var_1 ? (-314228992 || 8) : (min(-2953771040338358678, -85))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 3; i_6 < 10;i_6 += 1)
                            {
                                arr_22 [i_0] [0] [i_4] [i_5] [i_0] [i_6 - 1] [6] = 314229003;
                                var_15 = (((arr_15 [i_0 + 1] [i_1 + 2]) ? var_11 : var_6));
                                var_16 -= 3395012515;
                            }
                            arr_23 [i_0] [i_1] [i_4] [i_0] [i_1 + 1] [i_0] = (arr_2 [i_0 - 1] [i_1 + 2]);
                            arr_24 [i_0] [7] [i_4] [i_4] [i_0] = var_9;
                        }
                    }
                }
            }
        }
    }
    var_17 = (((12556333190848390595 ? 2953771040338358663 : 4294967284)));
    #pragma endscop
}
