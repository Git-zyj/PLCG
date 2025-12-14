/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171703
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) -2554452912521612001LL)) ? (((((/* implicit */_Bool) (signed char)-1)) ? (-29893419) : (((/* implicit */int) (unsigned short)34235)))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((134215680) - (((/* implicit */int) (unsigned char)159)))) == (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (short)-25713))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) min((((min((((/* implicit */unsigned long long int) (unsigned char)159)), (0ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 1]))))), (((/* implicit */unsigned long long int) 951594111U))));
                var_20 -= ((/* implicit */unsigned short) ((-2554452912521612009LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137)))));
                var_21 ^= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)12)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-19205))))))));
                var_22 = ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */int) arr_1 [i_1 - 1])), (((var_5) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (unsigned char)99)))))) : (((/* implicit */int) (short)1)));
            }
        } 
    } 
}
