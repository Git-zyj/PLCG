/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151779
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-16892))))), (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0])) ? (arr_7 [i_1] [i_0] [i_0]) : (((/* implicit */unsigned int) -244128533))))));
                var_20 = ((/* implicit */unsigned char) (-(arr_7 [(unsigned char)19] [(unsigned char)19] [i_1])));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_5 [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) < (((/* implicit */int) arr_5 [(unsigned short)23])))))));
                var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (max((arr_7 [i_1] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1673852328U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (1673852329U)));
    var_23 = ((/* implicit */unsigned short) 1673852329U);
}
