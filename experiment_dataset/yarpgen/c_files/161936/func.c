/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161936
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
    var_18 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43023)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (3965456391U)))) || (((/* implicit */_Bool) (-(18446744073709551613ULL)))))));
    var_19 = ((unsigned short) ((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (arr_1 [i_0])));
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
}
