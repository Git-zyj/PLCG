/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161127
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
    var_11 -= ((/* implicit */unsigned char) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((unsigned char) (unsigned char)0))) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)8176)), (var_4))))))));
    var_12 = ((unsigned short) (+(-3607953239298704061LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((unsigned char) (unsigned short)15346)))));
        arr_3 [i_0] [i_0] |= var_0;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
    }
}
