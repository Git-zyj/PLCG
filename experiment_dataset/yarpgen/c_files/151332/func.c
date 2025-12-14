/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151332
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-92)) && (((/* implicit */_Bool) (signed char)-72))))) : (((/* implicit */int) ((unsigned char) arr_3 [i_0])))));
        var_17 = ((/* implicit */short) max((min(((unsigned short)8), (((/* implicit */unsigned short) arr_3 [i_0])))), (((/* implicit */unsigned short) arr_3 [i_0]))));
    }
    var_18 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-109)) && (((/* implicit */_Bool) (short)-27414)))));
}
