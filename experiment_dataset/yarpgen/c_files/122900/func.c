/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122900
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
    var_16 ^= ((/* implicit */_Bool) (unsigned short)28941);
    var_17 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) ((var_6) / (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3141227401U)) ? (4294967295U) : (1904832551U)))) : ((((_Bool)1) ? (var_15) : (((/* implicit */unsigned long long int) 4294967295U))))))));
    var_18 *= var_0;
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        var_19 = var_4;
        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_21 = ((/* implicit */_Bool) min((4294967295U), (max((((/* implicit */unsigned int) (_Bool)0)), (4294967295U)))));
    }
    var_22 = ((/* implicit */_Bool) min((((((_Bool) 3344345664U)) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (4935649816678321195ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (1U)))))), (min((4935649816678321195ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-256)) ? (var_3) : (((/* implicit */int) var_5)))))))));
}
