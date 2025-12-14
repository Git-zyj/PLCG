/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156609
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_19 -= ((/* implicit */unsigned char) ((unsigned int) var_3));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+(((/* implicit */int) (short)32753)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((((var_0) && (((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) : (((((/* implicit */unsigned int) -1648093468)) | (2522762393U)))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) % (9430176246343578961ULL)));
    }
    var_23 = ((/* implicit */signed char) (short)32753);
    var_24 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-32759)), (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) (short)32753)) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6144))))))) & (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) (unsigned short)45958)), (3112422036U))))))));
}
