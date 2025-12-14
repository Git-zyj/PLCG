/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11808
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)103)), (max((((/* implicit */unsigned short) (unsigned char)208)), (var_11))))))) - (((unsigned long long int) (+(var_14))))));
    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned char)29), ((unsigned char)230)))) ^ (((/* implicit */int) ((short) (signed char)63)))))) ? (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)32)), (var_8)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [14LL] [i_0])) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (unsigned char)227))))) != ((-(3983581997401122589ULL)))));
        var_19 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29))) - (var_0))));
    }
    var_20 += ((/* implicit */_Bool) ((max((998775755U), (((/* implicit */unsigned int) var_2)))) - (var_1)));
}
