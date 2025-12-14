/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157837
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_1 [i_0]))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)2), (((/* implicit */signed char) (_Bool)1)))))) : (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
        var_21 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((short) arr_1 [i_0]))), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_22 = ((/* implicit */signed char) (+(arr_3 [i_1])));
        arr_4 [i_1] &= ((/* implicit */long long int) ((max((arr_3 [i_1]), (arr_3 [i_1]))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
        var_23 = ((/* implicit */unsigned short) max((1023U), (((/* implicit */unsigned int) (_Bool)1))));
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2])) ^ (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : (max((((/* implicit */unsigned int) arr_7 [i_2] [i_2])), (var_2)))))) ? (((/* implicit */int) max((arr_5 [i_2]), (arr_5 [i_2])))) : (((/* implicit */int) max((var_13), (((/* implicit */short) arr_5 [i_2])))))));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2])) > (var_14)));
        var_26 = ((/* implicit */unsigned short) max(((~(var_18))), (max((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */int) var_6))))), (var_18)))));
        var_27 = ((/* implicit */unsigned int) var_7);
    }
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-30972))))), ((~(var_16))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
    var_29 += ((/* implicit */unsigned short) var_17);
}
