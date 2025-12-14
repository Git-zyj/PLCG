/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110331
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_15 = (_Bool)0;
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8064))) != (4294967273U))))));
        arr_3 [i_0] = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) -3470918384141605369LL)))) || (((/* implicit */_Bool) arr_0 [i_0])))) && (((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 4294967295U)))) || (((/* implicit */_Bool) ((int) var_9)))))));
    }
    var_16 = ((/* implicit */unsigned int) ((min((((((/* implicit */int) var_1)) * (((/* implicit */int) var_6)))), (((/* implicit */int) ((unsigned char) var_11))))) >> (((((/* implicit */int) ((short) ((long long int) var_10)))) + (26956)))));
}
