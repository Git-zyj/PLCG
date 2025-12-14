/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114728
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(short)2] [4ULL])))))) % (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) 0U))))), (arr_1 [i_0] [i_0])))));
        var_20 *= ((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) 8340816477038778301LL)) || (((/* implicit */_Bool) var_6))))), (-8340816477038778309LL)))));
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8340816477038778307LL)) ? (((/* implicit */long long int) 951855404U)) : (8340816477038778308LL))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8340816477038778326LL)) ? (((/* implicit */long long int) var_2)) : (var_7)))) ? (-8340816477038778302LL) : (max((((/* implicit */long long int) -23)), (var_12))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) ^ (var_19))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1] [i_1])) ^ (((/* implicit */int) arr_5 [i_1] [i_1])))))));
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)10582))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2]))) < (arr_6 [i_2])))) : (((/* implicit */int) ((short) arr_1 [i_2] [i_2])))));
        var_24 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) -8340816477038778308LL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (10513712973283206036ULL))) <= (((((/* implicit */_Bool) (+(4294967295U)))) ? (max((7ULL), (((/* implicit */unsigned long long int) 8340816477038778300LL)))) : (((/* implicit */unsigned long long int) arr_7 [i_2]))))));
    }
    var_25 ^= ((/* implicit */short) var_18);
    var_26 = ((/* implicit */int) max((8340816477038778301LL), (-8340816477038778319LL)));
}
