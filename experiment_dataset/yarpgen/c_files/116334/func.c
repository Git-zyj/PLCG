/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116334
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
    var_10 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_7)) ? (min((var_3), (((/* implicit */int) (signed char)80)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (signed char)84))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((((arr_2 [i_0]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-7426271918237949129LL)))))) ? (((/* implicit */unsigned long long int) 3202928554190075527LL)) : ((-(arr_2 [i_0]))));
        var_11 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24457))) ^ (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (-1)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) 7426271918237949131LL)) : (arr_2 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 15204658110656074586ULL)) && (((/* implicit */_Bool) 6079732369836653554ULL))))), (arr_1 [i_0])))) >> (((max((((unsigned long long int) (signed char)127)), (min((((/* implicit */unsigned long long int) 7426271918237949138LL)), (18446744073709551615ULL))))) - (7426271918237949110ULL)))));
        var_12 = ((/* implicit */long long int) (+(((arr_0 [i_0]) ^ (arr_0 [i_0])))));
    }
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_1) ^ (14079141851511275173ULL))), (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) 3451515221U)) : (var_6)))))) ? (((/* implicit */unsigned long long int) var_3)) : (var_0)));
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) 3773284475U))));
}
