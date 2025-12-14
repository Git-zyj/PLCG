/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (arr_4 [i_0] [i_1] [i_1]);
                arr_6 [i_0] = ((((((var_16 ? 4294967295 : (arr_0 [i_0]))))) ? (min(var_14, ((2816784970859728976 ? (arr_2 [i_0]) : 676414320525296181)))) : (((min(var_13, 191))))));
                arr_7 [i_0] [i_0] [i_0] = (max((((arr_0 [i_0 - 4]) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 1]))), (((((max(var_13, -7142213822521870600))) ? (((max(-27932, var_16)))) : var_0)))));
                arr_8 [i_0] [i_0] [i_0 - 4] = ((min(((16 ? 0 : 3508887720)), ((max(var_17, (arr_0 [i_0])))))));
            }
        }
    }
    var_19 = var_9;
    var_20 = var_14;
    #pragma endscop
}
