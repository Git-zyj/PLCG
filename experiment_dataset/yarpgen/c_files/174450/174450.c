/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((7603311780499132239 && 6333905760293514447) ? -20969 : var_0)), (min(92518443, 127))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1 - 1] = (max(((((((arr_2 [i_1]) ? (arr_0 [i_0]) : 4265689872))) ? (((arr_0 [i_1]) ? (-9223372036854775807 - 1) : (arr_1 [i_0]))) : var_10)), var_0));
                arr_5 [i_0] [i_1] [i_1] = (arr_3 [i_0]);
                arr_6 [i_0] [i_1] [i_0] = ((((((((var_4 ? (arr_1 [i_1]) : (arr_2 [i_1]))) < (arr_1 [i_0]))))) >= 4294967295));
            }
        }
    }
    var_12 = var_2;
    var_13 *= (-127 - 1);
    #pragma endscop
}
