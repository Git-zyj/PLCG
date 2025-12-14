/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145252
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
    var_17 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 5150166311733985768LL)) ? (var_15) : (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (2434896439U)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */int) var_1);
        var_19 = ((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_9))));
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) max((arr_1 [10]), (var_2)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_14)) : (var_12)))))) ? (((/* implicit */int) arr_1 [i_0])) : ((+(((/* implicit */int) arr_1 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_21 = ((/* implicit */signed char) (+(var_12)));
        arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) ((unsigned short) var_12))) : ((+(((/* implicit */int) arr_2 [i_1] [(_Bool)1]))))))) - (max((((/* implicit */unsigned long long int) var_11)), (((arr_2 [(unsigned short)20] [(unsigned short)20]) ? (var_7) : (((/* implicit */unsigned long long int) var_5))))))));
        var_22 = ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_3 [i_1])));
    }
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) && (var_16))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((var_5) * (((/* implicit */long long int) ((/* implicit */int) var_16))))))))));
}
