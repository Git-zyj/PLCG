/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] = ((((((arr_2 [i_2] [i_0 - 1] [i_1 + 1]) ? (arr_2 [i_0 + 1] [i_0 - 2] [i_1 + 3]) : (arr_11 [i_0] [i_0 + 1] [i_3] [10])))) ? (((min(1, (arr_3 [i_2] [i_0 + 1] [i_2]))) ? (((((arr_1 [i_2]) > (arr_7 [5] [i_1] [5] [5]))))) : var_5)) : var_5));
                            var_13 ^= ((+((((((arr_6 [i_0 - 1] [i_0] [i_0] [1]) ^ var_12))) ? (arr_11 [i_1 + 1] [i_1] [i_2] [i_3 - 2]) : var_3))));
                            var_14 = var_1;
                            var_15 = 0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_19 [i_4] [i_4] = (min((arr_10 [i_0 + 1] [i_4] [i_1 + 2] [i_4]), ((~(arr_2 [i_1 + 1] [i_1 - 3] [i_1 + 2])))));
                            var_16 = (+(((arr_14 [i_0] [i_0] [1] [21]) ? var_8 : var_6)));
                        }
                    }
                }
                var_17 = arr_2 [23] [i_0 + 1] [i_1];
            }
        }
    }
    var_18 -= (min((min(12175258386581047500, 18446744073709551615)), var_2));
    #pragma endscop
}
