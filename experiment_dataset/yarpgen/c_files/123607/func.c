/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123607
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
    var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-124)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-124), ((signed char)108)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (signed char)-124))))));
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-30))))))))));
                var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-30)), ((unsigned short)40536))))))) ? (max((((/* implicit */unsigned int) (signed char)-30)), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4670122675524267181LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-124)))))))))));
            }
        } 
    } 
}
