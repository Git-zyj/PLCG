/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118482
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 ^= ((/* implicit */signed char) (+(((/* implicit */int) (short)1023))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) | (arr_0 [i_0])));
        arr_4 [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (((unsigned int) 3339671570U)))) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    }
    var_21 = var_16;
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */short) var_0)), ((short)-1674)));
}
