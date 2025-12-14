/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185822
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
    var_10 += ((/* implicit */signed char) (~(((((((var_6) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-18)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_10 [i_3] [i_3] [i_3 - 2] [i_3 + 1] [i_3] [i_3] [i_3 - 3] = ((/* implicit */short) arr_7 [i_0] [i_4] [(signed char)14] [i_0] [i_3]);
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((short) (short)(-32767 - 1))))));
                                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_5))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_5 = 3; i_5 < 12; i_5 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_7 = 3; i_7 < 13; i_7 += 2) 
                {
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_0))));
                    var_15 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_5 + 1])) * (((/* implicit */int) arr_1 [i_7 + 2]))));
                    arr_18 [i_7] = ((/* implicit */signed char) var_1);
                    arr_19 [i_7] [i_6] = ((/* implicit */signed char) arr_17 [i_0] [i_5] [i_7] [i_0]);
                }
                var_16 -= ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                var_17 ^= ((signed char) ((((/* implicit */int) var_6)) < (((/* implicit */int) (short)(-32767 - 1)))));
                var_18 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_6]);
                arr_20 [i_0] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6] [i_0])) ? (arr_0 [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            }
            var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_0]))));
            /* LoopNest 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    {
                        arr_25 [i_5] [i_5] [i_5] [i_9] = ((/* implicit */unsigned char) var_7);
                        arr_26 [(unsigned short)8] [(unsigned short)8] [i_8] = ((/* implicit */short) ((-4470272696576375858LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)6)))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2435123345758111630LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60)))));
        }
        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        {
                            arr_37 [i_10] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_5))))))));
                            var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (231350646) : (((/* implicit */int) arr_28 [i_11]))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_8)) & (((/* implicit */int) var_2))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
            /* LoopSeq 4 */
            for (unsigned long long int i_14 = 4; i_14 < 13; i_14 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */int) arr_3 [i_10] [i_10]);
                arr_41 [(unsigned char)5] [i_10] = ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)29059)));
                arr_42 [i_0] [i_10] [i_0] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7)));
            }
            for (unsigned long long int i_15 = 4; i_15 < 13; i_15 += 2) /* same iter space */
            {
                var_24 = ((/* implicit */int) var_5);
                var_25 = var_7;
                var_26 = ((/* implicit */signed char) (~(var_7)));
            }
            for (unsigned long long int i_16 = 4; i_16 < 13; i_16 += 2) /* same iter space */
            {
                arr_49 [i_0] [i_10] [i_10] [i_0] = ((/* implicit */unsigned short) arr_11 [i_16 + 1] [i_16 - 4] [i_16 + 1]);
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))));
                var_28 = ((/* implicit */signed char) (+(((((/* implicit */int) var_0)) - (((/* implicit */int) var_9))))));
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)60))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_28 [i_16])))))));
            }
            for (unsigned long long int i_17 = 4; i_17 < 13; i_17 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned char i_19 = 0; i_19 < 15; i_19 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((var_8) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))));
                            var_31 -= var_2;
                            var_32 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_29 [i_17] [i_0] [i_17 - 1] [i_17 + 1]))));
                            arr_59 [i_0] [i_10] [i_18] [i_18] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_10] [(unsigned short)4] [(unsigned short)4] [i_18])) ? (((arr_57 [i_0] [i_10] [i_17] [i_18] [i_10]) - (((/* implicit */int) var_2)))) : (((int) var_1))));
                        }
                    } 
                } 
                arr_60 [i_10] = ((/* implicit */long long int) (short)-32745);
            }
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_53 [i_0] [i_0] [i_10])) ? (((/* implicit */int) (unsigned short)43803)) : (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) (unsigned char)60))))));
            var_34 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) (unsigned short)48573)))) + (2147483647))) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_7))) - (42LL)))));
        }
        /* LoopNest 2 */
        for (unsigned short i_20 = 3; i_20 < 14; i_20 += 3) 
        {
            for (short i_21 = 0; i_21 < 15; i_21 += 2) 
            {
                {
                    var_35 ^= ((/* implicit */int) var_0);
                    var_36 = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_0] [i_20 - 3] [i_20] [i_20])) != (((/* implicit */int) var_3))));
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned char) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        arr_65 [i_0] [i_0] = ((/* implicit */short) var_6);
    }
    for (int i_22 = 0; i_22 < 15; i_22 += 3) /* same iter space */
    {
        var_38 = (((!((!(((/* implicit */_Bool) -2435123345758111634LL)))))) && (((((/* implicit */_Bool) arr_23 [i_22] [i_22] [i_22] [i_22])) || (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_7)))))));
        var_39 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)0)))) << (((((/* implicit */int) arr_13 [i_22])) + (((/* implicit */int) arr_13 [i_22]))))));
    }
    var_40 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((var_6) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)60))))))))) ^ ((-9223372036854775807LL - 1LL))));
}
