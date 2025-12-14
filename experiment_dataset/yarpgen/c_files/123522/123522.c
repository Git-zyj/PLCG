/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_10 % (((-99 <= (7703945350967350749 + var_12))))));
    var_21 = (max(var_7, ((var_11 >= (((57611 ? 94 : -7279)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((((~1564) ? (arr_1 [i_0] [i_1]) : (arr_4 [i_0] [i_1]))) & 7282));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0 - 1] = ((((((0 ? 11467238171441743446 : var_2)) | var_13)) - ((max((~-1682721034), ((var_7 ? var_9 : 575656364)))))));
                                var_22 = var_9;
                                var_23 = ((max(-42, (arr_11 [i_0] [i_1] [i_2 - 1] [i_3] [i_3]))));
                                var_24 = (max(var_24, (!83)));
                            }
                        }
                    }
                }
                arr_16 [i_0] [17] = var_15;
            }
        }
    }
    #pragma endscop
}
