/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18260
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 |= ((/* implicit */signed char) (+((((_Bool)1) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) (_Bool)1))))));
                arr_7 [i_1 - 2] [i_0] = ((/* implicit */unsigned char) (unsigned short)9284);
                var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_2))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19398))) : (var_6)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76))) : (var_13))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)38926)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (var_1))))) : ((-(var_13))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_17 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32768)) && (((/* implicit */_Bool) var_6)))))));
    var_18 = (((_Bool)0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)19398)) : (((/* implicit */int) (_Bool)1)))) : (min((((/* implicit */int) (_Bool)1)), (var_5)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) var_6)) ? (7313335817582808664LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
}
