/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145275
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
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */long long int) var_4)) : (var_13)));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned char i_1 = 2; i_1 < 7; i_1 += 1) 
    {
        arr_5 [i_1 + 1] &= ((/* implicit */unsigned char) var_14);
        arr_6 [i_1 + 2] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) var_8)), (8280249609929639207ULL))), (((/* implicit */unsigned long long int) var_3))));
        arr_7 [i_1] = var_6;
    }
    var_18 = ((/* implicit */unsigned long long int) max((var_9), (((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)1) ? (1731603514U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
    var_19 = min((((/* implicit */signed char) (_Bool)1)), (var_9));
}
