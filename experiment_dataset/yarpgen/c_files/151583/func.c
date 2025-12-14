/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151583
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
    var_20 = ((/* implicit */unsigned long long int) var_9);
    var_21 = ((/* implicit */signed char) ((var_16) ? (((((/* implicit */int) (unsigned short)52945)) + (((/* implicit */int) (_Bool)1)))) : (((((((/* implicit */int) var_13)) <= (((/* implicit */int) (signed char)31)))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (short)-9945))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((int) (signed char)51))))) ? (((((var_8) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) & ((~(var_0))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                arr_7 [i_1] [2LL] [2LL] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) var_7))))), ((((_Bool)1) ? (18446744073709551598ULL) : (18068972449510032823ULL)))))) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [(_Bool)1])) <= (((/* implicit */int) arr_5 [i_0]))))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 8608155054312594020LL)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (15728640LL)))) ? (((/* implicit */long long int) (~(-1988383371)))) : (((((/* implicit */_Bool) (signed char)98)) ? (-7598965771579397819LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (_Bool)1)))))));
            }
        } 
    } 
}
