/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172129
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137))) | (2067249953U)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_9)) ? (var_4) : (var_4))) : (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */int) var_12)))))));
        var_16 ^= ((((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1900920979))))))))) ? ((-((-(arr_0 [11]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_11)))) > (((/* implicit */int) (signed char)56))))));
        arr_2 [i_0] = ((((unsigned int) arr_1 [i_0] [i_0])) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-6073))))));
    }
}
