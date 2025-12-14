/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11585
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    arr_8 [i_1] = ((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_2]));
                    arr_9 [i_0] [i_0] &= ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_3 [i_0])))));
                    arr_10 [i_1] [i_0] [i_1] [i_2] = ((/* implicit */short) ((int) ((unsigned long long int) var_2)));
                }
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            {
                                arr_17 [i_5] [i_1] [i_0] [i_1] [i_0] &= ((/* implicit */long long int) (!((((!((_Bool)0))) || (((((/* implicit */_Bool) 15)) && (((/* implicit */_Bool) (short)-15376))))))));
                                arr_18 [i_5] [i_1] [i_4] [(_Bool)1] [(short)4] [i_1] [(short)4] = ((/* implicit */short) max((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7346)))) + (((/* implicit */int) ((signed char) arr_2 [i_4]))))), (((/* implicit */int) ((unsigned short) arr_14 [i_0] [i_0])))));
                                var_18 = ((/* implicit */unsigned short) min((((int) var_12)), ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_4]))) > (var_13))))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) (_Bool)1);
                    arr_20 [i_0] &= ((/* implicit */long long int) max((((/* implicit */int) ((signed char) ((short) var_14)))), (max((((/* implicit */int) arr_0 [i_0])), ((~(-1373263222)))))));
                    arr_21 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)0))))) ? (var_3) : ((+(((/* implicit */int) arr_7 [i_1]))))));
                    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1]))));
                }
                for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            {
                                arr_30 [i_0] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned short)65535)), ((-(((((/* implicit */_Bool) var_5)) ? (-3688934379121421717LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [i_7])))))))));
                                var_20 = ((/* implicit */_Bool) (-(((((arr_14 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15376))))) + (((/* implicit */unsigned long long int) (((_Bool)0) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)0)), ((signed char)96)))), (((unsigned short) var_4))))) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65533)))))));
                            }
                        } 
                    } 
                    var_22 = (-(((/* implicit */int) (unsigned short)1353)));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_10 = 1; i_10 < 10; i_10 += 2) 
                        {
                            arr_38 [i_0] [i_1] [i_6] [i_6] [i_9] [i_9] [i_6] &= ((/* implicit */_Bool) max((((/* implicit */int) arr_31 [i_0])), ((~(((/* implicit */int) arr_4 [i_6]))))));
                            var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1] [i_6] [i_6] [i_10])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-8642)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_17), (arr_0 [i_0]))))) : (min((6063861347805063949ULL), (((/* implicit */unsigned long long int) var_9)))))) << (((/* implicit */int) arr_7 [12]))));
                            arr_39 [i_0] [i_1] [i_6] [i_9] [i_10] = max((arr_27 [i_10 + 1] [i_9] [i_6] [(_Bool)1] [i_0]), (((/* implicit */signed char) ((arr_22 [i_0] [i_1] [i_6] [i_1]) > (arr_22 [i_0] [i_1] [i_0] [i_10 - 1])))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) /* same iter space */
                        {
                            arr_42 [(unsigned char)10] [i_1] [(unsigned char)10] [(unsigned char)10] [(unsigned char)7] = ((/* implicit */unsigned short) (~(arr_37 [i_11] [i_1] [i_6])));
                            arr_43 [i_0] [i_1] [i_1] [i_0] [i_1] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_1] [i_11])) ? (arr_29 [i_0] [i_1] [i_6] [i_1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_11] [i_0])))));
                            var_24 = var_10;
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_6])) - (((/* implicit */int) arr_41 [i_0] [i_1] [i_12])))) % (min((((/* implicit */int) arr_33 [i_0] [(unsigned short)1] [i_1] [i_6] [(short)2] [i_0])), (-1633234906)))))) - (((unsigned long long int) min((((/* implicit */int) var_17)), (1373263222))))));
                            var_26 = ((/* implicit */unsigned short) max((arr_29 [i_1] [i_1] [i_6] [i_1] [i_0]), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((1548126759), (((/* implicit */int) (_Bool)1))))))))));
                            var_27 &= ((/* implicit */int) var_13);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 1) /* same iter space */
                        {
                            arr_49 [i_1] [i_1] [i_1] [i_6] [i_9] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_6]))))) ? ((+(arr_34 [i_0] [i_1] [(short)8] [i_9] [i_13]))) : (472173457)));
                            arr_50 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 2) 
                        {
                            arr_53 [i_0] [i_1] [i_0] [i_0] [i_0] [i_14] = ((/* implicit */signed char) (!((_Bool)1)));
                            var_28 = (signed char)117;
                            arr_54 [i_0] [i_0] [i_6] [i_1] = ((/* implicit */unsigned long long int) max((arr_1 [i_6]), (max((arr_1 [i_6]), (arr_1 [i_1])))));
                        }
                        for (unsigned char i_15 = 2; i_15 < 12; i_15 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_3))))))));
                            var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (min((min((((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_1] [i_6] [i_9] [i_15])), (2427402763U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_52 [i_0] [i_1] [i_0] [i_0] [i_15])) * (var_3))))))));
                            arr_58 [i_0] [i_1] [i_6] [i_1] = ((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_52 [i_1] [i_6] [i_15] [i_15 - 1] [i_15]))) + (-9223372036854775798LL))));
                        }
                        var_31 = ((/* implicit */short) min((((/* implicit */int) var_11)), ((~((~(((/* implicit */int) var_17))))))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) var_9))));
                        arr_59 [i_0] [i_1] [i_1] [i_1] [i_6] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_27 [i_0] [i_6] [i_0] [i_0] [i_0]), (arr_27 [i_0] [i_1] [i_6] [i_0] [i_9]))))) == (((unsigned int) ((((/* implicit */int) (unsigned short)64183)) <= (((/* implicit */int) (signed char)-4)))))));
                    }
                    var_33 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((378973899), (((((/* implicit */int) (unsigned short)64183)) | (((/* implicit */int) arr_4 [i_0]))))))) ? (((/* implicit */int) ((unsigned short) (short)-1))) : ((-(((/* implicit */int) ((unsigned short) var_12)))))));
                }
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))));
}
