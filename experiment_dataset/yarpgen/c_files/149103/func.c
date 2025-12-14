/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149103
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) <= (2321855775115279282LL))), (var_8))))) + (min((var_6), (((var_7) % (var_0)))))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65531)) & (((/* implicit */int) (unsigned short)65531))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */unsigned int) var_9)) : (var_6)))))));
    var_13 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) + (2147483647))) << (((/* implicit */int) var_10))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)25)) & (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 4]))));
        var_15 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))));
        var_16 = ((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0 + 2]);
    }
    var_17 = ((/* implicit */unsigned int) max((var_17), (var_4)));
}
