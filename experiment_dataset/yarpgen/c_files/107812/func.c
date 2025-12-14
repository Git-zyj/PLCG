/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107812
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (short)17297)) != (((/* implicit */int) (unsigned short)1))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3)));
    var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_20 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0])) ? (((/* implicit */int) (short)17297)) : (var_8))))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) -4583757698830992696LL))))));
        var_21 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) 5298500300084880676LL)) ? (-5298500300084880660LL) : (((/* implicit */long long int) -1622521091)))) >= (((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */long long int) var_1);
        var_22 *= ((/* implicit */signed char) var_13);
        arr_4 [i_0] = ((/* implicit */short) ((unsigned int) -612781228));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_9 [i_1] = ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */long long int) arr_6 [i_1])) : (arr_5 [i_1]));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (arr_6 [i_1]) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_6 [i_1])) : (arr_7 [i_1] [i_1])))));
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))));
}
