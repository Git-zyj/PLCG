/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126652
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((((/* implicit */long long int) 1404569617U)) != (3523503410451799467LL));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_5 [i_0] [i_1 + 1])), (arr_3 [i_0] [i_0] [(_Bool)0]))), (((/* implicit */long long int) var_9))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_12 = min((min((194321816), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (arr_8 [11ULL] [11ULL] [13U] [13U])))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (arr_0 [i_1 - 1])))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_13 [i_0] [i_1] [i_1 - 1] [i_3 + 1] [i_3 + 1]), (arr_13 [i_3] [i_1] [i_1 - 1] [i_3 - 2] [i_3 + 1])))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2890397679U)) ? (67043328U) : (((/* implicit */unsigned int) 690009444)))))))));
                                var_13 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2890397694U)) ? (((/* implicit */unsigned int) 246718961)) : (129024U)))) != (((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                                arr_16 [i_1 + 1] [(unsigned short)13] [(unsigned short)14] [i_3] [i_4] = min((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (signed char)41)) ? (1404569617U) : (3175869125U))));
                                arr_17 [i_0] [i_0] [i_0] [(unsigned short)1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (2890397661U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9))))))), (((8066278574626429892ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16384)))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_1);
                    arr_19 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_0 [i_1 + 1])) - (59833))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((2199023124480LL), (((/* implicit */long long int) 1119098170U))))))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 3; i_8 < 12; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_33 [i_6] [i_6] [i_6] [i_9] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                            var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : ((-(10380465499083121741ULL)))));
                            arr_34 [11U] [i_8] [i_7] [i_6] [i_6] [i_5] = ((/* implicit */int) (~(2777381879797509420LL)));
                        }
                    } 
                } 
                arr_35 [(unsigned short)0] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_5])) && (((/* implicit */_Bool) ((((var_8) + (9223372036854775807LL))) << (((((/* implicit */int) (short)504)) - (504))))))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    for (short i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) var_9);
                            arr_40 [i_7] [i_7] = ((/* implicit */unsigned char) ((8857299439052879636ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)-811)) : (((/* implicit */int) (short)-811)))))));
                        }
                    } 
                } 
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) 123145302310912LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_5] [i_6] [i_6] [i_12]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : ((~(var_8)))))));
                arr_45 [i_12] [i_5] |= ((2890397679U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)7680))));
            }
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 13; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 4; i_15 < 11; i_15 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_15 - 1] [i_6] [i_13] [i_14] [8U] [i_13 - 2])) ? (((/* implicit */int) arr_29 [i_15 - 2] [i_15 - 2] [(unsigned char)3] [1LL] [i_15] [i_13 + 1])) : (((/* implicit */int) arr_29 [i_15 - 4] [i_6] [i_6] [i_14] [i_15] [i_13 - 2]))));
                            arr_55 [i_15 + 2] [i_6] [9] [i_13 + 1] [i_15] = ((/* implicit */unsigned int) (-(arr_30 [i_15 - 3] [i_13])));
                            arr_56 [i_15] [i_14] [(signed char)2] [i_13 - 2] [i_6] [13LL] [i_5] = ((/* implicit */short) var_0);
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (_Bool)1))));
                        }
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_54 [i_13] [i_6] [i_13 - 1] [i_14] [i_14] [i_13 - 2])) + (((/* implicit */int) var_2))));
                        var_21 = ((/* implicit */long long int) var_7);
                    }
                } 
            } 
            arr_57 [i_5] &= ((((/* implicit */_Bool) (+(501983125U)))) ? (((/* implicit */int) (unsigned short)37590)) : ((-(((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [(_Bool)1] [i_6] [5])))));
        }
        var_22 = ((/* implicit */short) ((signed char) (unsigned char)122));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_5] [i_5] [i_5] [i_5]))) != (-5984923286818138471LL)));
    }
    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 3) /* same iter space */
    {
        var_24 -= (short)-504;
        /* LoopSeq 1 */
        for (short i_17 = 1; i_17 < 13; i_17 += 1) 
        {
            var_25 = ((/* implicit */short) (signed char)107);
            var_26 = ((/* implicit */_Bool) (signed char)-2);
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 14; i_18 += 3) 
            {
                for (int i_19 = 0; i_19 < 14; i_19 += 4) 
                {
                    {
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) min((((((/* implicit */_Bool) arr_52 [i_17 - 1])) ? (arr_52 [i_17 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_17 + 1] [i_17] [i_17])) && (((/* implicit */_Bool) arr_48 [i_17 - 1] [i_17] [i_18]))))))))));
                        var_28 *= ((_Bool) arr_64 [i_17]);
                        arr_68 [i_16] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_0))))), (arr_30 [i_16] [i_16])));
                    }
                } 
            } 
        }
    }
}
