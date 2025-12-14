/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150376
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))) : (((var_0) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27325)))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (var_3))) << (((min((((/* implicit */int) (unsigned char)0)), (-1949193222))) + (1949193230)))))) : (var_5)));
    var_19 = ((/* implicit */short) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) ((short) arr_2 [i_0]))) : (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) var_13))))));
        var_21 = ((/* implicit */_Bool) ((arr_0 [i_0 - 1]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
    }
}
