/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163917
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
    var_17 *= ((/* implicit */short) (-((+(min((3453257606U), (((/* implicit */unsigned int) -2147483641))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1457200896)) == (3498796742739853359LL)))), ((-(max((arr_3 [i_1]), (arr_3 [i_1])))))))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        arr_12 [i_1] [i_2] [i_1] [i_1] |= ((/* implicit */unsigned int) ((((((3519824046U) & (((/* implicit */unsigned int) -2147483641)))) ^ (min((775143262U), (775143251U))))) == (((/* implicit */unsigned int) ((/* implicit */int) (((-(var_5))) < (((/* implicit */unsigned int) arr_10 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1]))))))));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_2)) ? (arr_9 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) 970192245)))))) ? ((((-(3519824060U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 536870911U)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_2]))))))));
                        var_20 -= ((/* implicit */long long int) ((-536870912) % (((/* implicit */int) (signed char)-45))));
                        var_21 = ((/* implicit */unsigned int) ((int) (+((+(536870919U))))));
                        var_22 |= ((unsigned int) min((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2] [i_1])), (var_6)));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_2] = ((arr_4 [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_2]) == (1837200154))))));
                        var_23 += ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-19671))))) / (((((/* implicit */_Bool) 2946849330U)) ? (4214578572058379112ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? ((-(1963680085U))) : (((/* implicit */unsigned int) min((((/* implicit */int) (short)19671)), (-970192245)))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_1] [i_2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1] [i_4] [i_2])) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-6))) >= (arr_2 [i_0] [i_2]))))))) : (((((((/* implicit */_Bool) 23ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39134))) : (var_4))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -970192250)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7772))) : (2722321899U))))))));
                        var_25 -= (-(var_10));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_26 = (i_2 % 2 == zero) ? (((/* implicit */signed char) (((~(arr_4 [i_5] [i_2]))) << (((((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_2]))) & (arr_9 [i_5] [i_5] [i_2]))) - (3732952711528435711LL)))))) : (((/* implicit */signed char) (((~(arr_4 [i_5] [i_2]))) << (((((((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_2]))) & (arr_9 [i_5] [i_5] [i_2]))) - (3732952711528435711LL))) + (19969LL))))));
                        arr_18 [i_1] [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_5 - 1])))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0]) : (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)32265)))))));
                        var_27 ^= ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_1]))))) & ((~(var_7)))));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            arr_26 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)62)) ? (arr_25 [i_0] [i_1] [i_2] [i_6] [i_7]) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_6 - 1]))))), ((-(4373074642233517372LL)))))) ? (min((17570732218249537510ULL), (((/* implicit */unsigned long long int) 3772448867U)))) : (min((((((/* implicit */unsigned long long int) arr_25 [i_0] [i_1] [i_2] [i_6] [i_7])) - (var_15))), (((/* implicit */unsigned long long int) min((1348117956U), (((/* implicit */unsigned int) (short)24)))))))));
                            var_28 ^= ((/* implicit */short) max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_6 - 1])) <= (arr_25 [i_6] [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1]))))));
                            arr_27 [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (signed char)59)))) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_2])))), ((-(((/* implicit */int) ((short) var_1)))))));
                        }
                        for (unsigned int i_8 = 3; i_8 < 8; i_8 += 3) 
                        {
                            arr_30 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */long long int) arr_28 [i_0] [i_1] [i_1] [i_2] [i_2] [i_6] [i_8]);
                            arr_31 [i_0] [i_1] [i_2] [i_6] [i_6] [i_8 - 2] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_14 [i_6 - 1] [i_6] [i_8 - 3] [i_2] [i_8 - 1]), (arr_14 [i_6 - 1] [i_6 - 1] [i_8 + 1] [i_2] [i_8 - 3])))) ? (((arr_14 [i_6 - 1] [i_6] [i_8 - 3] [i_2] [i_8 + 1]) - (arr_14 [i_6 - 1] [i_8] [i_8 + 1] [i_2] [i_8 - 2]))) : ((~(arr_14 [i_6 - 1] [i_8 - 1] [i_8 + 1] [i_2] [i_8 - 1])))));
                        }
                        for (signed char i_9 = 1; i_9 < 7; i_9 += 2) 
                        {
                            arr_34 [i_2] [i_9] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_0] [i_6] [i_9] [i_1])) ? (arr_24 [i_2] [i_2] [i_2]) : (arr_1 [i_6]))) : ((+(((/* implicit */int) arr_5 [i_0])))))), ((+(-2147483641)))));
                            arr_35 [i_2] [i_2] [i_2] [i_6] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_20 [i_2] [i_0]))))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) max((((/* implicit */short) min(((unsigned char)176), (((/* implicit */unsigned char) ((signed char) (short)19508)))))), ((short)-22193))))));
                        }
                        var_30 += ((/* implicit */unsigned long long int) (~((+(((int) (unsigned char)13))))));
                    }
                }
            } 
        } 
    } 
}
