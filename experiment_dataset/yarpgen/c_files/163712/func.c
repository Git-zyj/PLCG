/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163712
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
    var_14 = ((/* implicit */unsigned short) (-((~((+(-3959526294941794362LL)))))));
    var_15 = ((/* implicit */unsigned short) var_1);
    var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_17 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) ((((/* implicit */_Bool) 9097021004265736463ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23840))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] &= ((/* implicit */_Bool) (+((-(-3185285172967828311LL)))));
        var_18 = ((/* implicit */unsigned char) (+(arr_2 [i_0] [i_0])));
    }
}
