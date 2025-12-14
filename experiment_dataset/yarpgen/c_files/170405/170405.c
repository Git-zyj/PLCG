/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((((arr_0 [i_1]) ? (!var_4) : (1250422038 ^ -26))) * ((((!(-472343776 & 58285)))))));
                var_13 = (min(var_13, (((206 << ((((var_10 << (127 - 116))) - 28723182)))))));
                arr_5 [i_0] [24] [i_0] &= var_4;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [18] [i_2] [i_2] [i_4] &= (max((min(472343798, 1)), (((arr_12 [i_0] [i_0] [i_2 + 1]) ? (arr_3 [1] [i_4 - 1] [i_3]) : (arr_9 [i_3 - 3] [i_2 - 2] [i_0] [i_0] [8] [i_0])))));
                                var_14 += 2299780299;
                            }
                        }
                    }
                }
                arr_15 [i_1] = var_2;
            }
        }
    }
    var_15 = 3688171746783388088;
    #pragma endscop
}
