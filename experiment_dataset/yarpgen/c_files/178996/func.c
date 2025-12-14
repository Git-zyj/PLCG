/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178996
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
    var_16 = ((/* implicit */_Bool) var_2);
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)0)))), (max((((/* implicit */int) (unsigned short)0)), (var_13)))))) ? (((/* implicit */unsigned int) max((var_5), (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_15)))))))) : (max((((unsigned int) (unsigned short)65535)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3537986697U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65535)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((unsigned long long int) (signed char)127);
                var_18 = ((/* implicit */signed char) ((int) (signed char)-57));
            }
        } 
    } 
    var_19 -= max((((/* implicit */int) max((max((var_7), ((unsigned short)7))), (((/* implicit */unsigned short) ((signed char) var_13)))))), ((-(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)65529)))))));
}
