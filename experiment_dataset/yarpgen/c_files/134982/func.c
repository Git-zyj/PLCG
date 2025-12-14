/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134982
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((unsigned long long int) var_12))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_15 = var_12;
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((((var_10) ^ (var_9))) % (((unsigned long long int) 288230376084602880ULL)))) % (((((((/* implicit */_Bool) var_6)) ? (5070238488097745657ULL) : (var_4))) ^ (var_6)))))));
        arr_2 [i_0] = max((var_10), (((unsigned long long int) max((8526225992349449296ULL), (5070238488097745658ULL)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_17 = 11486177845483780502ULL;
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
    }
    var_19 = ((unsigned long long int) ((unsigned long long int) ((((/* implicit */_Bool) 9007199254740991ULL)) ? (14299062776672165599ULL) : (8329499283619240594ULL))));
    var_20 = ((/* implicit */unsigned long long int) ((9872227028870796736ULL) >= (0ULL)));
}
