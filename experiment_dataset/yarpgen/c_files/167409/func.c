/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167409
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_13))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */long long int) var_1)) | (arr_0 [i_0])))) ? (max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (5057819178275872853LL))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned long long int) (signed char)111));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)71))))));
        var_21 -= ((/* implicit */short) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) 1674003453998704404LL))));
    }
}
