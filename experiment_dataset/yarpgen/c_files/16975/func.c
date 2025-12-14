/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16975
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) var_2))))))));
    var_16 -= ((/* implicit */signed char) max((var_2), (var_12)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (unsigned short)37942))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */_Bool) var_14);
                    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) 4231287172U)) ? (((arr_4 [i_0] [i_0] [i_2] [i_2]) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_10)) : (arr_2 [i_0] [i_1]))) - (2510127657LL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2031616U)), (arr_1 [i_0] [9LL]))))));
                    var_20 *= ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) -1391279274)) ? (0ULL) : (34902897112121344ULL))) - (((/* implicit */unsigned long long int) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97))))))))));
                }
            } 
        } 
        var_21 ^= ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0]);
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        var_22 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_8 [(short)10]))));
        var_24 -= ((/* implicit */signed char) (~(arr_8 [14LL])));
    }
}
