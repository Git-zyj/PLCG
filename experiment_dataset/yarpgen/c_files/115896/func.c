/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115896
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
    var_15 = ((/* implicit */signed char) ((unsigned int) (signed char)-124));
    var_16 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = arr_1 [i_0];
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_1 [i_0]), ((unsigned short)60569)))) >> (((((/* implicit */int) var_9)) - (166)))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
            var_18 = ((/* implicit */signed char) arr_4 [i_1] [i_0]);
            var_19 = ((/* implicit */unsigned char) ((int) (unsigned short)60569));
        }
    }
    var_20 = ((/* implicit */unsigned short) var_1);
}
