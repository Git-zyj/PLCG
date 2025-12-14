/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115101
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((_Bool) min((arr_0 [i_0 + 1] [i_0 + 3]), (arr_0 [i_0 - 1] [i_0 - 1])))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-7280896675230319752LL)))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)98))))), (-7280896675230319752LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-17704)))))));
        var_21 = ((/* implicit */unsigned short) max(((_Bool)1), (arr_0 [i_0] [i_0 + 1])));
    }
    var_22 = ((/* implicit */signed char) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) (unsigned short)63)))) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_18)))))))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)12268))))) ? (((var_1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) (unsigned short)43271)) + (((/* implicit */int) var_6))))))) ? (min((((((/* implicit */int) (short)-26313)) & (((/* implicit */int) (short)29715)))), (((/* implicit */int) var_15)))) : (((/* implicit */int) var_15))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((_Bool) ((signed char) (unsigned short)32640)))) : (((/* implicit */int) var_1))));
}
