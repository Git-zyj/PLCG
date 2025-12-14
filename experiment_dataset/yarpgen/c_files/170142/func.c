/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170142
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
    var_15 = min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_12))))), (((var_2) ? (((/* implicit */unsigned long long int) 1611312546428190360LL)) : (var_13))))), (((/* implicit */unsigned long long int) min((min((4727084148027160197LL), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) ((signed char) var_7)))))));
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (var_11))))) ? (min(((-(602655429082471742ULL))), ((+(18446744073709551602ULL))))) : ((-(max((((/* implicit */unsigned long long int) -137718624)), (12288005752149049806ULL))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) arr_2 [i_0] [i_0]);
        var_17 = ((/* implicit */long long int) ((((/* implicit */long long int) var_6)) <= (arr_0 [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned char) (((~(((long long int) arr_2 [i_0] [(_Bool)1])))) ^ (((((max((arr_0 [(_Bool)1]), (((/* implicit */long long int) -1046672624)))) + (9223372036854775807LL))) >> (((((2879740179218161237LL) & (((/* implicit */long long int) 899112305U)))) - (832003129LL)))))));
    }
}
