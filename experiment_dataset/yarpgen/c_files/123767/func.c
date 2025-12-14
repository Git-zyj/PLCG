/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123767
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
    var_15 = ((/* implicit */unsigned long long int) 4099896550U);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((((unsigned long long int) arr_0 [i_0])), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)9942)) : (((/* implicit */int) (_Bool)1)))))));
        var_17 = ((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [8LL])) ? (((/* implicit */int) arr_0 [(signed char)2])) : (((/* implicit */int) (unsigned char)76))))) ? (((/* implicit */int) (!((_Bool)1)))) : ((+(((/* implicit */int) (_Bool)1))))))) ? (((long long int) min((var_12), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) : (min((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), ((-(-3621528197837893546LL)))))));
    }
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) ((short) var_5))) & (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_7)))))))), (((long long int) ((unsigned short) (unsigned short)65535)))));
}
