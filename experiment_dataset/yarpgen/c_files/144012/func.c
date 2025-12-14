/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144012
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (signed char)0);
                var_20 = ((((/* implicit */_Bool) min(((-(2462675530U))), (((((/* implicit */_Bool) var_4)) ? (2462675533U) : (((/* implicit */unsigned int) var_16))))))) || (((((/* implicit */_Bool) ((unsigned int) 1832291762U))) || (((/* implicit */_Bool) arr_3 [i_0])))));
                var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((((/* implicit */int) (signed char)-83)) + (94))) - (11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0] [i_1])), (var_8))))) : (max((var_15), (((/* implicit */unsigned int) var_6))))))), (((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)9)) : (((/* implicit */int) var_11))))) : (((34634616274944ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)8361)) : (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1832291762U)) ? (((/* implicit */int) (short)27787)) : (538058664)))) : (var_15)))));
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((0LL) + (68719476735LL))))));
    var_24 = ((/* implicit */short) var_2);
}
