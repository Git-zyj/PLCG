/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122390
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
    var_17 = ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) ((signed char) 198256005))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) var_0);
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)13771)))))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned char) var_5))))) ? (((((var_8) * (((/* implicit */unsigned int) arr_3 [i_1] [i_1])))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-13771)) ? (((/* implicit */int) (short)13763)) : (((/* implicit */int) (unsigned char)247)))))));
        arr_7 [i_1] = ((/* implicit */int) var_3);
    }
    var_19 = ((/* implicit */unsigned char) var_1);
}
