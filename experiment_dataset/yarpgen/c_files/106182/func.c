/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106182
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)6091)))))))) * (((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */unsigned long long int) 965041635)) : (((unsigned long long int) var_1))))));
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) : (3606820737U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : (var_4)))), (-5013401771551508907LL))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_2 [(short)5] [(signed char)23] = ((/* implicit */unsigned char) (((-(var_5))) == (((/* implicit */unsigned int) var_0))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)53))));
        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */int) var_3))))) != (((/* implicit */int) ((signed char) arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((int) (-(((/* implicit */int) (signed char)28))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_1]))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_1]))));
    }
}
