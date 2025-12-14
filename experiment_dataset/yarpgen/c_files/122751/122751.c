/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = min((((((2147483647 ? 2147483647 : 2147483647))) ? ((min(-2147483641, 3807140791))) : (arr_1 [i_0]))), ((((arr_2 [i_0]) ? var_1 : (arr_2 [i_0])))));
        var_13 = (max(var_13, ((min((((((max(var_5, 1)))) | var_0)), ((((!0) ^ (max(2147483640, 16174))))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_14 *= (min((((var_9 << (((arr_4 [i_1]) - 72))))), ((((max(-2147483641, -8012))) ^ (min(3807140789, 2147483647))))));
        var_15 += ((((~(arr_0 [i_1])))) ? (((((arr_0 [i_1]) == (arr_0 [i_1]))))) : (((arr_0 [i_1]) - (arr_0 [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            var_16 = ((~(((arr_10 [i_3] [i_2]) << (var_6 - 4185566158)))));
            var_17 = (min(var_17, (arr_9 [i_3])));
            arr_11 [i_2] [i_2] [i_3] = ((5053844690073871200 == (arr_3 [i_2 + 2])));
        }
        arr_12 [5] [4] = (((arr_2 [i_2 + 2]) / var_1));
        var_18 = (!-2147483623);
    }
    var_19 = var_0;
    var_20 = (min(var_20, ((!((((((var_1 ? var_8 : var_0))) ? ((var_9 ? var_3 : -5053844690073871206)) : var_6)))))));
    var_21 = (max(var_21, (((~(~-2147483641))))));
    #pragma endscop
}
