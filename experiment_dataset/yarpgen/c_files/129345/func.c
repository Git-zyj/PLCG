/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129345
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((long long int) arr_0 [i_0])) > (var_5)));
        var_17 = min((((((2269814212194729984LL) <= (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (~(-437535761)))) : (var_7))), (((/* implicit */long long int) (unsigned char)176)));
        arr_3 [i_0] = ((/* implicit */short) ((((var_7) + (9223372036854775807LL))) << (((min((min((679019224U), (((/* implicit */unsigned int) 1623056995)))), (((/* implicit */unsigned int) var_11)))) - (110U)))));
        arr_4 [i_0] = ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */long long int) min((((/* implicit */int) var_2)), (((((/* implicit */int) var_4)) ^ (var_3)))))) : (max((((((/* implicit */_Bool) 4811277554809645532ULL)) ? (-7830498968864120754LL) : (((/* implicit */long long int) 4194300U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4522079432997473287LL)) || (((/* implicit */_Bool) var_3))))))));
    }
    var_18 &= (((-(((/* implicit */int) var_0)))) >= (((/* implicit */int) ((var_6) <= (31LL)))));
    var_19 = ((/* implicit */unsigned char) (~(((unsigned int) (unsigned char)102))));
}
