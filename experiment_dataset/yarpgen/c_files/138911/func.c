/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138911
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
    var_11 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) : (((unsigned int) (short)8151))))));
    var_12 -= ((/* implicit */unsigned short) ((short) ((((var_4) - (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (((/* implicit */long long int) ((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (7) : (13113212)))) + (((((unsigned long long int) (short)30774)) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1]))))) ? (1145603311617466491ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_1 [i_0] [i_0])))))))));
            }
        } 
    } 
}
