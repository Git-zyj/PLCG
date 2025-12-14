/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127070
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
    var_15 &= ((/* implicit */short) var_11);
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            arr_6 [i_0] = min((max((((int) var_12)), (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (signed char)-91))))))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 2] [i_1])) > (var_13)))));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) min((arr_3 [i_0]), ((~(((/* implicit */int) (signed char)124))))))) : (((long long int) arr_4 [i_1 + 3] [i_1 + 3]))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 3) 
        {
            arr_11 [i_0] [(unsigned short)1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)52)) - (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (unsigned short)50793))))));
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (4294967291U) : (((/* implicit */unsigned int) arr_7 [(signed char)16]))))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) (unsigned short)20687))))))) ? ((-(((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (signed char)61))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-18671)))))));
                            var_19 = ((/* implicit */long long int) arr_0 [i_2 + 1] [i_3]);
                        }
                    } 
                } 
                var_20 |= ((/* implicit */unsigned int) (signed char)99);
            }
            for (signed char i_6 = 2; i_6 < 15; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 3; i_7 < 16; i_7 += 3) 
                {
                    for (unsigned int i_8 = 1; i_8 < 16; i_8 += 3) 
                    {
                        {
                            arr_29 [i_0] = ((/* implicit */unsigned int) arr_7 [i_2]);
                            var_21 = ((/* implicit */unsigned int) max(((-(((var_6) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))), (((/* implicit */int) var_0))));
                            var_22 ^= ((/* implicit */unsigned int) (short)-17726);
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((-2145236961) / (((/* implicit */int) (signed char)-108)))))));
                        }
                    } 
                } 
                arr_30 [(short)4] [i_0] [i_6 + 1] = min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (2ULL))), (((/* implicit */unsigned long long int) ((var_12) >= (((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    var_24 |= ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) arr_3 [i_6])), (((arr_10 [i_0 + 1] [i_9] [i_9]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                    var_25 = ((/* implicit */short) min((var_25), (var_5)));
                }
            }
        }
        arr_35 [i_0] = ((/* implicit */long long int) (~((-(min((((/* implicit */unsigned long long int) var_12)), (1115209262931454786ULL)))))));
    }
    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
    {
        arr_38 [i_10] = ((/* implicit */unsigned short) min((-7801342485843752225LL), (((/* implicit */long long int) (signed char)-124))));
        arr_39 [i_10] = ((/* implicit */_Bool) min(((-(-2145236961))), (2145236960)));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_37 [i_10]), (arr_37 [i_10])))) ? (((((/* implicit */unsigned long long int) 4294967281U)) | (((17331534810778096833ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_10]))))))) : (((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_10]))) : (0ULL)))));
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
    {
        arr_42 [i_11] [i_11] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -2145236976)) ? (arr_37 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
        var_27 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((var_12) + (2147483647))) << (((((/* implicit */int) var_10)) - (1))))) : (((/* implicit */int) arr_5 [i_11] [i_11])))))));
    }
    var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) 2838611219U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)102)) ^ (-136715021)))) ? (12304907256965406458ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))))));
}
