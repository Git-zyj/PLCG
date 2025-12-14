/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145352
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned long long int) var_3)) : (5934745500503267430ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (min((((/* implicit */unsigned long long int) (unsigned char)2)), (5934745500503267430ULL))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) ((5934745500503267430ULL) % (((/* implicit */unsigned long long int) 1747569945U))))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (var_1))))) : ((+(min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_13))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_15)) < (arr_2 [i_1]))) ? (((/* implicit */int) ((unsigned char) var_12))) : (min((arr_2 [i_1]), (((/* implicit */int) var_12))))));
        var_21 *= ((/* implicit */unsigned char) min((((short) (+(((/* implicit */int) (unsigned char)62))))), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))));
    }
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) var_14)))))));
}
