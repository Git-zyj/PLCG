/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151746
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [(short)0] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)98))));
        arr_3 [0U] = ((/* implicit */unsigned char) (short)2690);
    }
    for (unsigned int i_1 = 3; i_1 < 9; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_3)) - (((/* implicit */int) arr_1 [0U]))))));
        arr_7 [i_1] = ((/* implicit */_Bool) var_11);
        arr_8 [i_1] = ((/* implicit */_Bool) max(((-(arr_5 [i_1] [(_Bool)1]))), (((/* implicit */unsigned int) var_10))));
    }
    var_20 = ((/* implicit */unsigned short) var_4);
}
