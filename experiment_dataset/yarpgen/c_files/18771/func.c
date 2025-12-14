/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18771
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
    var_11 *= ((/* implicit */short) var_8);
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned short)32768)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
    var_13 -= ((/* implicit */int) var_3);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))));
        var_15 = ((/* implicit */signed char) (((((_Bool)1) ? (-21LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */long long int) 2147483637))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-456878225)))) ? ((+(var_10))) : (((/* implicit */unsigned long long int) 4294967289U))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (-9223372036854775807LL - 1LL)))) ? (arr_4 [(_Bool)1] [i_1]) : (((((/* implicit */int) var_7)) * (((/* implicit */int) var_3))))));
        var_16 = ((/* implicit */short) max((var_16), ((short)-13305)));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
        var_18 += ((/* implicit */int) (_Bool)1);
        var_19 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (arr_1 [i_2]) : (var_8))) > (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    }
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)59392)), (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
}
