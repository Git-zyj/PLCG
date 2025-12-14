/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106365
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((max((3978389284721079562LL), (((/* implicit */long long int) arr_0 [i_0])))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)1532)) <= (((/* implicit */int) (unsigned char)151)))))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((min(((-9223372036854775807LL - 1LL)), (9223372036854775807LL))) - (-9223372036854775778LL))) + (57LL))))))));
    }
    var_14 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (27ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((min((var_1), (((/* implicit */unsigned long long int) var_10)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
    var_15 = ((/* implicit */signed char) min((((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) -1841230041)), (var_1))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))), (((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */long long int) -1841230041)), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((var_0) / (((/* implicit */long long int) 3131373320U)))) != (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)-123)))))))));
    var_17 = ((/* implicit */signed char) var_10);
}
