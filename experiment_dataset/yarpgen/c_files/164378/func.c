/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164378
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) 67108863);
        var_19 = ((((/* implicit */_Bool) 8589672448LL)) ? (max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))) : (min((arr_1 [i_0]), (1023LL))));
        arr_4 [i_0] |= ((/* implicit */signed char) var_14);
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-7609743998809107837LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) 70368744177663ULL))));
    }
    var_21 = ((/* implicit */unsigned short) (-(9223372036854775807LL)));
    var_22 = ((/* implicit */_Bool) min(((+(var_8))), ((+(min((var_18), (((/* implicit */long long int) var_17))))))));
    var_23 = ((/* implicit */long long int) min((((var_4) - (var_4))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned short)4460), ((unsigned short)0)))))))));
}
