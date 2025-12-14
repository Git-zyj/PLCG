/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_1 ? 113 : ((var_0 >> (var_0 - 157)))));
    var_17 = (max(((max((var_14 - var_0), var_5))), ((var_6 >> (7489551939216456187 - 7489551939216456156)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = var_6;
                var_19 = (min(var_19, ((max((((~(arr_5 [i_0])))), (((arr_0 [i_0] [i_1]) ? (min(var_15, var_9)) : var_8)))))));
                var_20 += 5210648704685587728;
                var_21 = var_3;
            }
        }
    }
    #pragma endscop
}
