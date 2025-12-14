/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166548
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */int) ((var_8) == (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) ((((4294967295U) >> (((1071644672U) - (1071644646U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [3]) ? (arr_2 [i_0]) : (arr_1 [i_0])))) ? (((arr_1 [i_0]) - (arr_2 [i_0]))) : (arr_2 [i_0]))))));
        arr_5 [i_0] = (((~(arr_3 [i_0] [i_0]))) <= (((arr_3 [i_0] [i_0]) | (arr_3 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 += arr_3 [i_1] [16];
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((short) arr_6 [i_1] [(_Bool)1])))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((arr_13 [i_1] [i_3 - 1] [i_3] [i_3]) * (arr_13 [i_1] [i_3 - 1] [(short)6] [i_4])));
                        var_18 += ((/* implicit */unsigned int) ((arr_1 [i_2]) >> (((arr_1 [i_1]) - (1541208926)))));
                    }
                } 
            } 
        } 
    }
    var_19 += ((/* implicit */int) ((short) ((((var_13) / (((/* implicit */int) var_9)))) * (((/* implicit */int) var_9)))));
}
