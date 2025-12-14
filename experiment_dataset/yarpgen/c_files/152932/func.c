/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152932
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = min((((unsigned int) arr_1 [i_0])), (arr_2 [i_0] [i_0]));
        var_18 = ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((long long int) var_5)) : (((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)127))))), (var_7))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((unsigned char) var_3));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_7 [i_1]))));
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                /* LoopSeq 3 */
                for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    arr_14 [8ULL] [i_2] [(signed char)11] = ((/* implicit */unsigned int) ((long long int) arr_2 [i_1] [i_2]));
                    var_22 = (-9223372036854775807LL - 1LL);
                    var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 1765930152U)) ? (arr_13 [i_2] [i_3 + 1] [i_2] [i_1]) : (var_16)))));
                }
                for (long long int i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    arr_18 [i_3] [i_2] [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (var_12))))) > (((var_9) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))))));
                    var_24 = ((/* implicit */unsigned short) ((arr_17 [i_1] [i_1] [0ULL] [i_3] [i_5 + 1] [i_5]) != (arr_17 [i_1] [i_2] [0ULL] [i_2] [i_2] [(_Bool)1])));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))));
                    arr_19 [i_1] [i_2] [16LL] [i_5] = 2957654U;
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_26 = (+(arr_1 [(short)1]));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (arr_9 [i_1] [i_3 + 1] [i_3]) : (((/* implicit */unsigned long long int) arr_11 [i_1] [i_3 + 2] [i_3 + 2]))));
                    arr_22 [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned char) ((signed char) var_12));
                    var_28 = ((/* implicit */signed char) var_5);
                }
                arr_23 [4ULL] = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) - (arr_17 [i_1] [i_2] [i_1] [i_2] [i_3] [i_3])));
                var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
                arr_24 [i_1] [i_3 + 2] [i_1] [i_3 + 2] = ((/* implicit */int) var_5);
            }
        }
        for (short i_7 = 3; i_7 < 14; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_8 = 2; i_8 < 17; i_8 += 4) 
            {
                var_30 = ((/* implicit */long long int) arr_16 [i_1] [i_7 - 2] [i_7] [i_8 + 1]);
                var_31 = ((/* implicit */unsigned int) var_3);
                arr_31 [i_8] [i_7] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_16 [i_7 + 1] [i_7 + 1] [i_7 + 4] [i_7 + 2])) == (4015012088U)));
                var_32 = ((/* implicit */short) ((arr_29 [i_7 + 4] [i_7 - 2] [i_7 - 2]) % (((/* implicit */unsigned long long int) arr_28 [i_7 + 3]))));
                var_33 = ((/* implicit */long long int) (+(var_8)));
            }
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                var_34 = ((/* implicit */signed char) ((unsigned char) ((454990325U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12))))));
                var_35 = ((/* implicit */unsigned short) var_10);
                arr_35 [i_1] [i_7] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_7 - 3] [i_7 + 3])) ? (((long long int) arr_26 [i_9] [i_9] [i_9])) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [14])))));
                var_36 = ((/* implicit */long long int) ((((var_12) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_15)) ? (arr_9 [i_1] [i_1] [i_9]) : (((/* implicit */unsigned long long int) arr_2 [i_1] [i_9])))) : (((/* implicit */unsigned long long int) arr_1 [1ULL]))));
            }
            arr_36 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) var_13)) : (var_8))) : (((/* implicit */int) (signed char)-119))));
        }
        var_37 = ((/* implicit */short) var_1);
        /* LoopSeq 2 */
        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
        {
            var_38 = ((/* implicit */signed char) ((short) var_9));
            /* LoopNest 3 */
            for (unsigned int i_11 = 1; i_11 < 16; i_11 += 4) 
            {
                for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        {
                            arr_48 [i_1] [i_10] [i_1] [i_11] [i_12] [i_13] = ((/* implicit */unsigned short) arr_43 [i_1] [i_1] [i_1] [i_1] [(unsigned short)12]);
                            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */long long int) arr_12 [i_11 - 1] [i_11 - 1] [i_11 - 1])) > (-9223372036854775803LL))))));
                            var_40 = ((/* implicit */int) (-(arr_12 [(short)2] [i_11] [i_10])));
                            var_41 = ((/* implicit */short) (-(var_15)));
                        }
                    } 
                } 
            } 
            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_10] [i_1] [i_10])) ? (((/* implicit */unsigned int) ((arr_7 [i_1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) : (var_11))))));
            var_43 = ((/* implicit */unsigned int) arr_42 [i_10] [i_1] [i_10] [i_10]);
        }
        for (unsigned short i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_15 = 1; i_15 < 16; i_15 += 4) 
            {
                var_44 = ((/* implicit */int) ((unsigned long long int) arr_11 [i_15] [(_Bool)1] [i_1]));
                arr_55 [i_1] [i_14] [i_15] [i_1] = ((/* implicit */unsigned int) arr_42 [i_1] [i_14] [(short)3] [i_15 + 2]);
                var_45 = ((/* implicit */long long int) max((var_45), (((long long int) arr_25 [i_14]))));
                var_46 = ((/* implicit */_Bool) (unsigned short)22880);
            }
            for (unsigned short i_16 = 0; i_16 < 18; i_16 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_17 = 0; i_17 < 18; i_17 += 1) 
                {
                    var_47 = ((/* implicit */unsigned int) ((10910106260782144442ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_1] [i_14] [i_16])))));
                    arr_61 [(signed char)9] [i_16] [i_16] [i_17] [13LL] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (arr_21 [12] [13ULL] [i_1] [i_17] [i_17]) : (arr_21 [i_1] [i_14] [i_17] [i_14] [i_17])));
                }
                for (long long int i_18 = 3; i_18 < 16; i_18 += 4) 
                {
                    var_48 = ((/* implicit */short) ((unsigned short) arr_44 [i_18 - 2] [i_18 + 1] [i_18 - 2] [(unsigned short)16] [i_18 - 3] [i_18 - 3]));
                    var_49 += ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
                    var_50 = ((/* implicit */short) ((((/* implicit */int) arr_26 [i_18 - 3] [i_14] [i_1])) < (((/* implicit */int) arr_26 [i_14] [i_16] [i_18 - 2]))));
                }
                arr_65 [i_1] [1U] [i_1] [i_14] |= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_16)) ? (2409989528U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14080))))));
                arr_66 [i_16] [i_14] [14LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_11 [i_1] [i_14] [(_Bool)1]) : (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (arr_58 [i_1] [i_14])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) (_Bool)0))))));
            }
            /* LoopNest 3 */
            for (unsigned char i_19 = 2; i_19 < 17; i_19 += 1) 
            {
                for (long long int i_20 = 2; i_20 < 14; i_20 += 1) 
                {
                    for (signed char i_21 = 2; i_21 < 17; i_21 += 2) 
                    {
                        {
                            arr_75 [(signed char)10] [i_14] [17LL] [i_19] [i_20] [i_20] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_20 - 2] [i_19 - 1] [i_21 + 1])) ? (((/* implicit */int) arr_69 [i_21] [i_20 + 3] [i_19 + 1] [i_21 + 1])) : (((/* implicit */int) arr_69 [i_1] [i_20 + 3] [i_19 - 2] [i_21 - 2]))));
                            arr_76 [i_19] [i_20] [i_19] [i_20] [(unsigned char)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_19 - 2] [i_19 - 2] [i_19 - 1])) ? (((/* implicit */long long int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [16ULL])) : (arr_58 [i_1] [i_1])));
                        }
                    } 
                } 
            } 
            var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) var_12))));
            arr_77 [i_1] [i_1] [10U] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_17))))));
        }
        var_52 = ((/* implicit */_Bool) -11LL);
    }
    var_53 = ((/* implicit */unsigned int) var_12);
    var_54 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((~(var_8))) - (((/* implicit */int) var_0))))), (((((((/* implicit */_Bool) 15647645874777109940ULL)) ? (2799098198932441676ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))))) | (min((var_12), (var_12)))))));
    var_55 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((((/* implicit */_Bool) (signed char)-121)) ? (279955191U) : (400115614U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)24))) <= (var_1)))))))));
}
