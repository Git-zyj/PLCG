/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179461
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
    var_15 = ((/* implicit */unsigned int) ((-5813441631727603202LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29175)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((((/* implicit */_Bool) min((var_8), (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)127))))) : (((long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(5813441631727603202LL)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_17 = ((/* implicit */int) ((5813441631727603202LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)2)))));
            var_18 = ((/* implicit */signed char) max((var_18), ((signed char)0)));
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (signed char)(-127 - 1)))));
            /* LoopSeq 2 */
            for (short i_3 = 2; i_3 < 22; i_3 += 1) 
            {
                arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
                var_20 += ((/* implicit */unsigned int) arr_9 [i_1] [i_3 - 1] [i_1]);
            }
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                arr_19 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((arr_18 [i_1] [i_1] [i_4]) | (((/* implicit */unsigned long long int) arr_5 [i_1]))));
                arr_20 [i_2] = ((/* implicit */signed char) arr_13 [i_1] [i_2] [i_2]);
            }
        }
        arr_21 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_1] [i_1]))));
    }
}
