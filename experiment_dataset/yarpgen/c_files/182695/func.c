/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182695
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
    var_12 ^= ((/* implicit */_Bool) var_4);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) ^ (arr_1 [i_0])))) ? (((((/* implicit */int) arr_0 [i_0])) >> (((min((((/* implicit */long long int) (unsigned char)255)), (9223372036854775807LL))) - (253LL))))) : ((-(((/* implicit */int) arr_0 [i_0]))))));
        var_14 |= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) & ((~(28ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = (_Bool)1;
        var_16 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) (unsigned char)55))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [15LL]), (arr_0 [i_1]))))) : (((((/* implicit */unsigned long long int) 2107003056797272257LL)) % (arr_2 [(_Bool)1]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)25))))));
        var_17 ^= ((/* implicit */signed char) arr_1 [i_1]);
        var_18 *= ((/* implicit */unsigned long long int) (((-(2107003056797272258LL))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-17)))));
        var_19 ^= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 9223372036854775807LL)))) : (max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))))));
}
