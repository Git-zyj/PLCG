/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151071
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((unsigned char) (_Bool)1)))))) ? (((((/* implicit */_Bool) max((var_3), (((/* implicit */short) var_1))))) ? (((/* implicit */long long int) (~(4294967295U)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((long long int) var_4)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-70))))) > (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [0U] [i_1]))))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) ((short) 9223372036854775807LL)))));
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) / (((/* implicit */int) min((var_0), (var_7)))))) - (((/* implicit */int) var_8))));
}
