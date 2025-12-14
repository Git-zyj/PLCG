/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 &= ((0 ? 4027395581 : ((var_6 ? var_13 : 43974))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 = (min(((!(arr_3 [i_0] [i_1]))), (!0)));
                            var_19 = (min(var_19, (~255)));
                            var_20 -= var_5;
                        }
                    }
                }
                arr_10 [i_0] [i_0] [i_0] = (((((((arr_9 [i_0] [i_0] [i_1]) != ((18446744073709551615 ? var_3 : 18446744073709551603)))))) < ((+(max((arr_2 [i_0]), (arr_7 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_5] [i_6] &= (!13);
                                arr_18 [i_6] [i_5] [i_4] [13] [i_4] [i_0] [i_0] = (arr_2 [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
