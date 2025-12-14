/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((((var_0 ? 1 : 52544)))), (var_13 < var_10)));
    var_21 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((+((((arr_0 [i_1 - 2] [i_1 - 2]) && (arr_3 [i_1 - 2]))))));
                var_22 = (max(var_22, (((+((+(((((arr_1 [i_0]) + 2147483647)) << (((arr_3 [i_0]) - 3493372145)))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            {
                arr_9 [i_3] = max((((((arr_6 [5]) * (arr_6 [i_2]))) | 8514533738214141970)), ((((((-45 ? (arr_5 [i_3 - 1]) : (arr_7 [11] [i_3])))) ? ((~(arr_7 [i_2] [i_3]))) : ((var_2 ? (arr_5 [i_2]) : (arr_7 [i_2 + 2] [i_3])))))));
                var_23 *= (((arr_7 [i_2] [8]) & (((arr_6 [i_2 - 1]) ? (((arr_6 [i_2]) ? (arr_8 [i_3 + 1] [i_3 + 1] [i_2]) : (arr_7 [10] [10]))) : (arr_6 [i_2])))));

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_24 = (arr_10 [23] [23] [i_4] [i_2 + 2]);
                    arr_12 [i_3] = ((max(3205817634, (arr_11 [i_2 - 1] [i_3] [i_3 - 1] [i_4]))));
                    arr_13 [i_3] [i_2 + 2] [i_3] = (min(-17558, 3080860103));
                    arr_14 [i_2] [1] [i_3] [i_4] = (arr_7 [i_2] [i_3]);
                }
                for (int i_5 = 2; i_5 < 24;i_5 += 1)
                {
                    var_25 -= ((1089149658 * (arr_11 [i_2] [8] [i_3] [22])));
                    arr_17 [i_2] [i_3 - 1] [2] [i_5] &= (arr_10 [i_5 - 1] [i_5 - 2] [i_3 + 1] [i_3 + 1]);
                    var_26 = (arr_5 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
