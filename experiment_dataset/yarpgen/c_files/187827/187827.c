/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 ? var_0 : (((((var_1 ? var_9 : var_3))) ? (-9223372036854775797 > var_1) : (max(var_0, var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = (arr_7 [i_1 - 1]);
                var_12 ^= var_5;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_14 [i_1] [i_2] = (-(arr_3 [i_2]));
                            var_13 -= (((((~(arr_5 [i_1 - 1])))) ? -1186053233 : (((arr_5 [i_1 - 1]) - (arr_5 [i_1 + 1])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_14 ^= (((((240 ? -1473884244 : 1))) ? ((((((arr_19 [i_6] [i_5] [i_4] [7] [5]) - var_2))) ? ((113 ? var_9 : (arr_3 [i_0]))) : (arr_20 [i_6] [i_4] [8] [8]))) : (!4294967289)));
                                arr_22 [i_0] [i_1] [i_5] [i_5 - 1] [i_6] = (((!var_1) ? (((arr_18 [i_5]) ? (((!(arr_2 [i_0] [i_1])))) : 8046)) : (max((max((arr_6 [i_4]), var_7)), ((~(arr_0 [1] [i_1])))))));
                                var_15 = ((-(arr_13 [i_6] [i_1 - 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (~var_7);
    #pragma endscop
}
