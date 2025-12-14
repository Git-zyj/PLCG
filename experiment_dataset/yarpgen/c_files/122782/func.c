/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122782
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
    var_13 = ((/* implicit */unsigned char) var_4);
    var_14 = ((/* implicit */unsigned char) var_1);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned short) var_11))) : (((/* implicit */int) (short)-30393))))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) var_4))));
    var_16 ^= ((/* implicit */int) var_3);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) 237474282))))) + (((/* implicit */int) ((signed char) arr_2 [i_0]))))))));
        arr_4 [(unsigned char)4] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((signed char) var_4))) : (((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_7 [i_1]), (arr_7 [i_1])))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_7 [i_1])))) : (((/* implicit */int) max((arr_5 [i_1]), (((/* implicit */short) arr_7 [i_1])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_18 = ((/* implicit */int) arr_6 [i_1] [i_2]);
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (arr_9 [i_1] [i_1])));
        }
    }
}
