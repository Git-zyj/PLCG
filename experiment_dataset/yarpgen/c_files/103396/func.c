/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103396
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
    var_11 |= ((/* implicit */long long int) (-((+((+(((/* implicit */int) (unsigned char)88))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) (+(65272632U)));
                var_13 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 4229694664U)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_1 [i_0] [i_1 - 1])))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    arr_7 [i_0] = ((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0])), (3634340520U)))), (min((((/* implicit */unsigned long long int) var_1)), (var_9))))) * ((+((-(arr_1 [i_1] [i_2 + 1]))))));
                    var_14 &= ((/* implicit */unsigned char) 4229694676U);
                    var_15 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_3 [i_2 + 1] [i_2 + 1] [i_1])), (((((unsigned long long int) arr_1 [i_2 - 1] [i_0])) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (var_1)))))))));
                }
                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_7))))))) : (65272654U)));
            }
        } 
    } 
    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-137438953472LL), (((((/* implicit */_Bool) var_1)) ? (137438953468LL) : (var_5)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (-137438953472LL)))) : (((((/* implicit */_Bool) ((var_9) & (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned char)178))))) : (((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */unsigned long long int) 0LL)) : (var_2)))))));
    var_18 = ((/* implicit */_Bool) (((((+(((((/* implicit */_Bool) -137438953468LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)21211)))))) + (2147483647))) >> (min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))))));
    var_19 = ((/* implicit */unsigned short) var_5);
}
