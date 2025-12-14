/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160569
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)77)) ^ (((/* implicit */int) (short)32748))));
    var_16 = ((var_0) == (((/* implicit */unsigned long long int) var_12)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (unsigned char)255))))) ? (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)13)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))) & (var_4)))) ? (((((-4784615133333165043LL) + (9223372036854775807LL))) << (((65535) - (65535))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_0 - 2] [i_1]))))))))));
                arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1153229266685316240LL)) ? (-65540) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)183)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */long long int) min(((signed char)-111), (arr_4 [i_1] [i_0]))))))) : (min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))));
                arr_7 [i_0] = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_6))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((65531) - (((/* implicit */int) (signed char)83))));
    var_18 = ((/* implicit */unsigned long long int) max((min(((unsigned char)141), ((unsigned char)58))), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) == (var_14))))));
}
