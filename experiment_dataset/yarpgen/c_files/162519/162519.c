/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = ((1555233546 << (!var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_22 = var_4;
                var_23 = (max(var_23, ((((((((1 || (arr_0 [i_0])))))) && (var_11 - var_12))))));
                var_24 = ((+((max((min((arr_3 [i_1] [i_1]), var_8)), (arr_3 [i_1] [i_0]))))));
                var_25 = (max(var_25, (((((arr_1 [i_0]) * -32751))))));
                var_26 = ((((max((!6), 149)))) - (min(((max(4294967290, 0))), 70093866270720)));
            }
        }
    }
    var_27 = (((((var_7 - var_0) - ((var_14 / (-9223372036854775807 - 1))))) != var_5));
    #pragma endscop
}
