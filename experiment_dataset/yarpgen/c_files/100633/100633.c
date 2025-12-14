/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = (((((arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]) >> (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [0]) - 68))))));
                                var_14 = 255;
                            }
                        }
                    }
                }
                var_15 = ((255 * (((min(var_4, 0)) | (((-48 ? 0 : 4074904339)))))));
            }
        }
    }
    var_16 = var_4;
    var_17 = 3755465109;
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                arr_18 [i_5] [i_6] = 4074904327;
                var_18 = ((((var_3 / 28) > (-9223372036854775806 < var_6))));
                var_19 = (((((65529 ? (255 - -100) : ((255 ? 3755465109 : 65529))))) != (((arr_17 [9] [i_5] [i_6]) ? -3419813774583156363 : (220062956 != var_4)))));
            }
        }
    }
    #pragma endscop
}
