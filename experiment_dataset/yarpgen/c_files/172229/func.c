/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172229
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
    var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) (signed char)0)))))))) : (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((arr_1 [i_0] [i_0]) >> (((/* implicit */int) (_Bool)1))))))), (((550038406801621472LL) >> (((((/* implicit */int) (short)-10699)) + (10700)))))));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11194229052640522620ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) 274877841408LL)) || ((_Bool)0)))) : (((/* implicit */int) arr_0 [i_0]))));
    }
}
