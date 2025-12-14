/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162827
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
    var_14 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_15 -= ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_9 [i_2 + 1] [i_0 + 1] [i_0]), (((/* implicit */unsigned short) arr_14 [i_4] [i_0] [i_2] [i_1] [i_2] [i_0 + 1] [i_0])))))));
                                var_16 = ((/* implicit */signed char) 179255966U);
                                arr_17 [i_4] [i_1] [i_1] [i_3 - 4] [i_4] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [i_0 + 1] [i_4])) : ((-(((/* implicit */int) arr_14 [i_4] [i_1] [i_4] [i_3] [i_4] [i_3] [i_3])))))), (((/* implicit */int) ((((17) ^ (((/* implicit */int) var_5)))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_0]))))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_0]);
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4115711327U))))), (arr_11 [i_0] [i_0] [i_1] [i_0]))))));
                arr_18 [(unsigned char)8] [i_1 - 3] [(unsigned char)8] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_1 - 4]))) : (arr_5 [i_0 - 2] [i_1 - 1]))));
                arr_19 [i_1 - 3] [i_1] [i_0] = ((/* implicit */long long int) var_6);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_5 = 2; i_5 < 14; i_5 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((max((-448479982147541271LL), (((/* implicit */long long int) (signed char)-96)))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)21518))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)51)) >> (((-2397184979536893487LL) + (2397184979536893504LL)))))) : (((1999607114U) << (((((-9223372036854775807LL) - (-9223372036854775799LL))) + (19LL)))))))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_9 [i_5 - 2] [i_5 - 1] [i_5 + 1]))) ? (((/* implicit */int) (!((_Bool)1)))) : ((-(((/* implicit */int) arr_9 [i_5 + 1] [i_5 + 1] [i_5 - 2])))))))));
        arr_23 [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_11) & ((~(-1393293520904643956LL)))))) >= ((~((-(arr_21 [i_5])))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            for (unsigned char i_7 = 1; i_7 < 14; i_7 += 1) 
            {
                {
                    arr_31 [i_6] [i_6] [i_6] = ((/* implicit */signed char) var_10);
                    /* LoopSeq 4 */
                    for (long long int i_8 = 2; i_8 < 11; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_21 [i_5 - 2]))));
                        arr_34 [i_5] [i_5] [i_6] [i_7 - 1] [i_8] = ((/* implicit */unsigned char) 9223372036854775803LL);
                        arr_35 [(short)8] [i_8] |= ((/* implicit */unsigned long long int) arr_25 [i_5] [i_6] [i_8]);
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 4) 
                    {
                        arr_39 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_9] [i_7 - 1] [i_6] [i_5 - 1])) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_9 + 2] [i_7 - 1] [i_6] [i_5])) ? (((/* implicit */int) arr_4 [i_5] [i_5])) : (((/* implicit */int) var_5))))), (((arr_21 [i_9 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_9 - 1] [i_9 + 2] [i_9 + 1] [i_9 + 2] [i_7 + 1])) ? (var_6) : (((/* implicit */int) arr_10 [i_9 + 2] [i_9] [i_9 - 1] [i_7 - 1] [i_7 - 1])))))));
                        var_22 = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) 2398584825U)) && (((/* implicit */_Bool) arr_22 [i_7] [i_9 + 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_5])) || (((/* implicit */_Bool) arr_33 [i_9 - 1]))))) : (((/* implicit */int) (unsigned short)3727))))));
                        var_23 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) var_0)) >= (((((/* implicit */int) arr_1 [i_5])) / (var_6))))))));
                    }
                    for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        arr_42 [i_6] = ((/* implicit */signed char) (+(arr_32 [i_6] [i_10] [i_10] [i_10])));
                        var_24 = ((/* implicit */unsigned int) var_7);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2431)) ? (((/* implicit */unsigned int) -312465375)) : (4294967295U))))));
                            var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)16)) ? (-2898623258945668745LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124)))));
                        }
                        for (long long int i_13 = 2; i_13 < 12; i_13 += 3) 
                        {
                            var_27 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) arr_21 [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_21 [i_5 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_13 + 3] [i_7 - 1] [i_5 + 1])) ? (((/* implicit */int) arr_30 [i_13 - 1] [i_7 - 1] [i_5 - 1])) : (((/* implicit */int) (unsigned short)65535)))))));
                            var_28 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_29 = (unsigned short)0;
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (~(arr_32 [i_5] [i_6] [i_6] [i_6]))))));
                        }
                        for (short i_15 = 3; i_15 < 14; i_15 += 3) 
                        {
                            var_31 = ((/* implicit */int) arr_36 [6] [6] [i_6]);
                            var_32 |= ((/* implicit */unsigned char) ((14514676919425526486ULL) != (((/* implicit */unsigned long long int) (((+(arr_29 [i_6] [i_7] [i_11]))) ^ (((((/* implicit */_Bool) (unsigned short)33347)) ? (-1352271409) : (((/* implicit */int) (_Bool)1)))))))));
                            var_33 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_28 [i_5] [i_5 + 1] [i_6] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_6]))) : (((arr_25 [i_6] [i_6] [i_7]) ? (2466174574U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_15] [i_7] [i_6]))))))));
                        }
                        arr_57 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (short)-32758)) & (134217728))) : ((~(((/* implicit */int) arr_6 [i_6] [i_6]))))));
                    }
                    var_34 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (_Bool)1))))), ((~(((/* implicit */int) arr_24 [i_5 - 1] [i_5]))))));
                }
            } 
        } 
    }
    for (signed char i_16 = 2; i_16 < 14; i_16 += 2) /* same iter space */
    {
        arr_62 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_16] [i_16])) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) (signed char)-10))))), (1073741312U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_16] [i_16] [i_16])) && (((/* implicit */_Bool) ((arr_53 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16 - 2] [i_16]) ? (((/* implicit */int) arr_30 [i_16] [i_16] [i_16])) : (arr_29 [i_16] [i_16] [i_16]))))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)17850)) != (((/* implicit */int) arr_4 [i_16 - 2] [i_16])))))));
        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (((-(((/* implicit */int) var_0)))) + (((((/* implicit */_Bool) var_4)) ? (arr_29 [i_16 - 2] [i_16 - 2] [0U]) : (((/* implicit */int) (short)32767)))))))));
    }
    /* vectorizable */
    for (signed char i_17 = 2; i_17 < 14; i_17 += 2) /* same iter space */
    {
        var_36 = ((/* implicit */int) (short)32757);
        var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_13))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 3) 
    {
        var_38 += ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_67 [i_18])) ? (-686535631) : (((/* implicit */int) (unsigned short)32289))))))), (min((((/* implicit */long long int) 499604853)), (var_11)))));
        var_39 = ((/* implicit */_Bool) arr_67 [i_18]);
    }
    var_40 *= ((/* implicit */unsigned long long int) var_9);
}
