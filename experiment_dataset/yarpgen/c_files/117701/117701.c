/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(!var_9)));
    var_11 = ((var_9 || (((var_3 + ((var_8 ? 143 : -1927273273607637166)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = ((!(~4184121352697180752)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = (((((~(arr_5 [i_1 - 1] [i_1 - 2])))) ? ((((arr_5 [i_1 - 1] [i_1 - 2]) ? (arr_5 [i_1 - 1] [i_1 - 2]) : (arr_5 [i_1 - 1] [i_1 - 2])))) : ((14262622721012370864 & (arr_5 [i_1 - 1] [i_1 - 2])))));
                                arr_12 [i_0] [i_1] [3] [3] [3] [i_0] [10] = ((((((arr_1 [i_2] [i_1 - 1]) ? (arr_4 [i_4]) : (arr_1 [i_4] [i_3])))) || ((!(arr_0 [i_1 + 1])))));
                                var_13 = (((((((~(arr_8 [i_4] [i_3] [3] [i_0] [i_0]))))) + 2147483647)) >> (((arr_1 [i_4] [i_0]) - 543891064742058504)));
                                var_14 += ((((-14 ? 4184121352697180751 : (arr_8 [i_0] [i_1] [5] [i_3] [i_4])))));
                                var_15 = ((((((arr_11 [0] [i_3] [i_3] [i_2] [16] [i_1] [15]) ? 14262622721012370866 : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [13] [i_0])))) ? ((((!(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : ((-(arr_11 [10] [7] [3] [i_3] [13] [i_3] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((((((10305224414870538729 ? 4184121352697180735 : 253))) ? (var_9 | -1737047771) : (~3613496925))));
    #pragma endscop
}
