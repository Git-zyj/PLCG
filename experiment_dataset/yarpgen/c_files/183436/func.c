/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183436
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
    var_13 |= ((/* implicit */int) ((1425438776U) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1717010878U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))) : ((-9223372036854775807LL - 1LL)))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((arr_2 [i_0]) ? (((/* implicit */unsigned long long int) 1110052768)) : (((((/* implicit */_Bool) ((-1110052792) + (((/* implicit */int) (unsigned short)11276))))) ? (((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    var_15 &= ((((/* implicit */_Bool) 267911168)) ? (((/* implicit */int) (unsigned char)77)) : (131071));
                    var_16 += ((/* implicit */_Bool) ((((arr_8 [i_0] [i_0] [i_2] [i_3]) + (2147483647))) >> (((/* implicit */int) (_Bool)0))));
                }
                for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    var_17 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)21679))));
                    var_18 -= ((/* implicit */_Bool) ((unsigned int) 0U));
                }
                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)224)) / (((/* implicit */int) (unsigned short)62036))));
            }
            for (long long int i_5 = 2; i_5 < 16; i_5 += 2) 
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((4294967295U) | (((/* implicit */unsigned int) 1663310243)))))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62827))) <= (4138320672U))))));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
                {
                    var_22 *= ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6] [i_5] [i_5] [i_5 - 2]))) + (2985965611U))))));
                }
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) (unsigned char)229)) ? (670247125) : (((/* implicit */int) (signed char)24))))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((_Bool)1) ? (2719674680U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) <= ((-9223372036854775807LL - 1LL)))))));
                    }
                    var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3266700017U)));
                    var_27 = ((/* implicit */int) min((var_27), ((((!(((/* implicit */_Bool) (short)16870)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))))));
                }
            }
            var_28 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)64)) || (((/* implicit */_Bool) (unsigned char)59))));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)117)) * (((/* implicit */int) arr_1 [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (2623988263U))))));
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (((_Bool)1) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))))));
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)65535)) : (arr_9 [(unsigned short)15] [i_0]))))));
        }
    }
}
