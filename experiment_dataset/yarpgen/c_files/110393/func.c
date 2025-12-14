/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110393
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
    var_16 |= ((/* implicit */int) (signed char)127);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 |= ((/* implicit */signed char) arr_3 [i_0] [i_0]);
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_12))) + (((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */_Bool) max((var_19), ((_Bool)1)));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_7 [i_1] [(unsigned short)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_4 [i_1] [i_1]))) ? ((-(((/* implicit */int) (signed char)127)))) : ((~(((/* implicit */int) arr_5 [i_1]))))));
        arr_8 [i_1] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned short) arr_4 [i_1] [i_1])), (arr_5 [i_1]))), (((/* implicit */unsigned short) (short)-16160))));
        var_20 ^= ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        arr_9 [i_1] &= ((/* implicit */_Bool) ((((/* implicit */int) min((min(((signed char)-106), (((/* implicit */signed char) var_8)))), (arr_6 [i_1])))) / ((~(((/* implicit */int) (signed char)-126))))));
    }
}
