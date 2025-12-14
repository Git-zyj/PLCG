/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154604
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((min((((/* implicit */unsigned short) max((arr_0 [i_1]), (((/* implicit */signed char) arr_5 [i_0]))))), (var_8))), (((/* implicit */unsigned short) max((((short) arr_0 [i_1])), (((/* implicit */short) var_11))))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_8 [i_1] [i_1] [i_2 + 3] [i_1]))));
                                var_20 &= ((/* implicit */long long int) var_17);
                                arr_13 [i_0] [i_1] [i_2 + 2] [i_2 + 2] [i_0] [i_0] [4U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))), (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), ((short)-9431))))))) ? (((/* implicit */int) (signed char)127)) : ((~(((/* implicit */int) min(((short)-30716), ((short)-30716))))))));
                            }
                        } 
                    } 
                    var_21 |= ((/* implicit */unsigned int) var_16);
                }
                for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    var_22 = ((/* implicit */unsigned long long int) var_13);
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (short i_7 = 2; i_7 < 15; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))) : (18138008105193538601ULL))) >> (((((/* implicit */int) (short)-30694)) + (30696))))) + (min((((((/* implicit */_Bool) arr_10 [15U] [i_5] [i_6] [i_6])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)9430)), (arr_11 [i_6] [i_6] [i_5] [i_1] [i_6])))))))))));
                            var_24 ^= ((/* implicit */unsigned int) arr_22 [i_1] [i_7] [i_7] [i_1] [i_5]);
                            var_25 = ((/* implicit */short) (unsigned char)0);
                        }
                        for (unsigned int i_8 = 1; i_8 < 15; i_8 += 3) 
                        {
                            arr_25 [i_0] [i_5] [i_6] [i_0] = ((/* implicit */unsigned long long int) var_1);
                            var_26 = ((/* implicit */unsigned short) ((var_6) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0])) | (((/* implicit */int) arr_22 [i_0] [i_1] [i_5] [i_6] [i_0])))))));
                            var_27 = ((/* implicit */unsigned char) (short)30269);
                        }
                        /* vectorizable */
                        for (int i_9 = 4; i_9 < 15; i_9 += 2) /* same iter space */
                        {
                            arr_28 [i_0] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */unsigned char) var_6);
                            var_28 = ((/* implicit */unsigned int) 18446744073709551608ULL);
                        }
                        /* vectorizable */
                        for (int i_10 = 4; i_10 < 15; i_10 += 2) /* same iter space */
                        {
                            var_29 &= ((/* implicit */unsigned int) (!((_Bool)1)));
                            arr_31 [i_10] [i_6] [i_6] [i_1] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_1] [i_10 + 1] [i_10] [i_10 + 1] [i_1]))));
                            arr_32 [i_0] [i_1] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_27 [i_0])) && (arr_2 [i_0] [i_0]))) && (((/* implicit */_Bool) var_16))));
                            var_30 |= ((/* implicit */signed char) (short)19400);
                        }
                        var_31 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((arr_5 [i_0]) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? ((~(var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [(signed char)14] [i_0] [(signed char)14] [i_1] [(signed char)5])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        var_32 = ((/* implicit */long long int) ((unsigned int) ((unsigned short) var_12)));
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) 
                        {
                            var_33 = ((/* implicit */_Bool) var_5);
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) arr_27 [i_0])))))))) ? (arr_14 [i_0] [i_5] [i_5] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)19400)) < (((/* implicit */int) (signed char)-113))))))));
                        }
                        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_15 [8] [(unsigned short)12] [(unsigned short)12])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_15 [i_0] [i_0] [i_5])))) ^ (((/* implicit */int) (short)19414)))))));
                        arr_38 [i_0] [i_0] [i_0] [i_0] = arr_2 [(short)15] [i_1];
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 1; i_13 < 14; i_13 += 4) 
                        {
                            arr_41 [i_0] [1U] [5LL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)26)) && (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_5] [i_0] [i_0] [i_13]))));
                            var_36 *= ((/* implicit */unsigned char) ((_Bool) min((arr_16 [7LL] [i_13 + 1] [i_13] [i_13 - 1] [i_13] [i_13 + 2]), (arr_16 [i_13] [i_13 + 2] [i_13] [i_13 + 1] [i_13] [i_13 + 1]))));
                        }
                        for (signed char i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            var_37 = ((/* implicit */long long int) 572847089);
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(arr_44 [i_0] [i_0] [i_0] [i_0] [i_0])))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-19417))))) ? (14427965828866971200ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121)))))));
                        }
                    }
                    for (short i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(15504053356206539129ULL)))) ? (((((/* implicit */_Bool) var_12)) ? (arr_42 [i_0] [(unsigned char)10] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))) : (4191609191115261966ULL)));
                        var_40 *= ((/* implicit */unsigned int) min((min((arr_18 [i_1] [i_1]), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0])))), (((arr_17 [i_0] [i_5] [i_5] [i_0] [(unsigned char)2]) / (arr_17 [i_0] [i_15] [i_5] [i_15] [i_15])))));
                        var_41 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 2147483643)))) ? (((/* implicit */int) (short)21481)) : (((((/* implicit */_Bool) 81493760)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)3801)) : (((/* implicit */int) arr_33 [i_0])))) : (((((/* implicit */_Bool) arr_21 [(signed char)13])) ? (((/* implicit */int) (short)3795)) : (((/* implicit */int) var_9))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                        {
                            var_42 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_36 [i_0] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_0])) : (((/* implicit */int) arr_36 [i_16] [i_16 + 1] [i_16 + 1] [i_16] [i_0]))))));
                            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5]))));
                            arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))) - (5191159360334729982ULL)))) ? (min((((/* implicit */unsigned long long int) arr_46 [i_0] [i_1] [i_16])), (arr_42 [i_16] [i_15] [i_5] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_46 [i_0] [i_1] [i_16 + 1])) ? (12509358109148556366ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_0] [i_0] [i_0]))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_17 = 2; i_17 < 14; i_17 += 2) 
                        {
                            var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_5] [i_5] [i_0]))));
                            var_45 = ((/* implicit */unsigned int) ((((unsigned long long int) (-(((/* implicit */int) var_8))))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_29 [(short)12] [(short)12] [i_17 + 1] [i_17 - 1])))))));
                            arr_56 [i_0] [i_0] [i_0] [i_15] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) arr_19 [i_17 + 2] [i_17 + 2] [i_5] [i_15] [i_17] [i_17])))));
                            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_16)))))));
                            var_47 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_39 [i_0] [i_5]))))), ((signed char)-3))))));
                        }
                    }
                    arr_57 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [(unsigned char)8] [5LL] [i_5] [i_5]))) > (min((5937385964560995256ULL), (((/* implicit */unsigned long long int) ((short) arr_16 [i_5] [i_1] [i_0] [i_0] [i_0] [i_0])))))));
                }
            }
        } 
    } 
    var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) var_15))));
}
