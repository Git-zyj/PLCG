/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108103
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_11 = max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1]))))), (min((max((((/* implicit */unsigned long long int) arr_5 [i_1])), (var_7))), (((/* implicit */unsigned long long int) (_Bool)1)))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
                    {
                        var_12 = ((/* implicit */short) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_1 [i_0]))))), (arr_1 [i_1])));
                        var_13 += ((/* implicit */unsigned long long int) 933463020U);
                    }
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned int) var_8);
                        var_15 = ((/* implicit */short) arr_5 [i_4]);
                        var_16 *= ((var_10) ^ (var_10));
                        var_17 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_4]);
                        var_18 &= ((((/* implicit */_Bool) ((227808981570601879ULL) >> (((227808981570601877ULL) - (227808981570601821ULL)))))) ? (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_4])), (4294967295U)))) | (max((((/* implicit */unsigned long long int) arr_1 [i_2])), (14051573782174490903ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 227808981570601901ULL))))) % (((/* implicit */int) arr_5 [i_0]))))));
                    }
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)10506))))) ? (((/* implicit */int) arr_5 [i_0])) : (((((/* implicit */int) arr_6 [i_0])) * (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))));
                        var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_2] [i_2] [i_1] [i_0])) - (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_5]))))), (227808981570601901ULL)));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5]))) ^ (((((/* implicit */_Bool) max((4128768U), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned long long int) 70650077U)) : (((arr_4 [i_0] [i_0] [i_5]) << (((arr_13 [i_2]) - (2377270213923426875ULL)))))))));
                        var_22 ^= ((/* implicit */_Bool) (unsigned char)255);
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 11; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 13; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21149))) < ((~(((((/* implicit */_Bool) arr_9 [i_2] [(signed char)7])) ? (arr_10 [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6] [i_1])))))))));
                                var_24 *= ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) (unsigned short)36491)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39650))) : (arr_18 [(unsigned char)10] [i_1] [i_1] [12]))), (arr_18 [i_6 + 1] [i_1] [i_1] [i_7 + 1])))));
                                var_25 *= ((((/* implicit */long long int) ((unsigned int) min((16821560156208690621ULL), (((/* implicit */unsigned long long int) arr_14 [i_2])))))) / (((((/* implicit */_Bool) (+(1625183917500860996ULL)))) ? ((-(arr_16 [i_0] [i_0] [i_0] [(short)7] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7] [i_1] [i_1] [i_6 + 3] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 &= ((/* implicit */short) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_4))), (18446744073709551612ULL)));
    var_27 = var_2;
    var_28 = ((/* implicit */long long int) var_9);
}
