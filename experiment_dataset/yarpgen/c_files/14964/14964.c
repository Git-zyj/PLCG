/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_2] = (((+(max((arr_3 [i_2] [i_2]), 3050)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 = 224;
                                arr_18 [i_0] [i_1 + 2] [i_2] [i_3] [i_4] &= (min((((arr_11 [i_4] [i_2] [i_1] [i_0]) ? 18446744073709551615 : (arr_15 [i_0]))), ((((((arr_15 [i_3]) + 9223372036854775807)) >> (((arr_15 [i_0]) + 692320713562766194)))))));
                                arr_19 [i_2] [i_2] [i_2] = ((-(~31)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_12 &= -8;
                        arr_23 [i_5] [i_1] [5] [i_2] [11] [i_5] = 15710;
                    }
                }
            }
        }
    }
    var_13 = ((min((255 <= 25), (!var_5))));
    #pragma endscop
}
