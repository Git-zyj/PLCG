/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129249
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) 36028792723996672ULL)))))), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32758))) : (6432855727279608436ULL)))));
        var_19 -= 6406261161886677807ULL;
        arr_2 [(_Bool)1] &= ((/* implicit */short) (~(max((1199607458805092737ULL), (((unsigned long long int) 6406261161886677807ULL))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)8188))))) <= ((+(6406261161886677799ULL)))));
    }
    var_20 = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (6406261161886677807ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-13567))))))))));
}
