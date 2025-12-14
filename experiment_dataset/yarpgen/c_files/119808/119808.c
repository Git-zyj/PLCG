/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((arr_1 [i_0 + 2]) ? (arr_4 [i_0 + 2]) : (arr_4 [i_0 + 2]))) != var_18);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2] [1] [i_3] = ((((((((var_12 ? 127 : 27821))) ? ((var_3 ? (arr_0 [i_0 + 1]) : (arr_10 [i_3] [i_2] [i_1] [11] [11]))) : (((max(27818, var_0))))))) ? (arr_7 [i_3] [i_2] [i_0 + 1] [i_0 + 1]) : (arr_11 [i_0] [i_2])));
                            var_21 = (min(var_21, -1));
                            var_22 ^= ((min(var_16, (((27821 ? -27821 : 87))))));
                            var_23 |= (min(var_16, (var_13 * var_2)));
                            var_24 = (max(var_24, var_11));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_25 = (((arr_10 [1] [i_5] [i_0] [i_1] [i_0]) ? (((arr_14 [i_5 + 2] [i_6] [i_6]) ? (arr_14 [i_5 - 1] [i_6] [i_6]) : (arr_14 [i_5 - 1] [i_5 - 1] [i_5]))) : (~var_6)));
                                arr_20 [i_1] [i_4] [i_5] [i_6] = ((((~(arr_7 [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) == (arr_8 [i_0] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
