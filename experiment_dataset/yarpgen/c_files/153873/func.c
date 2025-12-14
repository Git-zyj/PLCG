/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153873
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
    var_15 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (min((-2629267430872161865LL), (((/* implicit */long long int) var_4)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_13)))), ((-(((/* implicit */int) arr_1 [i_0] [i_0 + 3]))))))), (var_5)));
        var_17 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 2629267430872161843LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) var_7)))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)2921))))));
    }
    var_18 = ((/* implicit */short) var_5);
}
