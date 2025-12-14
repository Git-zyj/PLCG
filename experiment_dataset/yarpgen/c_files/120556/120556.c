/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = ((((arr_4 [1] [i_1 - 1] [i_1 + 1]) + (arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                var_14 = (((((((((arr_0 [i_0]) ? var_5 : var_1))) ? ((((arr_0 [i_0]) > (arr_4 [i_0] [4] [i_1])))) : (arr_1 [i_1] [i_0])))) || (13205035131763039658 % var_8)));
                var_15 = (((((var_6 | var_3) ^ (((~(arr_3 [i_1 + 1])))))) ^ (max(2147483647, var_11))));
                arr_7 [i_1] [i_0] = (((~var_10) ? ((((arr_3 [i_1 + 1]) ? (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : 538))) : (((arr_1 [i_1 - 1] [i_1 + 1]) - (arr_1 [i_1 - 1] [i_1 - 1])))));
            }
        }
    }
    var_16 = (max((max(var_12, var_5)), ((((var_8 | var_1) < var_11)))));
    var_17 = (((var_11 < var_0) < (max((max(var_5, var_6)), var_1))));
    var_18 -= (var_4 ? (max((~var_6), var_3)) : 9);
    var_19 = ((((var_13 >= (9223372036854775805 | var_11))) ? ((var_9 ? ((var_12 ? var_13 : -26424)) : (var_10 - var_4))) : (max(((var_8 ? var_8 : var_13)), (var_12 > 1)))));
    #pragma endscop
}
