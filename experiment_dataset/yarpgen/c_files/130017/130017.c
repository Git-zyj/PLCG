/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_11 &= ((127 ? (((arr_1 [i_1] [i_0]) ? (((min((arr_4 [i_1 - 1]), var_8)))) : (arr_2 [i_1 + 1] [i_1]))) : ((((5819 == (24 + var_4)))))));
                var_12 = (arr_3 [i_1 - 1] [i_1 + 3] [i_1]);
                arr_6 [i_1 + 2] [i_1 + 1] = arr_5 [i_0] [i_0] [23];
                var_13 = (max(((((arr_4 [i_0]) >= (arr_2 [i_1] [i_1 + 3])))), (((arr_3 [i_0] [i_1] [i_1 + 1]) ? 2147483647 : (arr_3 [i_0] [i_0] [i_1 + 2])))));
            }
        }
    }
    var_14 |= var_3;
    var_15 = ((var_2 ? var_3 : (max((-5476 - var_10), var_3))));
    #pragma endscop
}
