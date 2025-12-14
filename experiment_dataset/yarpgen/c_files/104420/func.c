/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104420
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
    var_19 = ((/* implicit */int) min((var_19), ((((+((~(((/* implicit */int) var_16)))))) + (max((var_17), (min((((/* implicit */int) var_0)), (var_8)))))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_12)) ? (var_8) : (var_17))) : ((-(var_8)))))) ? (min((max((((/* implicit */unsigned long long int) var_4)), (18446744073709551598ULL))), (((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) <= (var_1))))) >= (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_21 &= ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_3 [i_0 + 2])) % (((/* implicit */int) arr_3 [i_0 - 1])))));
                var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) (short)4372)) + (((/* implicit */int) (signed char)-15)))), (arr_0 [(unsigned short)12])))) ? (((((/* implicit */_Bool) arr_1 [(unsigned short)10])) ? (arr_1 [10]) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) arr_5 [(signed char)14] [i_0] [(signed char)14])), (var_11)))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_15))))))))));
                var_23 = ((/* implicit */unsigned short) ((unsigned char) max((var_8), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
            }
        } 
    } 
}
