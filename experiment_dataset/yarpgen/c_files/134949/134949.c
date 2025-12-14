/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((var_6 * ((var_11 ? var_5 : var_0))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 |= (((-2147483647 - 1) ? var_11 : var_5));
                    arr_8 [i_0] [i_0] [1] = ((((((arr_7 [i_0] [i_2]) ? var_14 : (arr_1 [i_2])))) ? (arr_7 [i_1 + 1] [i_1 + 1]) : (!3121313603)));
                    var_20 = (min(var_20, (arr_1 [i_0])));
                    arr_9 [i_2] [i_2] [i_2] [13] = ((-var_6 ? (((arr_3 [i_2]) ? (arr_6 [i_0]) : (arr_4 [i_0] [i_0] [i_2]))) : (arr_0 [i_1])));
                }
            }
        }
        var_21 = (((var_11 <= (arr_4 [i_0] [i_0] [i_0]))));
        var_22 = ((!(-2147483647 - 1)));
    }
    var_23 = (var_0 - var_10);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                arr_15 [i_4] [i_4] = (!(((var_1 ? (((arr_10 [i_3]) ? 3613692977 : var_3)) : (((((-2147483647 - 1) != 1))))))));
                var_24 = (((((arr_12 [2]) != (arr_14 [i_4] [1]))) ? (max((arr_12 [i_4]), (max(var_13, (arr_11 [1] [i_4]))))) : ((var_6 ? (arr_14 [i_4] [i_4]) : (arr_11 [i_3] [i_4])))));
            }
        }
    }
    #pragma endscop
}
