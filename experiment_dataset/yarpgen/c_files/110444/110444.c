/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((((min((arr_3 [i_1] [i_0]), var_6))) || 1322810375)))));
                arr_4 [i_1] = (((((1 ? var_0 : ((-9443 ? (arr_3 [i_0] [i_1]) : 1085713139830934528))))) ? (((((arr_2 [i_1] [i_1] [i_1]) ? -1369166831 : (arr_3 [i_0] [i_1]))) | (1 ^ var_0))) : (((((arr_2 [i_0] [i_0] [i_1]) && (8083742430185546974 && 3434299868712821333)))))));
                var_17 = (max(((~(arr_0 [i_0]))), ((max((((arr_3 [i_0] [16]) << (var_4 - 44270))), -var_4)))));
                arr_5 [i_0] = (+(((arr_1 [i_0] [i_1]) ? ((-13 ? 1 : 1923540717)) : ((var_11 ? (arr_1 [i_0] [i_1]) : 2593771823)))));
            }
        }
    }
    var_18 = (min(var_18, (((var_11 ? (1 > var_3) : ((var_11 ? -26983 : 1)))))));
    #pragma endscop
}
