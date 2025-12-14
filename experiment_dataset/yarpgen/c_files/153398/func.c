/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153398
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
    var_14 *= ((((/* implicit */_Bool) ((signed char) max((0ULL), (((/* implicit */unsigned long long int) -1151552090142336136LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((2762383342U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) : (var_1));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)3961)) : (arr_1 [i_0]))) % (arr_1 [(_Bool)1])))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)5954)), (arr_1 [i_0])))), (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) (short)3968)))))) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) (short)-3962)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (short)3962)))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) 3669237173U)) >= (arr_0 [9LL] [i_0]))))));
        arr_3 [i_0] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) max((((/* implicit */short) (signed char)114)), ((short)-3933)))) : (arr_1 [i_0]))) >> ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
    }
}
