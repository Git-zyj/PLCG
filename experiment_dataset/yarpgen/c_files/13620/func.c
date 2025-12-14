/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13620
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) min((((/* implicit */short) var_2)), ((short)-15836)))))))) : (min((var_1), (((/* implicit */unsigned int) var_8))))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10020))) : (var_1)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) (signed char)77);
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((arr_1 [i_1 - 1] [i_1 + 1]) ? (((/* implicit */int) (short)-15849)) : (max((-175551816), (((/* implicit */int) (short)15814))))))) : (6114560407084269216ULL)));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */int) (signed char)-53)), (235431161))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_3 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6043))) : (((unsigned long long int) arr_5 [i_0] [i_1 + 1]))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-24)))))));
            }
        } 
    } 
}
