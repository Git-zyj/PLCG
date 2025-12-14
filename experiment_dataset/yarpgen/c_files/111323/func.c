/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111323
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)10))))), ((+(8959204307319447091LL)))));
        arr_2 [i_0] = ((1460845647740726051LL) <= (-6220815887625557774LL));
        arr_3 [(short)14] |= ((/* implicit */unsigned short) (unsigned char)4);
        arr_4 [i_0] = ((((/* implicit */long long int) (+(arr_1 [i_0])))) / (((((/* implicit */long long int) arr_1 [i_0])) | (-6220815887625557762LL))));
    }
    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) max(((((_Bool)0) ? (12369821960166841099ULL) : (((/* implicit */unsigned long long int) 17U)))), (((/* implicit */unsigned long long int) var_3)))))));
    var_14 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((4294967295U) & (((/* implicit */unsigned int) 2147483647))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (unsigned char)244))))));
}
