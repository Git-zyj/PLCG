/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186054
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0 - 3] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (max((((/* implicit */unsigned int) (signed char)14)), (3609946191U))) : (((/* implicit */unsigned int) (~(var_0)))))) == (var_8)));
                var_15 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (((((/* implicit */unsigned int) 664294017)) | (var_8)))))) ? (((/* implicit */int) (signed char)-21)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (signed char)-52))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */int) (_Bool)1)))))));
                var_16 = ((/* implicit */short) arr_1 [i_0]);
            }
        } 
    } 
    var_17 ^= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))))))))));
}
