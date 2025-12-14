/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137729
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
                arr_4 [i_0] [i_0] = var_5;
                var_11 = (((var_1 * ((var_0 ? var_6 : 8646749240583998424)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 = (((((-1951317132 ? 1693146811 : 2601820484))) == ((var_2 ? (-474283408314804641 + 2601820485) : var_5))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = (((min(474283408314804640, 474283408314804640)) / (arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])));
                                var_14 = (max(var_14, ((min(((((max((arr_9 [i_0]), var_8)) + 2601820488))), var_2)))));
                                var_15 |= ((~((-474283408314804645 | (4095 | 1693146811)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (((322311111 + var_2) - ((((-32738 - var_5) - var_8)))));
    var_17 = var_5;
    var_18 += var_4;
    var_19 = (min(var_0, (((!(474283408314804621 & -2072920934269449120))))));
    #pragma endscop
}
