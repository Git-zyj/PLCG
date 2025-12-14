/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12323
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((((/* implicit */unsigned long long int) -809336786)) - (arr_2 [i_0]));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) 746485325))));
        arr_3 [i_0] &= ((/* implicit */unsigned char) ((long long int) 2930758328758158757ULL));
    }
    var_21 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) >> (((1993121158) - (1993121156)))))), (var_0)))), (8919444398144000223LL)));
    var_22 = ((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) var_5))));
}
