/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120710
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
    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_6)) : (var_17)))) : (((var_5) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (0U)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) var_10);
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 4]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 3] [i_0 + 1]))) * (var_16))) : (((/* implicit */unsigned int) ((int) arr_0 [i_0 - 2] [i_0 - 4])))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0 - 1])) ? (10700392461352468953ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0 - 1])))))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_1] [i_0 - 1]))) : (((/* implicit */int) max(((short)255), (var_18))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((max((var_11), (0U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_2] [i_0]))))))), (((((/* implicit */_Bool) ((unsigned short) 1472382252))) ? (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) 4294967286U))))) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (15022769984377463002ULL)))))));
                        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1]))));
                        arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((unsigned short) (~(18446744073709551614ULL))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        var_26 *= ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (max((arr_12 [i_5] [10] [i_2] [(unsigned char)10] [10] [i_0]), (((/* implicit */unsigned long long int) arr_7 [(_Bool)1] [i_1] [i_1] [4])))) : (((unsigned long long int) 951296519279115793ULL)))) << (((((((/* implicit */_Bool) ((32767U) << (((var_16) - (1454990580U)))))) ? (((/* implicit */long long int) ((int) 3712346199U))) : (((((/* implicit */_Bool) (short)3)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) + (582621112LL)))));
                        arr_16 [i_0 - 1] [i_0 - 1] [i_2] [i_5] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) 11U)) && (((/* implicit */_Bool) (unsigned short)55769))))), (var_7)))) ? (max((((((/* implicit */_Bool) 17495447554430435822ULL)) ? (arr_9 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)59))))), (((((/* implicit */_Bool) 1968469243)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)6))))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) max((var_9), (((/* implicit */int) var_12))))), (max((var_17), (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_1] [i_1])))))))));
                        var_27 = ((/* implicit */long long int) min((var_27), (((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_2])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_4 [i_0 + 1] [11LL])) : (arr_1 [i_0 - 1]))) : (((/* implicit */long long int) max((arr_4 [i_1] [i_2]), (((/* implicit */unsigned int) var_0)))))))));
                        var_28 *= ((/* implicit */unsigned int) (unsigned short)11583);
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        for (long long int i_7 = 2; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) max((((/* implicit */long long int) ((int) arr_0 [i_0 - 4] [i_0 - 3]))), (max((((/* implicit */long long int) var_12)), (var_5))))))));
                                arr_22 [i_1] [(unsigned char)10] [i_2] [i_6] [i_7] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1]);
                                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) arr_7 [(short)10] [i_1] [i_2] [(short)10])) ? (var_2) : (((/* implicit */long long int) var_14)))))) > (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_12))))), (((((var_2) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))))))))));
                                var_31 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((var_17) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_18))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))))) ? (arr_1 [i_0 - 4]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1))))))));
                                var_32 = ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (arr_11 [i_0 - 2] [i_0 - 3] [(unsigned short)11] [i_0 + 1]))))) != (arr_4 [i_0 - 1] [i_0 - 1]))) ? (((/* implicit */int) max(((short)5), ((short)32767)))) : ((~(var_14)))));
    }
    for (int i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        var_34 = var_0;
        arr_25 [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_23 [i_8] [i_8])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_24 [i_8])))) << (((((((/* implicit */_Bool) var_17)) ? (arr_23 [i_8] [i_8]) : (((/* implicit */int) arr_24 [i_8])))) - (153272997)))));
        arr_26 [i_8] &= ((/* implicit */_Bool) max(((((_Bool)1) ? (((951296519279115770ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) var_17)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_23 [i_8] [i_8])) : (12998075882568746869ULL)))));
        var_35 = max(((+(7548935113699621154LL))), (((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))))));
    }
}
