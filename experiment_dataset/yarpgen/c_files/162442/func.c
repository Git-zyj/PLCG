/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162442
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
    var_13 = ((/* implicit */unsigned int) var_3);
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (var_2)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25950))) : (arr_12 [i_3 + 2] [i_4] [i_1 - 2] [i_3])))) ? (min((min((((/* implicit */unsigned long long int) arr_7 [(unsigned char)0] [8] [i_4] [i_3 - 1])), (var_4))), (((/* implicit */unsigned long long int) max((332962182U), (var_6)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_14 [i_2] [i_2] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) var_1)) : (arr_10 [i_0] [i_2] [i_3 - 1] [i_1 - 1]))))));
                                arr_16 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_12);
                                arr_17 [i_4] [i_2] [5U] [i_2] [i_0] = ((/* implicit */long long int) (~(min((arr_9 [i_1 + 1] [i_1 + 1] [i_3 + 1]), (((/* implicit */int) (short)-19855))))));
                                arr_18 [4U] [i_1 - 2] [(signed char)8] [20U] [i_1 - 2] [i_2] = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
                {
                    var_16 = ((/* implicit */unsigned int) (_Bool)0);
                    arr_23 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_12);
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        arr_27 [i_0] [i_6] [i_5] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1 - 2]))));
                        var_17 = ((/* implicit */unsigned int) ((unsigned char) (_Bool)0));
                    }
                    for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((int) (unsigned short)1047));
                        var_19 = ((/* implicit */unsigned long long int) ((short) (unsigned short)64565));
                    }
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_9 = 1; i_9 < 19; i_9 += 3) /* same iter space */
                    {
                        arr_34 [i_8] [i_9 + 1] [i_8] [4U] [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_20 [i_9 + 2] [i_1 - 1] [i_1 - 2]))));
                        arr_35 [i_0] [(_Bool)0] [i_1] [i_1] [16LL] [i_8] = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [2U] [i_1] [5ULL]))))));
                        var_20 = var_1;
                        var_21 = ((/* implicit */long long int) (!(var_5)));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 1; i_10 < 19; i_10 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_22 *= ((/* implicit */unsigned char) var_8);
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_0] [i_1 + 1] [i_8] [i_10 + 3] [i_8])) ? (var_11) : (((/* implicit */int) (short)19855))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_10 + 2] [i_11])) ? (((int) (_Bool)1)) : (((((/* implicit */_Bool) arr_32 [i_10] [i_8] [i_8] [(unsigned short)13])) ? (4095) : (((/* implicit */int) arr_30 [i_1 - 2]))))));
                        }
                        for (unsigned short i_12 = 1; i_12 < 19; i_12 += 1) 
                        {
                            var_25 ^= (unsigned short)64489;
                            arr_44 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + ((+(((/* implicit */int) arr_40 [i_8] [i_0]))))));
                            var_26 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_12))))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (unsigned short)64503))));
                        }
                        for (long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            var_28 = ((/* implicit */int) (unsigned short)25250);
                            var_29 = ((/* implicit */_Bool) ((arr_7 [i_1 - 2] [i_1 + 1] [i_10 - 1] [i_13]) ? (((((/* implicit */_Bool) (short)19854)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [21ULL] [i_13]))) : (var_0))) : (arr_10 [i_0] [i_8] [i_8] [i_13])));
                        }
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)115)) / (((/* implicit */int) (short)19855))));
                        var_31 |= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)128))));
                    }
                    var_32 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [(_Bool)1] [i_1] [i_8]))))))), (2046)));
                    /* LoopNest 2 */
                    for (short i_14 = 1; i_14 < 21; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 22; i_15 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) arr_25 [i_0] [i_1] [i_8] [i_14]))), (var_10)))) : (((((/* implicit */_Bool) (~(arr_32 [i_0] [i_0] [i_8] [i_14])))) ? (arr_22 [i_1 + 1] [i_1 - 2] [i_14 + 1] [i_14]) : (((/* implicit */unsigned int) var_1))))));
                                arr_54 [i_0] [i_1] [i_8] [i_8] [i_15] = ((/* implicit */int) min((max((arr_14 [i_8] [i_1] [i_8] [i_15]), (arr_14 [i_8] [(_Bool)1] [i_14] [13]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_8] [i_1 - 1] [i_1 - 2] [(short)7])) && (((/* implicit */_Bool) arr_14 [i_8] [i_1] [i_8] [i_15])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        for (short i_17 = 1; i_17 < 20; i_17 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_7)), (var_2))), (max((var_8), (((/* implicit */unsigned long long int) (short)14817))))));
                                var_35 = ((/* implicit */short) arr_48 [i_8] [i_17 + 2] [i_17 + 2] [i_1 - 1]);
                            }
                        } 
                    } 
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) > (var_8)))), (var_1)))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 - 1] [i_1 - 1])))) == (var_4))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_19 = 2; i_19 < 20; i_19 += 3) 
                    {
                        arr_66 [19] [i_18] [i_18] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_41 [i_18] [i_0] [i_1] [i_0] [i_18])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8386))))), (((/* implicit */unsigned long long int) (signed char)-11))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_12))) != (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_19 - 2]))))))) : ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_11)) : (-8375233428465602435LL)))))));
                        var_37 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1047005417)) ? (((/* implicit */unsigned int) var_11)) : (var_0)))) : (arr_61 [(unsigned short)2] [(unsigned short)2]))), (((var_2) & (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_19] [i_1 - 1] [i_18] [i_19 - 1] [i_18] [i_18])))))))));
                        arr_67 [i_18] = var_10;
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_38 ^= (short)0;
                        arr_70 [i_0] [i_18] [i_0] [i_20] [(signed char)17] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((var_5) && (((/* implicit */_Bool) arr_29 [i_0] [i_18] [i_0] [i_0]))))), (((unsigned char) 1047005397))));
                    }
                    var_39 *= ((/* implicit */unsigned long long int) arr_38 [i_0] [i_1] [i_0]);
                }
            }
        } 
    } 
}
