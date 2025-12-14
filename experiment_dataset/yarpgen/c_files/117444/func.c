/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117444
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
    var_20 = ((/* implicit */signed char) max(((~(((((/* implicit */_Bool) var_9)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))))))), (((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_5)), ((short)-9)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((short) var_15)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_0))))) ? (max((((/* implicit */unsigned long long int) var_4)), (3953063679445997837ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)113)) == (((/* implicit */int) arr_0 [i_0])))))));
    }
    var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((2748601670018480697LL), (((/* implicit */long long int) (signed char)57))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)44))))) : (var_6))) * (((/* implicit */unsigned long long int) min((max((69805794224242688LL), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 7195995914132933622LL))))))))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */long long int) ((/* implicit */int) var_17))) & (((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_13))))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) 4989509913879949497LL)) ? (((/* implicit */int) (short)-8246)) : (((/* implicit */int) (short)26120)))))))));
}
