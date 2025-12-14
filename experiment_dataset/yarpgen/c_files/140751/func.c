/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140751
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
    var_14 -= ((/* implicit */unsigned int) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) 15)) / (1609008306U)));
    }
    for (int i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_7)) - (((/* implicit */int) (_Bool)1))))))), (max((max((((/* implicit */long long int) 4095)), (var_10))), (max((var_10), (((/* implicit */long long int) (_Bool)1))))))));
        var_17 -= ((/* implicit */unsigned char) max((max((var_10), (((/* implicit */long long int) (short)10484)))), (((/* implicit */long long int) (~(((/* implicit */int) (short)-10484)))))));
    }
}
