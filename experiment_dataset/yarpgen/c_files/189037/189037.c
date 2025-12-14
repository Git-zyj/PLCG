/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = ((-((min((min(var_8, var_4)), var_7)))));
    var_12 |= ((((((var_0 * var_7) ? ((var_5 ? var_6 : var_5)) : var_7))) ? var_4 : (max(((var_5 ? var_0 : var_7)), var_7))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_1 - 1] [i_1] = var_9;
                    arr_7 [i_0] = (((max(8353436272826649026, 1032611786)) >> (((((~(arr_0 [i_0])))) + 32586))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [i_3] = (((((max(13106796439597876017, 207)) << 8))) ? 1491452050 : ((max(-376192365, 281474842492928))));
                                var_13 = 13482098203824031679;
                                var_14 = (((((((arr_9 [i_4] [4] [i_2] [i_1] [i_1 - 2] [3]) << (var_0 + 1857432541)))) <= var_3)));
                            }
                        }
                    }
                    arr_17 [i_0] [i_2] [i_2] = ((3227760653 ? (!65511) : 10197));
                }
            }
        }
    }
    #pragma endscop
}
