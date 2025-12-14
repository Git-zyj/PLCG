/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = (i_0 % 2 == zero) ? (((((((((arr_2 [9] [i_0]) <= (arr_5 [i_1] [i_0]))) ? (((arr_3 [18] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_4 [i_1]))) : (((((arr_5 [i_1] [i_0]) >= (arr_2 [i_0] [i_0])))))))) ? ((((((arr_3 [1] [i_1 + 4]) - (arr_1 [i_0] [i_0])))) ? (arr_3 [i_0] [8]) : (arr_5 [i_0] [i_1]))) : ((((0 ? 1039958316 : 1)) ^ (((((arr_3 [i_0] [i_1 + 2]) + 2147483647)) << (((arr_2 [i_0] [i_0]) - 3099138440))))))))) : (((((((((arr_2 [9] [i_0]) <= (arr_5 [i_1] [i_0]))) ? (((arr_3 [18] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_4 [i_1]))) : (((((arr_5 [i_1] [i_0]) >= (arr_2 [i_0] [i_0])))))))) ? ((((((arr_3 [1] [i_1 + 4]) - (arr_1 [i_0] [i_0])))) ? (arr_3 [i_0] [8]) : (arr_5 [i_0] [i_1]))) : ((((0 ? 1039958316 : 1)) ^ (((((arr_3 [i_0] [i_1 + 2]) + 2147483647)) << (((((arr_2 [i_0] [i_0]) - 3099138440)) - 1548590817)))))))));
                arr_7 [i_0] [i_0] [i_0] = (arr_3 [i_1] [i_0]);

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] = arr_5 [i_0] [15];
                    var_12 = (arr_1 [i_0] [i_0]);
                }
                var_13 *= (((((((arr_9 [i_0] [i_0] [i_0]) % (arr_3 [i_0] [i_0]))) ^ (arr_3 [i_0] [i_1])))) ? (((((arr_4 [i_0]) | (arr_4 [i_0]))) & (((arr_5 [i_0] [i_0]) / (arr_4 [i_0]))))) : (((arr_9 [i_0] [i_0] [i_1]) ? (((((arr_2 [14] [16]) <= (arr_0 [i_0]))))) : (((arr_2 [i_0] [1]) ? (arr_8 [i_0] [7] [i_0]) : (arr_3 [19] [i_1]))))));
                var_14 += (((((((((arr_2 [i_0] [8]) ? (arr_5 [i_0] [i_0]) : (arr_3 [14] [14])))) ? ((((arr_2 [14] [20]) ? (arr_3 [i_0] [i_1]) : (arr_4 [i_1 + 1])))) : (arr_1 [10] [10])))) || (((arr_4 [i_0]) >= (arr_2 [i_0] [2])))));
            }
        }
    }
    var_15 = ((((((((var_7 ? var_10 : var_8))) ? var_5 : ((var_6 ? 1 : 3550688676))))) ? (var_2 | var_0) : (((var_9 / var_9) / ((207 ? 207 : 4160749568))))));
    var_16 = (max(var_16, ((((((-1737 * -50) ? var_1 : ((var_4 ? var_1 : var_10)))) + (var_10 * var_1))))));

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_17 = (((arr_11 [i_3] [i_3]) ? ((((((arr_13 [i_3]) ? (arr_13 [i_3]) : (arr_13 [i_3])))) ? (((arr_12 [i_3]) ? (arr_12 [i_3]) : (arr_13 [i_3]))) : (arr_13 [i_3]))) : (arr_13 [i_3])));
        var_18 = (((arr_11 [i_3] [i_3]) + (arr_11 [13] [i_3])));
    }
    var_19 = ((var_0 ? ((var_4 * (var_5 / var_2))) : var_3));
    #pragma endscop
}
