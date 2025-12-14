/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188255
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (+(var_5))))));
    var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) 2489195639U)) ? (7397819744522345912LL) : (((/* implicit */long long int) 2489195656U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)-23698), ((short)2515)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-23701)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_16 = (+(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_4 [i_0])), ((short)2507))))) : (max((((/* implicit */unsigned int) (unsigned short)31339)), (arr_0 [i_0]))))));
                var_17 = ((/* implicit */short) ((((/* implicit */int) min(((short)960), ((short)-8192)))) == (((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) var_4)), (arr_0 [i_1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-23699)), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16027))) : (3510319515U)))));
}
