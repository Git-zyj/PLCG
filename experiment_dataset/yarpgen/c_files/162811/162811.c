/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_10 = (((((156 ? var_4 : (var_9 - 2917039957)))) ? (((var_0 ? 7 : (arr_2 [i_0])))) : ((1226587355 ? (var_9 / 3530811135) : ((((arr_5 [i_0]) ? 239 : 239)))))));
                var_11 *= ((((((249 != (arr_6 [i_0] [8] [i_0])))) | (min(245, 1958501794)))));
                var_12 = ((!((((arr_5 [i_0]) ? ((248 ? var_9 : var_4)) : var_5)))));
                var_13 = (((var_4 ? (arr_0 [i_1]) : (arr_1 [i_0] [i_1]))) * (max((arr_2 [i_0]), 228)));
                arr_7 [i_1] = (((((-553689388 || (arr_0 [i_0])))) <= ((((((arr_4 [i_0] [i_0] [i_0]) ? (arr_5 [i_0]) : (arr_6 [i_1] [i_1] [i_1]))))))));
            }
        }
    }
    var_14 = (max(var_14, ((var_7 * ((var_4 * (min(var_5, var_4))))))));
    var_15 = (!var_9);
    #pragma endscop
}
