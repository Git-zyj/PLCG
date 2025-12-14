/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116396
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
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (var_15) : (((/* implicit */unsigned long long int) 3511353580U)))) >> (((var_14) - (3762280645U)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0])))), (min((var_4), (((/* implicit */unsigned long long int) 783613709U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0])))))) : (max((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_0 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((signed char) ((unsigned long long int) ((5460621562861300625ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((_Bool) var_11));
        var_19 |= ((/* implicit */int) arr_0 [24]);
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) (_Bool)1))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (296980879U)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) arr_6 [i_1]))))));
    }
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (signed char)-121))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_9)))), (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 67108862ULL)) ? (536869888ULL) : (18446744073709551610ULL)));
    var_23 = ((/* implicit */unsigned long long int) 1396641042U);
}
