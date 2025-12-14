/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186348
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) min((25U), (((/* implicit */unsigned int) (short)23530))));
        var_13 = ((/* implicit */short) (~(2285144805U)));
        var_14 = var_1;
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [(unsigned short)1] [(unsigned short)1] = ((/* implicit */short) arr_5 [i_1]);
        var_15 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (short)-23531)) || (((/* implicit */_Bool) 15433135965689883484ULL)))));
        var_16 *= ((/* implicit */long long int) 18446744073709551615ULL);
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-119)) - (((/* implicit */int) ((max((var_4), (((/* implicit */int) (short)-32072)))) == ((~(((/* implicit */int) var_8)))))))));
}
