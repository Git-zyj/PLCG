/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188946
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_14 *= ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (2146435072U))));
        arr_2 [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_12))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) ((short) (short)511));
        var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (var_3)));
    }
    for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
    {
        var_17 = ((/* implicit */signed char) max(((-(((/* implicit */int) var_5)))), (((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_6 [i_2]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)0)) == (((/* implicit */int) (short)-511))))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)510)) : (((/* implicit */int) var_10))))));
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)19)) ? (((((/* implicit */_Bool) (short)61)) ? (9144725198209891835ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
            arr_15 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)30663)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1747207427U)));
            /* LoopSeq 3 */
            for (long long int i_4 = 3; i_4 < 14; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_5 = 3; i_5 < 17; i_5 += 1) 
                {
                    var_20 -= ((/* implicit */_Bool) ((arr_11 [(short)13] [(short)13] [i_4]) ? (((/* implicit */int) arr_13 [i_3 + 1] [i_4 + 3])) : (((/* implicit */int) (unsigned char)42))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 3) 
                    {
                        arr_23 [i_2] [i_2] [i_3] [i_2] [i_5 - 3] [i_6 + 1] [i_2] = 9144725198209891835ULL;
                        var_21 = ((/* implicit */unsigned char) arr_3 [i_2] [i_4]);
                    }
                }
                arr_24 [i_2 + 1] [i_2 + 1] [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_4 - 3]))))));
            }
            for (signed char i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [6LL] [i_8 + 1] [i_3 + 1] [6LL])) ? (((/* implicit */int) arr_7 [i_3 + 4])) : (((/* implicit */int) arr_7 [i_3 + 3]))));
                    var_23 -= ((/* implicit */unsigned char) ((((_Bool) 1539979877U)) ? (arr_16 [i_3] [(unsigned char)2] [i_3 - 1] [i_3]) : (((/* implicit */unsigned long long int) ((arr_8 [(_Bool)0]) % (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                    var_24 += ((/* implicit */unsigned char) var_6);
                    var_25 = ((/* implicit */signed char) arr_25 [i_3 - 1] [i_3 - 1] [i_3 + 1]);
                }
                var_26 = ((/* implicit */unsigned char) var_8);
                var_27 = ((/* implicit */unsigned char) var_12);
            }
            for (signed char i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */_Bool) var_7);
                arr_34 [i_2] [i_2 - 1] [i_2] = ((/* implicit */long long int) var_8);
                arr_35 [i_2] [(short)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (unsigned char)0))) ? ((~(((/* implicit */int) (short)-510)))) : (((/* implicit */int) (signed char)0))));
                arr_36 [i_2] = ((/* implicit */_Bool) (~(1386519757U)));
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_3 + 1] [i_3 + 4])) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)515)) : (91592655))) : (((/* implicit */int) arr_29 [i_2] [i_3 + 1] [i_3 + 1] [i_9] [i_9] [i_2 + 1]))));
            }
        }
        for (long long int i_10 = 2; i_10 < 15; i_10 += 4) 
        {
            arr_39 [i_2] = ((/* implicit */short) (~(((/* implicit */int) ((arr_4 [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) (short)-511))))))));
            arr_40 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((3786085395U) & (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_11)))))))) ? (min((arr_12 [i_2]), (((/* implicit */long long int) min((arr_29 [i_2] [i_2 + 1] [i_2 + 1] [i_10] [i_2] [i_2]), ((unsigned char)110)))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_2] [i_2] [i_10 + 1])))))));
            var_30 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_5)) ? (max((10940620146329872850ULL), (((/* implicit */unsigned long long int) (unsigned char)206)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned char) arr_18 [i_2] [i_2] [i_2 + 1])))))))), (((/* implicit */unsigned long long int) ((_Bool) arr_17 [i_2] [i_2])))));
        }
    }
    for (unsigned short i_11 = 3; i_11 < 16; i_11 += 2) 
    {
        arr_44 [i_11] = ((short) ((long long int) arr_41 [i_11 - 3]));
        arr_45 [i_11] [0U] = ((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)6)), ((short)-511)));
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_0))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_11] [i_11] [i_11]))))))));
            arr_49 [i_11] [i_12] [i_11] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (short)772)))), (((/* implicit */int) min((((/* implicit */short) arr_11 [i_11 - 2] [i_12] [i_12])), (var_11))))));
        }
        /* LoopSeq 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_32 += ((/* implicit */short) (-(min((((((/* implicit */int) arr_5 [i_11])) >> (((((/* implicit */int) arr_20 [(unsigned char)4] [i_11] [i_11 + 1] [i_11 + 1])) - (138))))), (((/* implicit */int) max((var_2), (var_1))))))));
            var_33 = ((/* implicit */signed char) ((((/* implicit */long long int) 0U)) >= (max((var_4), (((/* implicit */long long int) (signed char)126))))));
        }
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            var_34 = ((/* implicit */int) ((_Bool) var_10));
            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((arr_42 [i_11 - 1] [i_11 + 1]) ? (((/* implicit */int) arr_20 [(short)16] [i_11] [i_11 - 2] [i_11 - 2])) : (((/* implicit */int) (signed char)-1)))))));
            arr_54 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (signed char)(-127 - 1)))) ? (((/* implicit */int) arr_13 [i_11 - 3] [i_11 + 1])) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (short)-18241))))));
        }
        /* vectorizable */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            arr_58 [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_41 [i_15 - 1]))));
            arr_59 [i_11] [(_Bool)1] [i_15] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)511))));
            /* LoopNest 3 */
            for (long long int i_16 = 0; i_16 < 17; i_16 += 2) 
            {
                for (signed char i_17 = 4; i_17 < 14; i_17 += 3) 
                {
                    for (short i_18 = 1; i_18 < 13; i_18 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_15 - 1] [i_11])) ? (arr_14 [i_15 - 1] [i_11]) : (arr_14 [i_15 - 1] [i_11])));
                            arr_69 [i_11 - 2] [i_11 - 2] [i_11] [i_11 - 2] [i_11] = ((/* implicit */short) 470872946U);
                            var_37 = ((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_11] [i_11 - 2] [i_11 - 3]))));
                            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_28 [i_17 + 2] [11U] [i_17 + 2] [i_17 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                        }
                    } 
                } 
            } 
            var_39 = ((/* implicit */unsigned int) arr_56 [i_11]);
            /* LoopSeq 2 */
            for (unsigned char i_19 = 0; i_19 < 17; i_19 += 3) 
            {
                arr_73 [i_11 - 2] [i_15] [i_11] = ((/* implicit */unsigned char) 9302018875499659780ULL);
                arr_74 [5U] [i_11] [i_11] [i_11 - 1] = ((/* implicit */unsigned short) var_3);
            }
            for (unsigned int i_20 = 2; i_20 < 14; i_20 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_21 = 0; i_21 < 17; i_21 += 2) 
                {
                    for (int i_22 = 1; i_22 < 15; i_22 += 3) 
                    {
                        {
                            var_40 = ((((/* implicit */_Bool) arr_53 [i_11] [i_22 + 2] [i_11])) && (((/* implicit */_Bool) arr_7 [i_22 + 1])));
                            var_41 = ((/* implicit */signed char) ((short) arr_67 [i_11] [i_15] [i_20] [i_21] [i_21] [i_20 + 1]));
                            var_42 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (short)-516))))));
                        }
                    } 
                } 
                var_43 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_63 [i_11] [i_15 - 1] [i_11]))));
                var_44 = ((/* implicit */unsigned int) (unsigned char)2);
                arr_82 [i_11] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9144725198209891861ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)0))));
            }
        }
    }
    var_45 = ((/* implicit */int) var_11);
}
