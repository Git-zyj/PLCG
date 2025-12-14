/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134392
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
    var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2437850265349319746LL)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-53)) < (((/* implicit */int) max(((signed char)77), (((/* implicit */signed char) (_Bool)1)))))))) : (((/* implicit */int) max((var_15), (((/* implicit */short) ((((/* implicit */int) var_3)) >= (var_2)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)90))) : (max((-2437850265349319746LL), (-2437850265349319746LL))))), (((/* implicit */long long int) ((((unsigned long long int) (signed char)-50)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) ((arr_1 [(unsigned short)5]) < (arr_1 [i_0])))) : (((((/* implicit */int) (unsigned char)94)) + (((/* implicit */int) (unsigned char)243))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_14))));
    }
    var_22 *= ((/* implicit */unsigned char) max((var_3), (((((/* implicit */int) var_5)) > (((/* implicit */int) ((var_16) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119))))))))));
}
