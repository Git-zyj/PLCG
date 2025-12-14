/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104030
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
    var_20 = ((/* implicit */unsigned int) max((max(((-(18446744073709551612ULL))), (4ULL))), (((/* implicit */unsigned long long int) var_17))));
    var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(var_4)))), (((0ULL) << (((9223372036854775807LL) - (9223372036854775769LL)))))));
    var_22 = ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_0 - 2] [i_0] [i_2] [i_2 - 1] = ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_0]);
                    var_23 = ((/* implicit */int) max((18446744073709551593ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */unsigned char) ((var_10) / ((~(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))));
}
