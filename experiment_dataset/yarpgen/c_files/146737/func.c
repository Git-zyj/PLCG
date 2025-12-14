/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146737
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_0 + 2] = ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_0 - 3]))) : (4168964166949392753ULL)));
                var_12 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)-15)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_5 [i_0] [i_1])) ^ (((/* implicit */int) var_0)))))), (((/* implicit */int) arr_2 [i_0]))));
                arr_7 [i_0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned short)0] [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)12708))))), (((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166))) : (18446744073709551615ULL))))) + (min((((/* implicit */unsigned long long int) ((short) -4789139405681836383LL))), (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_1) : (134215680ULL)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((short) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_3))) ? (((((/* implicit */int) var_7)) & (((/* implicit */int) var_0)))) : (((/* implicit */int) var_2)))))));
}
