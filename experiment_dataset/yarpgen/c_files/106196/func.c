/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106196
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_2])), (arr_7 [i_2]))))) ^ (max((arr_4 [i_1] [(unsigned char)13]), (((/* implicit */long long int) ((var_18) / (((/* implicit */int) var_17)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) arr_2 [1U] [(unsigned char)2]);
                        var_21 += ((/* implicit */unsigned short) 120436123U);
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-27172))));
                                var_23 += ((var_10) + (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [i_5] [i_5] [i_0])));
                                var_24 = ((/* implicit */unsigned long long int) var_17);
                                arr_16 [i_1] = ((/* implicit */signed char) arr_10 [i_1] [i_1] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_6] [i_6] [i_6]))))), (max((((/* implicit */unsigned long long int) arr_18 [i_6] [i_6])), (arr_12 [i_6])))));
        var_26 = ((/* implicit */short) ((_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 4174531167U)) && (((/* implicit */_Bool) 120436123U))))), (max((((/* implicit */unsigned short) var_11)), (var_13))))));
    }
    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((arr_21 [i_7]) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2U)))))))));
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            arr_24 [i_7] [i_8] = ((/* implicit */unsigned long long int) arr_21 [17U]);
            var_28 &= ((unsigned char) ((((/* implicit */int) ((3771054144U) == (arr_21 [i_7])))) >= (((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(unsigned char)2] [(short)4]))))))));
            arr_25 [i_7] [i_8] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2095962438U)) ? (((/* implicit */long long int) 4174531178U)) : (7939881338824276029LL)))));
            var_29 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_21 [i_7])) ? (arr_22 [i_7]) : (arr_21 [i_7]))));
        }
        /* vectorizable */
        for (unsigned char i_9 = 2; i_9 < 18; i_9 += 3) 
        {
            var_30 = ((/* implicit */_Bool) arr_21 [i_7]);
            var_31 = ((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_7] [i_9 + 1] [i_7])) % (((/* implicit */int) arr_23 [i_9 - 1] [i_9 + 3] [i_9 + 1]))));
        }
    }
    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        var_32 = ((/* implicit */unsigned long long int) arr_27 [i_10] [i_10] [(unsigned char)20]);
        var_33 = ((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_10] [12LL]))))) <= (arr_15 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))));
        var_34 = ((/* implicit */unsigned long long int) max((max((((/* implicit */short) ((signed char) var_10))), (arr_26 [i_10] [i_10] [i_10]))), (((/* implicit */short) (_Bool)0))));
    }
    for (unsigned char i_11 = 2; i_11 < 22; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (short i_14 = 1; i_14 < 21; i_14 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned char) ((signed char) var_6));
                            arr_43 [(unsigned short)0] [i_12] [i_13] = ((/* implicit */unsigned char) 6U);
                            var_36 = ((/* implicit */signed char) min((3771054132U), (523913163U)));
                        }
                        for (unsigned char i_16 = 0; i_16 < 23; i_16 += 2) /* same iter space */
                        {
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_13 - 1] [i_11 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_13 - 1] [i_11 + 1]))) : (arr_33 [i_14 - 1] [i_13 - 1] [i_11 - 1])))) ? (((/* implicit */int) arr_32 [i_13 - 1] [i_11 + 1])) : (((/* implicit */int) ((_Bool) arr_33 [i_14 + 1] [i_13 - 1] [i_11 - 2])))));
                            var_38 |= ((/* implicit */_Bool) arr_34 [i_11]);
                            arr_46 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_41 [i_11] [i_13] [i_13 - 1] [i_14] [i_16] [i_14]))) ? (((/* implicit */int) ((_Bool) arr_40 [i_13] [(_Bool)1] [12LL] [i_13] [i_16] [i_16]))) : (((/* implicit */int) ((signed char) 15U)))));
                        }
                        for (unsigned char i_17 = 0; i_17 < 23; i_17 += 2) /* same iter space */
                        {
                            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((unsigned short) arr_30 [i_11 - 1])))));
                            var_40 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 3499667900U)) ? (7939881338824276029LL) : (((/* implicit */long long int) 523913152U)))));
                            var_41 -= ((/* implicit */unsigned long long int) arr_47 [2ULL] [i_17] [i_17] [i_14] [i_13 - 1]);
                        }
                        /* vectorizable */
                        for (unsigned char i_18 = 0; i_18 < 23; i_18 += 2) /* same iter space */
                        {
                            var_42 = ((/* implicit */unsigned long long int) arr_31 [i_11]);
                            var_43 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_47 [i_14 + 1] [i_14 - 1] [i_11 - 2] [i_14] [i_13 - 1]))));
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_14 - 1] [i_11 + 1])) || (((/* implicit */_Bool) arr_42 [i_14 - 1] [i_11 + 1]))));
                            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_18] [i_18] [i_13 - 1])) ? (arr_33 [i_13 - 1] [i_14] [i_13 - 1]) : (arr_33 [i_13] [i_13] [i_13 - 1])));
                        }
                        var_46 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
                        arr_52 [i_13] [i_12] [i_12] = ((/* implicit */unsigned short) ((signed char) arr_42 [i_13 - 1] [i_11 - 1]));
                        var_47 = ((/* implicit */signed char) var_2);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_19 = 3; i_19 < 20; i_19 += 2) 
        {
            var_48 *= ((/* implicit */unsigned char) var_6);
            var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) ((arr_36 [i_19 + 3] [(_Bool)1] [i_11 - 1] [i_11 - 2]) ? (((/* implicit */int) arr_40 [(unsigned short)20] [i_19 + 2] [i_19 + 1] [i_19] [i_11 - 2] [(unsigned short)20])) : (((/* implicit */int) arr_40 [(signed char)20] [i_19] [i_19 + 2] [i_11 - 2] [i_11 - 2] [(signed char)20])))))));
            var_50 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_35 [i_11]))) / ((~(((/* implicit */int) var_16))))));
        }
        /* vectorizable */
        for (short i_20 = 0; i_20 < 23; i_20 += 3) 
        {
            var_51 = ((/* implicit */_Bool) (~(var_2)));
            var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) arr_40 [(_Bool)1] [i_20] [8U] [i_20] [i_20] [i_20]))))))));
            var_53 *= ((/* implicit */short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_8))));
        }
        arr_57 [i_11] = ((/* implicit */unsigned char) ((arr_54 [i_11] [(short)22] [i_11]) % (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
        var_54 = ((/* implicit */unsigned char) arr_38 [i_11 - 1] [i_11 - 1] [i_11 - 1] [(unsigned char)16]);
    }
    var_55 = ((/* implicit */unsigned char) ((_Bool) var_1));
}
