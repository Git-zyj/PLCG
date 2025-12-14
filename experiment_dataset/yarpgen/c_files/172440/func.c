/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172440
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
    var_18 = ((/* implicit */int) ((_Bool) ((max((((/* implicit */unsigned long long int) var_5)), (var_4))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)127)), (var_13))))))));
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_7))))) : (((/* implicit */int) min((((/* implicit */short) (signed char)111)), (var_2))))))) != (max((((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (var_4)))));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_11))));
    var_21 = ((/* implicit */unsigned int) ((short) (_Bool)0));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_22 -= ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) (signed char)-110)))));
                var_23 += ((4294967295U) - (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)1322))))))));
                var_24 = ((/* implicit */unsigned char) (_Bool)0);
            }
        } 
    } 
}
