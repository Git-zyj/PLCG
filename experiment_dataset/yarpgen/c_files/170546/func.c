/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170546
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
    var_12 ^= ((/* implicit */int) max(((unsigned short)55705), (((/* implicit */unsigned short) (short)(-32767 - 1)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)55705))));
        var_13 &= ((/* implicit */int) ((((((/* implicit */int) (unsigned short)9830)) | (((/* implicit */int) (unsigned short)9833)))) <= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((signed char) var_11))) : (((/* implicit */int) var_8))))));
    }
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) var_4)) : (var_10)))))));
}
