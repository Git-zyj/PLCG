/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = ((((~(((arr_5 [i_0]) ? (arr_5 [i_0]) : 5355092972018779427)))) ^ ((0 & (max((arr_2 [i_0]), 18446744073709551615))))));
                arr_6 [i_1 + 2] [i_1 + 2] = (((~18446744073709551615) <= (((0 ? (arr_1 [i_1 + 1] [i_1 - 2]) : 46980)))));
                var_13 = var_5;
                var_14 = (((-2120039623 ^ 13091651101690772188) ? (arr_3 [i_1 - 1] [i_1 + 2] [i_0]) : ((~(arr_3 [i_1 - 1] [i_1 - 2] [1])))));
            }
        }
    }
    var_15 = (min(var_6, var_11));
    var_16 = ((((138 && 0) ? var_10 : (max(var_7, 2120039623)))) ^ 5355092972018779427);
    #pragma endscop
}
