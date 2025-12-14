/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((min((~50830), 66)))));
                    arr_8 [i_1] [1] [i_0] [i_0] = -13828;
                    var_21 = (min(var_21, (((((arr_4 [i_1] [i_2 + 1] [i_2 + 4]) * (arr_3 [i_0] [i_2 + 4] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4] [i_2] [i_2] [i_0] |= var_15;
                                arr_15 [1] [i_3] [i_2] [i_3] [i_4] [i_4] = ((159 >> (1 & 1761893964)));
                                arr_16 [i_0] [i_3] [i_4] [i_1] [i_2 + 3] = 8;
                                var_22 = ((-(((arr_13 [i_4] [i_3] [i_3] [i_1] [i_0]) ? -1497215744 : 0))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_2] |= arr_5 [i_0] [i_1] [i_2];
                }
            }
        }
    }
    var_23 &= var_1;
    var_24 = var_16;
    #pragma endscop
}
