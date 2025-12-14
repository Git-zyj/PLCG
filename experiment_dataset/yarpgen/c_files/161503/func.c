/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161503
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
    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)17131))));
    var_21 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((short) 2638488532U))) ? (var_0) : (((/* implicit */int) max(((short)-17131), ((short)-17131)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = (((!(((/* implicit */_Bool) 1181089385212305652ULL)))) ? (((/* implicit */unsigned long long int) 1610132406)) : (var_3));
        arr_4 [i_0] = ((/* implicit */unsigned short) (~(var_19)));
        var_22 *= ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
        var_23 = ((long long int) 1181089385212305664ULL);
    }
}
