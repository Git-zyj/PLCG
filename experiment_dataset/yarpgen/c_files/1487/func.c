/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1487
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
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)39))))) ? (((/* implicit */int) (short)-9227)) : (((/* implicit */int) (signed char)39))))), (var_12)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))) ? (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (arr_3 [i_1]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)66))))) : (-8000676282610362919LL)));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((var_12) <= (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0 - 1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */int) ((unsigned char) -428369436)))))) + (((var_16) >> (((((/* implicit */_Bool) (unsigned short)10333)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7)))))));
}
