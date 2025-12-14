/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102524
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) | (((/* implicit */int) (unsigned short)40150))))) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) min((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */short) ((((/* implicit */int) (unsigned char)21)) == (((/* implicit */int) (unsigned char)34)))))))) : (((/* implicit */int) ((((/* implicit */int) (short)-19807)) == (((/* implicit */int) (signed char)-1)))))));
                arr_6 [(short)14] = ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) ((arr_0 [i_1]) && (((/* implicit */_Bool) var_7))))));
                var_12 = ((/* implicit */unsigned int) arr_3 [i_0]);
            }
        } 
    } 
}
