/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185192
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
    var_18 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-72))) ^ (14684009843964730592ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) ((short) 436812425))))))));
    var_19 = ((/* implicit */long long int) ((((int) ((((/* implicit */_Bool) var_5)) ? (436812425) : (((/* implicit */int) var_11))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) -436812450)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        var_20 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)66))) + (arr_1 [i_0]))))))), (((((/* implicit */_Bool) var_1)) ? (arr_0 [6LL] [i_0 - 1]) : (arr_0 [12U] [i_0 - 1])))));
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            var_21 = ((/* implicit */long long int) ((((arr_0 [16LL] [i_1 - 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) + (((/* implicit */unsigned long long int) ((arr_3 [i_0 - 1] [i_0 - 3] [i_1 - 3]) ? (((/* implicit */int) var_16)) : ((+(((/* implicit */int) var_11)))))))));
            var_22 -= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_16), (var_5))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 2] [i_0 - 2])) ? (var_1) : (var_1)))) ? ((~(((/* implicit */int) var_17)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_12))))))));
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_23 = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)78)) ? (arr_1 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 2] [i_2] [(_Bool)1])))))));
            var_24 = (((-(arr_2 [i_0 + 2] [i_0] [i_0 - 3]))) + (((/* implicit */long long int) (~((-(((/* implicit */int) var_15))))))));
        }
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0]))));
        var_26 = ((/* implicit */long long int) var_0);
        var_27 = ((/* implicit */long long int) max((6150824230586684737ULL), (((/* implicit */unsigned long long int) var_5))));
    }
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_9 [i_3] = ((/* implicit */int) 14684310256920520531ULL);
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_2 [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_3] [i_3])))))) ? (((((/* implicit */_Bool) max((arr_2 [i_3] [i_3] [i_3]), (((/* implicit */long long int) var_15))))) ? (max((var_8), (((/* implicit */long long int) var_5)))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) * (34359738367LL))))) : (((/* implicit */long long int) ((436812420) + (-1320479356))))));
    }
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-13445)) : (((/* implicit */int) var_6))));
    var_29 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned long long int) var_3))));
}
