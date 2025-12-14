/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123004
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
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) var_17)) | (((/* implicit */int) (unsigned char)255)))))))));
    var_21 = ((/* implicit */_Bool) ((((var_3) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_5)) : (-1218403304)))) : (var_16))) << (((/* implicit */int) (unsigned short)3))));
    var_22 = ((/* implicit */short) max((var_22), ((short)11369)));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_2 [13U] [13U] = ((((/* implicit */_Bool) ((18446744073709551613ULL) / (((/* implicit */unsigned long long int) 791964293U))))) ? (((/* implicit */int) var_19)) : ((~(((/* implicit */int) arr_0 [i_0 + 1])))));
        var_23 -= ((/* implicit */unsigned char) ((arr_0 [i_0 + 1]) ? ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2189917325U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)168)) >> (((/* implicit */int) (_Bool)1)))))));
        var_24 &= ((/* implicit */unsigned short) arr_0 [i_0]);
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2105049961U)))) ? (((2189917341U) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : ((+(2189917319U)))))) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (_Bool)0)))))));
    }
}
