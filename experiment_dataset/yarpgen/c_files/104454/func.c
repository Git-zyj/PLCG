/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104454
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [(_Bool)1] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned short) (+((~(var_1)))));
                                var_14 = ((/* implicit */long long int) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 4; i_5 < 9; i_5 += 4) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [i_1] [i_2] [(short)0] = var_7;
                        var_15 = ((/* implicit */unsigned char) var_9);
                        arr_19 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */short) (_Bool)1);
                    }
                    for (unsigned char i_6 = 4; i_6 < 9; i_6 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */signed char) ((short) (signed char)-124));
                        var_17 = ((/* implicit */unsigned char) (-(arr_16 [i_6] [i_6 - 1] [i_6] [i_6 - 4])));
                        var_18 = ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_6])) ? (((((/* implicit */unsigned long long int) var_1)) / (var_3))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (arr_10 [i_2] [1LL])))));
                        var_19 = ((/* implicit */signed char) max((var_19), ((signed char)124)));
                        /* LoopSeq 3 */
                        for (short i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (-(((-7619038929954616431LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)3)))))));
                            arr_26 [i_0] [i_1] [i_1] [i_6 - 1] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) arr_9 [i_0] [i_2] [i_6] [i_7])) : (((/* implicit */int) var_10)))) + (((/* implicit */int) var_11))));
                            arr_27 [i_1] [i_2] [i_6 - 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_1])) ? (arr_1 [i_0] [i_0]) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3866660614U)))));
                        }
                        for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            arr_30 [i_0] [i_1] [i_2] [(short)4] [i_8] = (~(((/* implicit */int) arr_6 [i_1] [i_6 + 1] [i_8])));
                            arr_31 [i_0] [i_1] [i_2] [i_1] [(signed char)9] = ((/* implicit */int) ((short) arr_21 [i_6 + 1] [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_8] [(unsigned short)6]));
                            var_20 = ((/* implicit */short) ((int) 9070611744609937743LL));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_21 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_6 - 2])) : (((/* implicit */int) arr_12 [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 2]))));
                            var_22 = ((/* implicit */unsigned int) var_10);
                        }
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            arr_34 [i_2] = ((/* implicit */unsigned int) (((!(var_0))) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) var_11))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_6 - 2] [i_6 - 4] [i_6 - 4] [i_9] [i_9])) ? (((((/* implicit */_Bool) (short)-7973)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_0])) : (((/* implicit */int) arr_23 [i_1])))) : (((((((/* implicit */int) (signed char)-19)) + (2147483647))) << (((((((/* implicit */int) arr_32 [i_0] [i_1] [i_2] [i_6] [(unsigned short)7])) + (52))) - (4)))))));
                            arr_35 [i_1] [i_2] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(-759060183)))) | (((unsigned long long int) arr_12 [i_0] [i_1] [i_0] [i_1] [i_9]))));
                        }
                    }
                    for (unsigned char i_10 = 4; i_10 < 9; i_10 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) (_Bool)1);
                        var_25 -= ((arr_3 [i_1]) / (((((/* implicit */int) arr_28 [i_0])) + (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_2] [i_0])))));
                    }
                    arr_38 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_32 [i_0] [(unsigned char)1] [i_1] [(short)2] [i_2])) : (((/* implicit */int) (_Bool)0))))));
                    arr_39 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (-(var_9)));
                }
                /* vectorizable */
                for (signed char i_11 = 4; i_11 < 9; i_11 += 1) 
                {
                    var_26 = ((/* implicit */long long int) ((_Bool) (signed char)-109));
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_11 - 2] [i_11 + 1])) * (((/* implicit */int) arr_36 [i_0] [i_1] [i_1] [i_11] [i_11] [i_11])))))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 3; i_12 < 9; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_12 - 3] [i_13] [i_13])) | (((/* implicit */int) var_2))));
                                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)43148)) ? (((/* implicit */int) (signed char)-101)) : (-2039521551))))));
                                var_30 = ((/* implicit */unsigned short) arr_6 [i_0] [i_11] [(_Bool)1]);
                                arr_48 [i_0] [i_1] [i_13] [i_11] [6LL] [6LL] = ((/* implicit */short) var_1);
                                arr_49 [i_13] = ((/* implicit */unsigned char) 428306672U);
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_11] [i_11 - 2])))))));
                }
                /* vectorizable */
                for (int i_14 = 4; i_14 < 8; i_14 += 1) 
                {
                    arr_52 [i_0] [i_0] [i_14] = var_5;
                    arr_53 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-109))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_14] [i_14 + 2] [i_14] [i_14 - 2] [i_14 + 2] [i_14]))) : ((+(var_3))));
                    arr_54 [i_0] [i_1] [(short)3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (signed char)-4))));
                }
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (signed char)-69))));
                arr_55 [i_0] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65))) > (((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0]))))))), (arr_4 [i_0])));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) << (((((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_12))))) - (26765927U)))));
    var_34 = ((/* implicit */signed char) (((+((((_Bool)1) ? (3866660610U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11022))))))) + (max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)73)) * (((/* implicit */int) (unsigned short)43147))))), ((~(var_1)))))));
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (unsigned short)53474))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) (signed char)101)) & (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))) : (((var_4) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65297))))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))))));
}
