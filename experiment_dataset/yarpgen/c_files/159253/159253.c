/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (arr_3 [i_1] [i_1] [i_0]);
                arr_6 [i_0] = var_10;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 *= ((((min(var_8, 1))) ? (((((255 ? 18093510816728752452 : -20621))) ? 249 : (min(18093510816728752452, 255)))) : ((((arr_10 [i_4] [i_4] [i_3 + 1] [i_2 - 1]) * ((var_3 ? 18229 : var_3)))))));
                                var_12 = ((max((max(0, 18093510816728752452), (arr_3 [i_2] [i_3 + 1] [i_4])))));
                                arr_14 [i_3] [20] = ((18093510816728752452 ? ((110 ? var_4 : 4)) : (arr_7 [i_0] [i_2] [i_2] [i_0])));
                                arr_15 [2] [i_4] [1] [i_2] [i_2] [1] [i_0] = (arr_11 [i_1] [i_2 - 1] [i_1] [i_3] [i_3 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = (((((((min(7863, 237))) ? ((0 ? var_3 : var_10)) : (!7)))) ? var_9 : 253));
    var_14 = (((!var_4) ? ((-120 ? (!var_10) : (~2097428019200522209))) : -var_10));
    #pragma endscop
}
