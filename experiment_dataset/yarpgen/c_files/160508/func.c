/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160508
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
    var_17 = ((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_4))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) ^ (var_8))) - (1570484361U)))))) - ((~(var_1))));
    var_18 = ((/* implicit */unsigned long long int) ((unsigned char) var_4));
    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (((unsigned int) var_11))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [4U] = ((/* implicit */int) arr_0 [i_0]);
        arr_4 [(signed char)9] [i_0] = ((/* implicit */int) arr_1 [i_0]);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22941))) : (5709127566561187277ULL))))))) : (min((((((/* implicit */int) arr_2 [i_0])) >> (((2343765911080781515ULL) - (2343765911080781497ULL))))), ((-(var_14)))))));
        arr_5 [i_0] [i_0] |= ((/* implicit */long long int) arr_1 [i_0]);
    }
}
