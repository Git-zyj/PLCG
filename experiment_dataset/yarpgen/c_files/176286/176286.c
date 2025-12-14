/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 |= (((((~((65535 ^ (arr_0 [2])))))) ? (~-103) : (((((-(arr_3 [i_0] [i_0])))) ? ((((!(arr_3 [i_0] [i_1]))))) : (min((arr_3 [i_0] [i_0]), 65523))))));
                var_19 *= (max(((max(((((arr_4 [i_0] [4]) > 108))), (arr_0 [16])))), (((((arr_0 [4]) << (((arr_3 [5] [i_1]) + 5638266914984743949)))) >> (((arr_2 [i_0]) - 170))))));
                var_20 = (min((((arr_2 [i_1]) ? (arr_1 [i_0]) : -2945231163136903562)), (max((max(148, (arr_3 [i_0] [i_1]))), (arr_2 [i_0])))));
                arr_5 [i_0] [i_1] = max(((48 <= ((max(39, -118))))), (arr_0 [i_0]));
            }
        }
    }
    var_21 = ((var_3 ? (var_12 | var_4) : (min(var_4, (~var_17)))));
    var_22 -= var_14;
    #pragma endscop
}
