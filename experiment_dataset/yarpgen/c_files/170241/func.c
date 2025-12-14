/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170241
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = (~(((/* implicit */int) arr_1 [(_Bool)1])));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        arr_4 [i_0] = (+((-(((/* implicit */int) (short)-16504)))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(1912984891U))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2298834239177681064ULL))) < (((/* implicit */unsigned long long int) min((197867890U), (((/* implicit */unsigned int) arr_1 [i_1]))))))) ? (min((min((((/* implicit */unsigned long long int) 0LL)), (4517609843478146677ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-8)) ? (2381982405U) : (1912984891U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) min(((_Bool)1), ((_Bool)0)))), (max((((/* implicit */short) var_2)), (var_7)))))) < ((~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) var_9))))))));
}
