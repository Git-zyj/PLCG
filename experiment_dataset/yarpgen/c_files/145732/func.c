/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145732
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? ((((((-(((/* implicit */int) var_7)))) + (2147483647))) >> (((/* implicit */int) ((signed char) (_Bool)1))))) : (((/* implicit */int) var_9))));
    var_14 -= ((/* implicit */unsigned short) (((((_Bool)1) ? (0U) : (max((var_11), (4294967295U))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_10)) % (((/* implicit */int) var_10)))) > ((~(((/* implicit */int) var_5))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_15 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_0] [i_1] [11U]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1] [i_1]))) : (arr_1 [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) var_1))))) <= (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1])))))) ? (((/* implicit */int) ((unsigned short) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (369654539U))))) : ((-(((/* implicit */int) (signed char)-65))))));
                    var_17 = ((/* implicit */unsigned int) arr_2 [i_0] [i_2]);
                }
            } 
        } 
    } 
}
