/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176955
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-1), (((/* implicit */short) (signed char)(-127 - 1))))))) : (min((((/* implicit */unsigned int) var_10)), (var_5)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))) ? (min((var_5), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
    var_13 *= ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((((/* implicit */unsigned int) var_7)), (var_4))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_2 [i_0])))))))));
                arr_5 [i_0] = ((/* implicit */int) ((max((4294934528U), (((/* implicit */unsigned int) (short)255)))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [(signed char)8])) : (var_11))) - (7759)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_17 [i_4] [i_0] [(short)9] [i_2] [i_2] [(short)0] [(unsigned short)5] = ((/* implicit */unsigned char) (~((~(min((var_9), (((/* implicit */int) (unsigned char)255))))))));
                                var_15 *= ((min((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)255)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)30)))))) != (((/* implicit */int) ((((/* implicit */int) max((var_10), (var_8)))) > ((~(((/* implicit */int) (unsigned short)65505))))))));
                            }
                        } 
                    } 
                } 
                arr_18 [5LL] [5LL] [5LL] |= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_7)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((7U) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))), (((/* implicit */long long int) var_9))));
                var_16 -= (-(1057743982U));
            }
        } 
    } 
}
