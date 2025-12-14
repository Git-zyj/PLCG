/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108748
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 11913800963067317396ULL)))) ? (((/* implicit */unsigned long long int) var_4)) : (var_6)))) ? (min((((/* implicit */unsigned long long int) var_13)), (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((15079853), (((/* implicit */int) (short)-4638))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((((/* implicit */unsigned int) var_5)), (var_3))))))));
    var_20 = ((((((/* implicit */unsigned long long int) var_16)) | (11783179347835183223ULL))) & (((/* implicit */unsigned long long int) var_1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_18)) & (6532943110642234218ULL)));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 277104501608053051ULL)) ? (((unsigned long long int) var_15)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50)))));
    }
    var_23 |= ((/* implicit */_Bool) (-((+(9223372036854775796LL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + ((-(((12481920296827387247ULL) ^ (((/* implicit */unsigned long long int) 3449502986U))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */short) ((((min((var_6), (((/* implicit */unsigned long long int) var_12)))) - (max((12481920296827387243ULL), (((/* implicit */unsigned long long int) var_5)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-52))))));
    }
}
