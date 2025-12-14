/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153891
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (-(((((((/* implicit */int) arr_0 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) (short)-11677)) + (11683)))))));
        arr_4 [1ULL] &= ((/* implicit */signed char) var_3);
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned short i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            var_15 = ((/* implicit */_Bool) var_7);
            var_16 &= ((/* implicit */unsigned char) arr_2 [i_1]);
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 3; i_5 < 12; i_5 += 4) 
                    {
                        arr_17 [i_5 - 3] [i_4] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (3621866104U) : (2351934077U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_12 [i_2] [i_3] [i_3] [i_5]) < (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((2383958845U) >> (((3621866095U) - (3621866079U)))))));
                        var_17 = ((/* implicit */short) var_7);
                    }
                    var_18 = ((/* implicit */signed char) var_1);
                }
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */short) arr_9 [i_1] [i_2 + 2] [i_6] [i_7]);
                            arr_23 [i_7] [i_6] [i_2 + 1] [i_2 + 1] [i_1] = ((/* implicit */short) arr_16 [i_1] [i_1] [i_3] [i_6] [i_7]);
                        }
                    } 
                } 
            }
            for (long long int i_8 = 2; i_8 < 11; i_8 += 2) 
            {
                arr_28 [i_1] [i_2 + 3] [i_8] [i_8] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_1]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)40))) - (2383958845U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)64137)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) arr_5 [i_1]))))))));
                arr_29 [i_1] [i_2] [i_8] |= ((/* implicit */short) var_9);
            }
        }
        for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            var_20 = ((/* implicit */long long int) ((arr_15 [i_1] [i_1] [i_9] [i_9] [i_9]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_9] [i_9])) ? (((arr_9 [i_9] [i_9] [i_9] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((3675635981U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
            var_21 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))) < ((~((+(var_7)))))));
        }
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2383958834U)) ? (1911008461U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))))))));
            arr_34 [i_1] = ((/* implicit */unsigned short) ((short) (_Bool)1));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((unsigned long long int) ((((2383958834U) + (673101192U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_10] [i_1]))))))));
        }
        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_27 [i_1]))));
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 14; i_14 += 3) 
                    {
                        {
                            arr_43 [i_1] [i_12] [i_11] |= ((/* implicit */unsigned short) (signed char)-90);
                            var_25 = ((unsigned char) ((((/* implicit */_Bool) arr_42 [i_1] [i_11] [i_11] [i_12] [i_13] [i_14] [(unsigned char)7])) ? (arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                            var_26 = ((/* implicit */short) ((((unsigned long long int) arr_13 [i_1] [i_11] [i_12] [i_13] [i_12] [i_14])) < (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_14] [i_13]))) * (var_9))))));
                            arr_44 [i_1] [i_1] [i_11] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_13]))) : (var_2)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (((((/* implicit */_Bool) 2900410654U)) ? (2383958854U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) ((var_2) ^ (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((2383958845U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-59)))))))));
                        }
                    } 
                } 
            } 
            arr_45 [i_1] = ((/* implicit */_Bool) (signed char)59);
        }
        var_27 *= ((/* implicit */signed char) ((((/* implicit */long long int) (+(((unsigned int) arr_7 [i_1] [i_1]))))) % (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30350))) : (9223372036854775801LL)))));
        /* LoopNest 3 */
        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 2) 
        {
            for (signed char i_16 = 0; i_16 < 14; i_16 += 3) 
            {
                for (short i_17 = 1; i_17 < 12; i_17 += 3) 
                {
                    {
                        arr_52 [i_15] [i_15] [i_15] [i_15] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-95)) * (((/* implicit */int) arr_38 [i_17 + 2]))))) ? (((/* implicit */int) ((1911008440U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-24657)))))) : (((/* implicit */int) ((signed char) arr_38 [i_17 + 2])))));
                        var_28 *= (unsigned char)171;
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */signed char) ((unsigned long long int) arr_33 [i_1] [i_1] [i_1]));
    }
    var_30 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) && (((/* implicit */_Bool) 2086649927U)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) * (var_2)))))));
    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) ((var_1) >= (((/* implicit */long long int) 4294967295U)))))))))));
    /* LoopSeq 1 */
    for (signed char i_18 = 0; i_18 < 24; i_18 += 2) 
    {
        arr_56 [i_18] = ((/* implicit */unsigned char) (short)10445);
        var_32 = ((/* implicit */short) ((arr_54 [i_18] [i_18]) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) ^ (2208317369U)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (signed char)-76)))) : (((/* implicit */int) (signed char)75)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        arr_60 [i_19] [i_19] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_57 [i_19])) ? (((/* implicit */int) arr_57 [i_19])) : (((/* implicit */int) var_4)))) != (((/* implicit */int) var_0))));
        arr_61 [(unsigned char)22] = ((/* implicit */long long int) (+(((/* implicit */int) ((117827212U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_19]))))))));
        arr_62 [i_19] = arr_53 [i_19];
    }
}
