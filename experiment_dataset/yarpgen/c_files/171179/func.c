/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171179
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
    var_15 += ((/* implicit */short) ((((((/* implicit */int) var_4)) - (((/* implicit */int) ((unsigned char) var_6))))) / (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_16 &= ((/* implicit */signed char) (short)32603);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_17 *= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) ((unsigned char) arr_2 [i_1]))) >= (-1052322339))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (short)5833))))) | (arr_4 [i_0 - 3]))));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)32612))));
        var_19 = ((/* implicit */long long int) var_3);
        var_20 = ((arr_11 [i_2]) >> (((((/* implicit */int) ((unsigned short) arr_9 [i_2] [(unsigned char)7]))) - (49241))));
    }
    var_21 -= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)249)) >> (((((/* implicit */int) var_1)) - (1689)))));
    var_22 = ((/* implicit */_Bool) var_4);
}
