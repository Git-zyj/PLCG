/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101281
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) arr_0 [i_0]);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_4 [4] [i_1]);
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (unsigned short)57123)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 2]))) < (680388644U)))) : (((((/* implicit */_Bool) max(((signed char)-1), (arr_0 [i_1 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1804798051))))) : ((~(((/* implicit */int) var_5)))))))))));
                var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((2114035574U) != (127090920U)))), (((((/* implicit */_Bool) -576973344)) ? (((4167876376U) + (((/* implicit */unsigned int) -1052025978)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_12))));
    var_18 = ((/* implicit */signed char) var_6);
}
