/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102375
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
    var_13 = (+(max((((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-80)))), (var_1))));
    var_14 += ((/* implicit */unsigned int) ((((_Bool) (-(((/* implicit */int) (unsigned short)63598))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-116)))))) : (((((/* implicit */unsigned long long int) var_9)) - (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) min((((/* implicit */int) (unsigned short)1937)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)200))))));
                    var_16 = (unsigned char)200;
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (short)-32740))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_10)))))))));
}
