/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147228
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
    for (long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0 + 3] [i_0 - 3]))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0 - 2] [i_0 + 1])), (((0U) << (((((/* implicit */int) arr_0 [i_0 + 4] [i_0 + 1])) + (86)))))))) ? (((long long int) ((_Bool) var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(unsigned short)13]))))) < (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [4ULL] [i_0 - 1])), ((unsigned char)255)))))))))));
    }
    var_19 = ((/* implicit */long long int) (unsigned char)163);
    var_20 = ((/* implicit */_Bool) var_6);
}
