/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110616
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) ((signed char) max((var_7), (var_7))));
        var_19 = ((((/* implicit */_Bool) min((((long long int) (unsigned short)21487)), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_17)), (var_5))))))) || (((/* implicit */_Bool) arr_0 [i_0])));
        var_20 = ((/* implicit */long long int) min((var_20), ((~(((var_3) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_15)))) : ((-(var_8)))))))));
    }
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77))) : (((unsigned int) ((long long int) (unsigned char)255))))))));
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_17)), (var_12)))) : (((/* implicit */int) var_17)))) <= (((/* implicit */int) ((unsigned char) var_11))))))));
    var_23 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
}
