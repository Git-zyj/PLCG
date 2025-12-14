/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((143 ? var_14 : 129));
    var_17 |= ((155 ? 126 : 255));
    var_18 |= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_19 += ((120 ? (((var_6 ? (arr_6 [10] [10]) : var_1))) : (min((arr_6 [0] [0]), (arr_1 [i_1 + 1])))));
                var_20 = ((-(((arr_2 [i_1] [i_0]) + (arr_3 [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
