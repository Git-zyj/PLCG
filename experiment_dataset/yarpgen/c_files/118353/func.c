/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118353
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
    var_13 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2598898677U)) || (((/* implicit */_Bool) 202808522))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) var_12))))) & ((-(var_7)))))));
    var_14 = ((/* implicit */unsigned short) min((var_14), (var_9)));
    var_15 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) (_Bool)1);
                    arr_6 [i_0] [i_0] = ((/* implicit */signed char) var_1);
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */short) ((var_1) ? (var_7) : (min((((/* implicit */unsigned int) var_12)), (var_7)))));
}
