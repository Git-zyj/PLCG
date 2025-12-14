/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113346
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)14336)), (max((arr_0 [i_1 - 1]), (((/* implicit */unsigned int) arr_3 [i_1]))))))) ? (arr_2 [i_0] [i_1]) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [0LL]))))) : (var_4))));
                var_10 = arr_0 [i_0];
            }
        } 
    } 
    var_11 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) + (var_0)));
    var_12 = ((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_5))));
    var_13 = ((/* implicit */unsigned int) max((min((((((/* implicit */unsigned long long int) var_5)) & (var_2))), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (min((-1107469023), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */signed char) var_8)), (var_3)))))))));
    var_14 = ((/* implicit */signed char) max((var_2), ((~(var_4)))));
}
