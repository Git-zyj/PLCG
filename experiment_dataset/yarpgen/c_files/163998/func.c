/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163998
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((821050627), (((/* implicit */int) (signed char)23))));
                    var_15 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) (short)0)))) : (((/* implicit */int) ((_Bool) var_1)))))), (var_3)));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) -4752104702046176394LL);
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_2] [i_0])) >= (((/* implicit */int) arr_0 [i_1])))))) : (min((((((/* implicit */_Bool) 4752104702046176393LL)) ? (((/* implicit */long long int) var_2)) : (2274705930837928659LL))), (((/* implicit */long long int) (unsigned char)236)))))))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) var_8)), (var_6)))) ? (((unsigned int) min((arr_3 [i_2]), ((unsigned short)65535)))) : (((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)40332))))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) max(((~((~(-8463898948385379980LL))))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)0)))))));
    var_19 = ((/* implicit */long long int) ((short) (((-(((/* implicit */int) var_8)))) / (((/* implicit */int) (signed char)71)))));
}
