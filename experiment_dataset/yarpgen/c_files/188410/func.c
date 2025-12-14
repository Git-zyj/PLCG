/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188410
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
    var_15 = ((/* implicit */_Bool) var_11);
    var_16 ^= ((/* implicit */long long int) ((((unsigned int) (_Bool)1)) > (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) << (((/* implicit */int) var_6)))))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 0U))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((/* implicit */int) (unsigned char)12))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (3089936971U))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned char)44)) / (var_11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        var_18 = ((/* implicit */int) var_12);
        arr_4 [7LL] = ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1)))) : ((+(((((/* implicit */int) var_5)) - (-181561863))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */int) (unsigned char)23);
        arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (var_14)));
    }
}
