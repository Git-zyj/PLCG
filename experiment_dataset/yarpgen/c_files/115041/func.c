/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115041
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
    var_14 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) var_7)))));
                arr_4 [i_1] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? ((~((((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_1])))));
                arr_5 [9U] [i_1] = ((/* implicit */unsigned char) ((unsigned short) max((arr_2 [i_0] [i_0] [i_0]), (min((arr_1 [i_0]), (arr_2 [i_0] [i_1] [1]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((int) var_0))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))))) || (((/* implicit */_Bool) var_11))));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (var_8) : (((/* implicit */int) var_6)))))));
}
