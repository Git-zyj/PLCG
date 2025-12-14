/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171681
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((((/* implicit */unsigned long long int) ((arr_0 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60844)))))) >= ((+(arr_3 [i_0] [i_1 - 1] [i_1]))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) (signed char)99)))) : (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (var_12))) && (((/* implicit */_Bool) ((1842846381) << (((12478214259590027544ULL) - (12478214259590027544ULL)))))))))));
            }
        } 
    } 
    var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((var_0) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (unsigned char)39)) ? (-738169938) : (((/* implicit */int) (signed char)75)))) + (738169942))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) >= ((+(var_8)))))))));
    var_15 = ((/* implicit */unsigned char) min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2972427260513573281ULL)) ? (((/* implicit */int) var_5)) : (var_9)))) ? (((/* implicit */long long int) max((738169937), (1842846372)))) : (min((((/* implicit */long long int) var_2)), (var_0))))))));
    var_16 = ((/* implicit */unsigned char) (-((~(-2451249545272947403LL)))));
}
