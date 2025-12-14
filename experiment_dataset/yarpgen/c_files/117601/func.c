/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117601
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
    var_19 = ((/* implicit */signed char) ((unsigned int) ((0U) & (((/* implicit */unsigned int) (((_Bool)1) ? (var_3) : (((/* implicit */int) (_Bool)1))))))));
    var_20 ^= ((/* implicit */short) var_9);
    var_21 = ((/* implicit */_Bool) 2024524694);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        var_22 = ((((/* implicit */unsigned int) ((583202686) << (((int) (_Bool)1))))) != (((((/* implicit */_Bool) 6U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0 - 3] [i_0]))))) : ((-(4294967295U))))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (min((((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-119)))), (min((1018788248U), (((/* implicit */unsigned int) (_Bool)1)))))) : (4294967295U)));
    }
}
