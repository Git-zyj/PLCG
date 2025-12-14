/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148259
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */unsigned short) ((5217997936007937282LL) > (-5217997936007937281LL)));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 5217997936007937311LL)) ? (-5217997936007937267LL) : (-5217997936007937312LL))))));
    }
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) var_5))))), ((+(max((9020332205426582880LL), (((/* implicit */long long int) var_12))))))));
    var_16 = var_10;
    var_17 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 9020332205426582900LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-244445502088782561LL)));
}
