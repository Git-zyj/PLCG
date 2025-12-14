/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((~var_6) ? (var_6 & var_8) : -var_7))) ? var_0 : var_9));
    var_11 = (((~var_8) != var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_1] [i_1] [i_1] |= ((max(var_6, (arr_9 [i_3] [i_2] [i_3 - 2] [i_3] [4] [i_3 - 2]))));
                                var_12 = (min(var_12, (((-var_6 | (min(((2147483647 ? 2513511454453923365 : (arr_4 [i_1] [i_1] [i_1] [i_1]))), (arr_10 [8] [5] [i_1] [i_1] [i_0]))))))));
                                var_13 |= (6 | var_1);
                            }
                        }
                    }
                    var_14 = (((((min((arr_1 [i_0]), (arr_11 [i_0] [2] [i_0] [i_0] [i_0]))))) != ((var_7 ? (arr_6 [i_2] [i_2] [i_0] [i_2]) : (((var_8 ? -1293669314 : var_3)))))));
                    arr_13 [i_2] [i_0] |= ((~(((!(arr_3 [i_0]))))));
                    var_15 = ((2513511454453923384 ? (-127 - 1) : 15933232619255628261));
                }
            }
        }
    }
    #pragma endscop
}
