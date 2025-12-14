/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131269
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_6)) != (min((((/* implicit */unsigned long long int) (-(-262144)))), (min((((/* implicit */unsigned long long int) var_16)), (var_8)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_1 [i_0]), (var_10))))));
        var_19 = ((/* implicit */unsigned char) ((arr_0 [i_0] [i_0]) ^ (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (unsigned char)35))))) < (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (0LL) : (((/* implicit */long long int) arr_0 [i_0] [i_0])))))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_1 [8ULL]))));
    }
}
