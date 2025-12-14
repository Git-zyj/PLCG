/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103961
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
    var_19 = (~(((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */_Bool) 1981398057865759351ULL)) ? (14659483430967313802ULL) : (14659483430967313798ULL))) : (14659483430967313798ULL))));
    var_20 = ((/* implicit */unsigned short) (-(var_1)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_21 -= ((/* implicit */unsigned char) (~(min((5108036751401436935ULL), (((/* implicit */unsigned long long int) var_13))))));
                var_22 -= ((/* implicit */unsigned char) ((((unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(4116466738U)))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)10949))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) 419666961U))));
            }
        } 
    } 
}
