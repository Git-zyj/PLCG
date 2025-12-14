/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185244
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) 3479533959U);
        var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (815433334U) : (815433334U)))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_20 = (((((!(((/* implicit */_Bool) var_11)))) ? (((var_11) << (((3479533961U) - (3479533957U))))) : (((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_1 - 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))))))) == (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned char)227)))), (((((/* implicit */int) (signed char)69)) | (((/* implicit */int) var_5))))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) << (((/* implicit */int) arr_5 [i_1] [i_1 - 1]))))) ? (((/* implicit */int) min(((unsigned short)60445), (((/* implicit */unsigned short) arr_5 [i_1] [i_1 - 1]))))) : (((/* implicit */int) (!((_Bool)0))))));
        arr_6 [i_1] [i_1 - 1] = ((/* implicit */_Bool) max((((/* implicit */int) var_17)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-18928)) : (((/* implicit */int) var_16))))));
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_22 *= var_13;
        arr_11 [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)204))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) : (max((((/* implicit */unsigned long long int) var_14)), (arr_10 [i_2] [i_2])))))));
    }
    var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (max((var_3), (((/* implicit */unsigned int) (unsigned short)47896))))))));
}
