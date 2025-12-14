/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162212
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), ((-(((((/* implicit */_Bool) 11324047487092216532ULL)) ? (min((7122696586617335083ULL), (7122696586617335084ULL))) : (((7122696586617335083ULL) | (11324047487092216532ULL)))))))));
    var_11 = ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) 7122696586617335083ULL)) ? (11324047487092216532ULL) : (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))));
    var_12 = ((/* implicit */unsigned int) min((var_12), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 11324047487092216541ULL))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 7122696586617335057ULL)) && (((/* implicit */_Bool) 11324047487092216532ULL))))))))) ? (max((((/* implicit */unsigned int) ((7122696586617335074ULL) != (11324047487092216532ULL)))), (var_4))) : (((/* implicit */unsigned int) var_6))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 -= ((/* implicit */int) arr_1 [4U]);
        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_6))))) != ((+(((/* implicit */int) arr_1 [i_0])))))) ? ((~(11324047487092216518ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) < (7122696586617335083ULL)))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) ((var_1) & (7122696586617335083ULL))))) ? ((-(7122696586617335110ULL))) : (max(((~(7122696586617335083ULL))), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_9))))));
    }
    var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
}
