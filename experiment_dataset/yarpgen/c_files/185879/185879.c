/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 -= (4294967295 >> (58630 - 58617));
                                arr_16 [i_0] [i_1] [i_0] [19] = (arr_11 [i_0] [i_1 + 1] [i_2 - 1] [i_3]);
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_4 + 1] = ((!(arr_4 [i_0] [i_3 + 3])));
                                var_15 = ((~((~(arr_12 [i_0] [14] [i_0] [12] [13])))));
                                var_16 = (max(((~(arr_1 [i_1 + 1]))), (arr_1 [i_1 + 1])));
                            }
                        }
                    }
                    arr_18 [i_0] [11] = var_3;
                    var_17 = (arr_1 [i_0 + 1]);
                    var_18 = (min(var_18, ((min(var_3, (((((max(-811075011, 127))) ? (((arr_8 [i_1]) - (arr_6 [2]))) : (((!(arr_12 [i_2] [i_1 + 1] [8] [i_1 + 1] [i_2]))))))))))));
                }
            }
        }
    }
    #pragma endscop
}
