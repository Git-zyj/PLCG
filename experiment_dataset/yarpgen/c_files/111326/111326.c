/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_4 ? var_5 : (max(var_9, var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [14] [i_1] [i_0] = ((~(max((arr_4 [i_0] [i_1] [i_1 + 1]), ((var_7 ? (arr_1 [i_1]) : 592431849474489308))))));
                arr_6 [i_0] = (max((((14050580895969372032 ? 1 : ((0 ? -29 : (arr_3 [i_0] [i_0] [1])))))), ((-(arr_2 [i_1] [i_1])))));
            }
        }
    }
    var_17 = var_11;
    #pragma endscop
}
