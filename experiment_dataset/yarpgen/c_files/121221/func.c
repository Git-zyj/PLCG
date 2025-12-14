/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121221
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
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(var_4)))) * ((+(var_2))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((((((/* implicit */int) (signed char)-124)) * ((+(((/* implicit */int) var_12)))))), (((((/* implicit */_Bool) var_4)) ? (((var_10) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (var_4))) : (var_11))))))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) - (((int) var_14))))) < (((unsigned int) max(((short)-25856), (((/* implicit */short) (_Bool)1)))))));
            }
        } 
    } 
}
