/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152402
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
    for (short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_1 [(unsigned char)0] [i_0 - 1]))))))) * (min(((-(2359088426U))), (max((2247878795U), (((/* implicit */unsigned int) (signed char)0))))))));
        var_13 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (var_11)))));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_0 + 1])), ((+(1756088980U)))))), (((var_8) >> (((/* implicit */int) min((var_12), ((unsigned short)0))))))));
    }
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (var_7))))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
}
