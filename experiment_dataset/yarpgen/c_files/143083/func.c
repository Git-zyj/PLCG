/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143083
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
    var_11 = ((/* implicit */unsigned short) 524032LL);
    var_12 = ((/* implicit */unsigned char) var_6);
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) (short)-32757)) ? (var_8) : (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (-1423041235)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
            arr_6 [i_0] [i_0] = ((/* implicit */short) arr_4 [i_1] [(unsigned short)14]);
        }
        arr_7 [i_0] [8LL] |= ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)255)) < (139124793))) ? (1064135667U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
    }
}
