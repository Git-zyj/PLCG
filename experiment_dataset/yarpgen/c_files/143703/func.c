/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143703
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((((((/* implicit */unsigned long long int) var_0)) - (arr_1 [i_0]))) == (((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))) || (((/* implicit */_Bool) ((arr_1 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
        var_21 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) + (((/* implicit */int) arr_0 [i_0]))))) ^ (((15875961074731252329ULL) ^ (arr_1 [i_0])))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        var_22 |= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
        var_23 = ((/* implicit */unsigned char) ((min((max((var_16), (((/* implicit */long long int) arr_3 [(unsigned short)0] [(unsigned short)0])))), (((/* implicit */long long int) min((var_12), (((/* implicit */signed char) (_Bool)1))))))) & (((/* implicit */long long int) ((/* implicit */int) ((((arr_1 [i_1 + 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13585))))) || (((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */unsigned long long int) (unsigned short)41616)))))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_6 [i_2] = ((/* implicit */unsigned short) ((18034688864239488287ULL) != (10889926768030311321ULL)));
        arr_7 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_5 [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-13586)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13586))) / (arr_1 [i_2])))));
    }
    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (int i_5 = 1; i_5 < 21; i_5 += 3) 
            {
                {
                    arr_16 [i_3 - 1] [(signed char)20] [i_3 + 2] [1U] = ((/* implicit */long long int) ((((((1587413138U) != (arr_14 [13LL] [i_5 + 1] [i_5]))) && (((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((var_11) - (3200519511U)))))))) || (((((/* implicit */int) min(((unsigned short)10020), (((/* implicit */unsigned short) (unsigned char)250))))) > (((/* implicit */int) min(((unsigned short)14660), (((/* implicit */unsigned short) (unsigned char)14)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) & (((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (unsigned char)209))))))), (((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)31131), (((/* implicit */unsigned short) arr_8 [0])))))) - (((1587413121U) - (((/* implicit */unsigned int) 1485092767))))))));
                                var_25 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) arr_18 [i_3 + 2] [i_3 - 1] [i_4] [13U] [i_6] [(unsigned char)3])), (arr_9 [(unsigned short)17] [i_3]))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_13 [i_3] [20ULL] [i_5 + 1])), (-1714137830))))))) - (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)17)), ((unsigned short)0)))), (((((/* implicit */unsigned long long int) -2020021574)) / (549755813887ULL)))))));
                                var_26 = ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_13))))) / (min((((/* implicit */unsigned long long int) var_10)), (var_5))))) % (((/* implicit */unsigned long long int) max((((290871232103068765LL) >> (((/* implicit */int) var_18)))), (min((((/* implicit */long long int) (short)-13600)), (var_17)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((max(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)1)))), (((/* implicit */int) ((arr_17 [i_3] [i_3] [i_3] [i_3] [(unsigned short)1]) != (((/* implicit */int) (unsigned short)56668)))))))), (((((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20358))))) / (max((((/* implicit */unsigned long long int) (signed char)-124)), (9534265370701087632ULL)))))));
        var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min(((unsigned short)4011), (((/* implicit */unsigned short) (unsigned char)246))))), (max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) != (1309103464587971521ULL)))), (3417237594U)))));
    }
    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        arr_23 [i_8] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((arr_14 [i_8] [i_8] [i_8]) <= (((/* implicit */unsigned int) var_3))))), (max((((/* implicit */int) (_Bool)1)), (2147483647)))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)59695)), (0U)))), (max((((/* implicit */unsigned long long int) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8])), (3743053669549349076ULL)))))));
        arr_24 [i_8] = ((min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)55660)))), (max((313007361U), (((/* implicit */unsigned int) 982988807)))))) <= (((/* implicit */unsigned int) max((min((21), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))));
    }
    var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) 4874753488267288901LL)) / (259681406765902928ULL))) >= (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)65533)), (-365777102)))))))) < (min((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_12))))), (min((var_0), (((/* implicit */unsigned int) var_3))))))));
    var_30 = ((/* implicit */long long int) ((min((max((((/* implicit */long long int) var_7)), (var_16))), (((/* implicit */long long int) max(((unsigned short)9884), (((/* implicit */unsigned short) var_14))))))) < (((/* implicit */long long int) ((max((var_8), (126481268U))) * (((((/* implicit */unsigned int) var_3)) / (var_4))))))));
}
