/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174079
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
    var_18 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) var_1)) ? (1U) : (var_9))) << (((((/* implicit */int) min((((/* implicit */signed char) var_2)), (var_4)))) + (81)))))));
    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (signed char)-89))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_4))))) : (var_7)));
    var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12188)) ? (536869888LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (1513952946))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (((((((/* implicit */int) var_0)) != (((/* implicit */int) var_11)))) ? (((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) var_5))))) : ((+(-536869877LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_15))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)54444)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && ((_Bool)1)))) : ((-(((/* implicit */int) (unsigned short)48831))))));
                var_23 = ((/* implicit */unsigned long long int) var_4);
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_3 [(unsigned short)13] [i_1])) : (((/* implicit */int) arr_3 [3ULL] [i_1])))) : (((/* implicit */int) ((signed char) arr_2 [i_1])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) & (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_13))))));
}
