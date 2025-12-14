/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129911
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) (+((~(6500353674853495437ULL)))));
                var_18 = ((/* implicit */unsigned short) var_0);
                arr_5 [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (2147483635)))) ? (max((((/* implicit */long long int) arr_0 [(unsigned char)19])), (3163635215881823087LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) >> (((arr_3 [i_0] [i_1] [i_1 + 1]) - (15520623768365236937ULL)))))) : (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (2147483635)))) ? (max((((/* implicit */long long int) arr_0 [(unsigned char)19])), (3163635215881823087LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) >> (((((arr_3 [i_0] [i_1] [i_1 + 1]) - (15520623768365236937ULL))) - (4524611672369605308ULL))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2175589785631618436LL)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (short)-981))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_16)) ? (-1826209291) : (((/* implicit */int) (short)-16362)))) * (((/* implicit */int) (_Bool)1))));
}
