/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10887
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
    var_16 = ((/* implicit */signed char) var_4);
    var_17 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) & (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
        var_18 = max((((long long int) max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (arr_0 [i_0])))), (((/* implicit */long long int) max((max((arr_0 [5ULL]), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) / (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        var_19 = ((/* implicit */int) var_2);
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_1] [i_1]))) ? (((/* implicit */int) (unsigned char)24)) : ((~(((((/* implicit */_Bool) (signed char)-40)) ? (var_11) : (((/* implicit */int) arr_1 [i_1] [i_1])))))))))));
        arr_5 [i_1] = ((/* implicit */unsigned int) max((max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_1] [i_1]))) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((((/* implicit */int) (signed char)125)) + (((/* implicit */int) var_4)))))))));
        var_21 = ((/* implicit */long long int) ((short) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)42))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15)))))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_1 [i_1] [i_1]))));
        var_23 = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) -6081204469138491989LL)) == (arr_3 [i_1] [(unsigned char)0]))))) ^ (((/* implicit */int) var_12))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_24 = ((/* implicit */signed char) (-(arr_4 [i_2] [i_2])));
        var_25 = ((/* implicit */unsigned char) arr_4 [i_2] [i_2]);
        var_26 = ((/* implicit */short) arr_6 [i_2] [i_2]);
        var_27 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [i_2] [i_2])))));
    }
}
