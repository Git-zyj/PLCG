/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13021
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
    var_15 *= ((/* implicit */unsigned short) var_14);
    var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)42611)), (9118207497960082336ULL)));
    var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_12)))) ? ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_2)))))) : ((((~(((/* implicit */int) var_4)))) & ((~(((/* implicit */int) (signed char)112))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 &= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)22924))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_1] [i_0 + 1])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((_Bool) var_6))))))));
                    arr_9 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_6 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned char) arr_2 [i_0 + 1]))))) != (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 1])) < (((/* implicit */int) arr_6 [i_0 + 1] [i_2])))))));
                }
                arr_10 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) max((arr_8 [i_0] [i_0] [i_1] [i_1]), ((+(arr_3 [i_0 + 1])))));
                arr_11 [i_0] [i_1] |= ((/* implicit */long long int) var_9);
            }
        } 
    } 
}
