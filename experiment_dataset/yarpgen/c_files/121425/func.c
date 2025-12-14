/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121425
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_12 = ((((/* implicit */_Bool) var_3)) ? (2147483647) : (((/* implicit */int) var_7)));
            var_13 = min((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [(signed char)3])) <= (((/* implicit */int) (signed char)(-127 - 1))))))) <= (((((/* implicit */_Bool) (signed char)31)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))), (min((arr_3 [i_0] [i_1]), (arr_3 [(signed char)6] [i_1]))));
            arr_4 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (((-(((((/* implicit */unsigned int) ((/* implicit */int) (short)-5582))) ^ (553757832U))))) * (((/* implicit */unsigned int) min((arr_1 [i_1] [i_0]), (var_9))))));
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        {
                            var_14 *= ((((/* implicit */_Bool) (signed char)34)) ? (1240240798828309259ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))));
                            arr_14 [(short)2] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_10 [6] [i_2 + 3] [i_4] [i_4])) ? (((/* implicit */int) arr_0 [i_2 + 3])) : (((/* implicit */int) (unsigned char)178))))));
                        }
                    } 
                } 
            } 
        }
        var_15 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (23ULL) : (((/* implicit */unsigned long long int) -2147483635))))));
    }
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        arr_18 [i_5] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5])) + (((/* implicit */int) (unsigned short)21661))))))), (10847864608183621248ULL)));
        arr_19 [i_5] = ((/* implicit */int) ((var_2) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_0)))) ? (((var_1) | (((/* implicit */long long int) arr_17 [7ULL] [i_5])))) : (((/* implicit */long long int) ((arr_15 [i_5]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)65535)))))))) : (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5])))))));
        arr_20 [(short)0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)10536))))))) ? (9223372036854775807LL) : (((/* implicit */long long int) (+((~(((/* implicit */int) (_Bool)1)))))))));
    }
    for (short i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)98))))), (max((var_4), (((/* implicit */unsigned int) (short)-5603)))))))));
        arr_23 [(short)2] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(max((((/* implicit */int) arr_13 [i_6] [21] [i_6] [i_6])), (var_9))))))));
    }
    var_17 -= var_1;
}
