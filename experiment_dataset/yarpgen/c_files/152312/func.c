/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152312
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_0])))));
        arr_3 [(short)9] = ((/* implicit */unsigned int) ((unsigned char) (short)-32753));
    }
    for (unsigned int i_1 = 4; i_1 < 19; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) max((var_10), (((unsigned short) max((arr_6 [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_1])))))));
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 - 4])) || (((/* implicit */_Bool) (~(arr_4 [i_1])))))))) | ((-(max((((/* implicit */unsigned int) arr_5 [i_1])), (4294967295U)))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    var_16 = arr_9 [(signed char)13];
                    arr_14 [i_1] [i_2] = ((/* implicit */short) ((unsigned short) ((short) min((var_10), (var_9)))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_15))))) ? ((+(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)31744)))))));
}
