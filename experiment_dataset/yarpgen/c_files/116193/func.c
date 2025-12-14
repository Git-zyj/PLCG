/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116193
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_8)) ? (max((15645898249151653229ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (unsigned short)59256)) : (((/* implicit */int) (short)-18645))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (_Bool)1)))) != (((((/* implicit */_Bool) var_4)) ? (-2147483635) : (((/* implicit */int) var_3)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [11U] = ((/* implicit */unsigned int) 288707352);
                    arr_9 [i_1] [i_2] = ((/* implicit */signed char) var_2);
                    var_14 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2] [i_0])) ? (4088) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)55058)))))), (((/* implicit */int) var_5))));
                    arr_10 [i_0] [i_2] [i_2 - 4] = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) var_5)) << (((((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0]))))) - (6234726167121782703ULL))))) : ((((((-(((/* implicit */int) arr_1 [i_2])))) + (2147483647))) << (((((/* implicit */int) (unsigned char)255)) - (255))))));
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */int) (short)-14762);
}
