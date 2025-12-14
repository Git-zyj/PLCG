/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185280
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned int) (~((-(((/* implicit */int) var_10))))));
        var_21 ^= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(18040188256254358647ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)0] [(signed char)12]))) & (var_3))) : (min((var_4), (((/* implicit */unsigned long long int) (unsigned short)24757))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((min(((signed char)-105), (var_16))), (((/* implicit */signed char) ((((/* implicit */_Bool) 268435455ULL)) && (((/* implicit */_Bool) var_12))))))))) : (((((/* implicit */_Bool) ((short) var_2))) ? (((((/* implicit */_Bool) (short)-10602)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)768))) : (268435428ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3156287841492866290ULL)) ? (((/* implicit */int) arr_2 [8U] [i_0])) : (((/* implicit */int) arr_1 [(_Bool)1] [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */int) arr_0 [i_1]);
        var_24 ^= ((/* implicit */_Bool) arr_0 [2ULL]);
    }
    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 18446744073441116167ULL))));
    var_26 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_17)), ((-(min((((/* implicit */unsigned long long int) var_12)), (18446744073441116166ULL)))))));
}
