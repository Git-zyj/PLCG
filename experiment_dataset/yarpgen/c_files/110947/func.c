/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110947
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
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_2 [i_0])) << (((arr_0 [i_0 - 4]) - (744784741570136651ULL)))))));
        var_19 -= (((((_Bool)1) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) (signed char)105)))) + (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) arr_2 [7])))));
    }
    var_20 &= ((/* implicit */int) var_0);
    var_21 = ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) ((((long long int) var_9)) <= (var_4)))) : (((/* implicit */int) ((((/* implicit */int) min((var_14), (((/* implicit */unsigned short) (unsigned char)191))))) > (-1907750615)))));
}
