/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153875
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
    var_19 ^= ((/* implicit */long long int) 4632167045088854743ULL);
    var_20 = ((/* implicit */unsigned char) ((((((var_8) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (1476886161U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) && (((/* implicit */_Bool) 3283011568U))));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_1))))))) == (min((min((3639651010U), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))) == (var_17)))))))))));
    var_22 ^= ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)249);
        var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_17)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0]))))) : (((arr_0 [i_0]) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250)))))));
        var_24 = ((/* implicit */unsigned char) ((((arr_1 [i_0 - 2] [i_0]) | (arr_1 [i_0] [i_0 - 2]))) << (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))) : (var_0))) - (143ULL)))));
    }
}
