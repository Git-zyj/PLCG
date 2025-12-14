/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175880
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
    var_18 |= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (var_16) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_7)) : (var_2))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) max((8410928190877244558ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_5 [i_0])))) ? (((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) arr_4 [i_1] [i_1])))) : (((/* implicit */int) (signed char)-68)))))));
                var_20 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0]))))) % (((((/* implicit */unsigned long long int) arr_3 [i_1])) ^ (var_5)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((var_8) % (((/* implicit */int) (signed char)72))));
}
