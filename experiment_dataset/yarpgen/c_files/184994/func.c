/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184994
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
    var_15 = ((/* implicit */long long int) (-((+(((/* implicit */int) max((((/* implicit */short) var_6)), ((short)0))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_17 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    var_18 = ((/* implicit */unsigned char) var_8);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (16354832449291513636ULL) : (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */int) (unsigned char)164)) : ((~(((/* implicit */int) var_9))))));
}
