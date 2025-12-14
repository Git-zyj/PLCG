/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104133
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
    var_11 = ((/* implicit */int) ((min((((var_2) * (var_3))), (var_7))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) var_8)), (var_2))))))));
    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_0) | (18446744073709551604ULL)))) ? (var_5) : (((/* implicit */unsigned long long int) var_6)))) != (((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned char) (signed char)-34)), ((unsigned char)179)))))));
    var_13 = ((/* implicit */int) ((((var_3) - (((((/* implicit */_Bool) (signed char)34)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_10), (((/* implicit */int) var_9)))) == (min((262143), (((/* implicit */int) var_8))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_1 [i_0]))))) + (((/* implicit */int) ((short) (+(-262150)))))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)24205), (((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0]))))))))) : (max((min((arr_2 [i_0]), (((/* implicit */long long int) var_8)))), (arr_2 [i_0])))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_9 [i_1] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_1])) != (((/* implicit */int) (signed char)-56))))) == (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-47)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)57)))), (((/* implicit */int) arr_0 [i_0] [i_1]))))) : (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22628)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_15 |= (+(((((((/* implicit */long long int) ((/* implicit */int) var_8))) > (arr_13 [i_2] [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) (+(-7091420530871967176LL)))) : (min((var_1), (((/* implicit */unsigned long long int) arr_8 [i_4] [i_2] [i_4])))))));
                                var_16 *= ((/* implicit */unsigned long long int) arr_6 [i_3]);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) max((var_7), ((~(var_4)))));
                    var_18 = ((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_2]);
                }
                for (unsigned short i_5 = 2; i_5 < 24; i_5 += 2) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((signed char) (signed char)28));
                    var_20 = ((/* implicit */int) ((5710364176301309913ULL) | (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_16 [(short)1])), (arr_10 [i_1] [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) (signed char)56)) ? (18446744073709551615ULL) : (var_0))) : (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) 262153)))))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) * (min((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_1])))))));
                }
            }
        } 
    } 
}
