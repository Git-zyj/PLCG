/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155973
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)9061)) ? (min((((/* implicit */unsigned long long int) var_0)), (12442405256954411260ULL))) : (var_5))))))));
        var_11 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) ? (((unsigned long long int) arr_0 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), (arr_1 [i_0])))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_4)) + (1552056112)))))));
    }
    var_12 |= ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) var_3))))), (((long long int) var_4))));
    var_13 = ((/* implicit */unsigned short) (-(1686494278)));
}
