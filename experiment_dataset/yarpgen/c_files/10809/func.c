/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10809
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
    var_20 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-3438)) : (((/* implicit */int) (_Bool)1))))) : (((var_3) % (var_11)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) max((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0 - 2]))))))), (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)-19)) + (25)))))));
                var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 3])) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1])))) + (((/* implicit */int) ((signed char) arr_4 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_23 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((1538284721785433506ULL) / (var_7)))) && (((/* implicit */_Bool) var_16)))))) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))))) : ((((_Bool)0) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    var_24 = ((/* implicit */signed char) (+(18446744073709551615ULL)));
    var_25 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3438)) ? (14218177064295958775ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */int) (short)3437)) >> (((var_3) - (6120319911746551522ULL))))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))))) >= (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-3437))))), (((0U) >> (((((/* implicit */int) (short)-3438)) + (3438)))))))));
}
