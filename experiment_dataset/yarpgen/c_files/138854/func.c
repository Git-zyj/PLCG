/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138854
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(((/* implicit */int) (unsigned char)91)))) == (((/* implicit */int) ((unsigned char) var_0)))))) < ((~(((/* implicit */int) arr_3 [i_0] [i_0]))))));
                arr_8 [i_0] [i_1] = ((/* implicit */short) ((arr_0 [i_0]) > (((unsigned int) arr_0 [i_0]))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) != (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) ? ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (var_5))))) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (var_6)))))))));
    var_13 = var_5;
}
