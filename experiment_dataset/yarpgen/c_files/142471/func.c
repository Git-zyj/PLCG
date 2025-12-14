/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142471
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
    for (short i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) ((9212083274521078435ULL) / (9212083274521078423ULL)));
        var_13 = ((/* implicit */_Bool) min((arr_1 [(unsigned char)14]), (((/* implicit */long long int) ((((((/* implicit */long long int) -114628192)) >= (arr_1 [i_0 + 1]))) ? (((4127147391U) >> (((arr_0 [i_0]) - (1292155402983762693ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))))))));
        var_14 = ((/* implicit */short) arr_0 [i_0]);
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (+(1735924011265732363LL))))));
    }
    var_16 = ((var_7) >> (((var_11) + (4917871335421694256LL))));
}
