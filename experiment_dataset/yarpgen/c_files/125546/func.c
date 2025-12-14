/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125546
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_2])) && (arr_4 [i_1 + 2]))) ? (((unsigned long long int) arr_6 [i_1 - 1] [i_1 - 1])) : (((/* implicit */unsigned long long int) ((var_12) / (((((/* implicit */_Bool) var_9)) ? (arr_3 [i_0] [i_2]) : (var_5))))))));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_1))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((2851645267U), (((/* implicit */unsigned int) 65534))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-21948)) : (((/* implicit */int) arr_5 [4LL] [(unsigned short)10])))) : (((/* implicit */int) ((short) var_1))))), (((/* implicit */int) max(((short)-21945), ((short)21947))))));
    }
    var_16 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_11))) / (((/* implicit */int) var_11))))), (var_1)));
}
