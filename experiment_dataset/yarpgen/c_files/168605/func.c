/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168605
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_2))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_3 [i_1]))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) : (((((/* implicit */_Bool) (-(var_17)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (min((var_13), (arr_0 [i_1] [i_1])))))));
        arr_7 [i_1] [0LL] &= ((/* implicit */unsigned int) max((((/* implicit */long long int) (+((~(((/* implicit */int) arr_3 [i_1]))))))), (((((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_1] [i_1])), (var_5)))) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_11 [i_1] [i_1])), ((((!(((/* implicit */_Bool) arr_0 [i_2] [i_2])))) ? (max((((/* implicit */long long int) arr_2 [i_2 + 3])), (var_17))) : (min((var_17), (((/* implicit */long long int) var_6))))))));
            arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 3] [i_2 - 1])) ? (arr_11 [i_2 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 1] [i_2 - 1])))))) ? (((((/* implicit */_Bool) -9272405)) ? (11921447053969856512ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))))) : (((/* implicit */unsigned long long int) arr_0 [i_2 + 3] [i_2 - 3]))));
            var_22 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */long long int) var_7))))) ? (arr_0 [i_1] [i_2 - 3]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))), ((-(((/* implicit */int) arr_8 [i_2] [i_1]))))));
            /* LoopNest 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 2; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            arr_19 [i_3] [i_2] [9ULL] [4ULL] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_4] [i_3] [i_3] [i_1]))))), (((((/* implicit */_Bool) arr_10 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) var_8)) : (var_3)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_4] [i_1]))))) ? ((+(((/* implicit */int) var_15)))) : (((/* implicit */int) arr_8 [i_1] [i_1])))) : ((((((~(var_5))) + (2147483647))) << (((/* implicit */int) ((var_18) < (((/* implicit */unsigned long long int) var_5)))))))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2 + 3] [5] [i_3 - 1] [i_4 + 2] [(_Bool)1] [i_3 - 1])))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1]))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) : ((+(var_13))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            arr_23 [12U] [i_1] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_6])) ? (((var_5) ^ (((/* implicit */int) arr_4 [i_1] [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))) ? ((~(arr_15 [i_1] [i_1] [i_1] [i_6] [i_6]))) : (((((/* implicit */_Bool) (~(arr_21 [i_1] [i_1] [(_Bool)1])))) ? (((((/* implicit */int) arr_4 [i_1] [i_6])) - (((/* implicit */int) arr_14 [i_6] [7ULL] [(unsigned short)0])))) : (var_16))));
            arr_24 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_21 [i_1] [i_1] [(short)4])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_14)))))));
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1822592655))));
                var_25 = ((/* implicit */unsigned short) var_14);
                var_26 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */int) arr_4 [(short)1] [i_1])), ((+(((/* implicit */int) arr_8 [i_6] [i_7]))))))) % (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */long long int) 1822592654)) : (-3468307117961709700LL)))));
                var_27 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((arr_22 [i_7]), (arr_22 [i_1])))), (((((/* implicit */_Bool) (+(arr_16 [i_1] [(unsigned short)1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6])))))) : (((arr_5 [i_1] [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6])))))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_8 = 1; i_8 < 10; i_8 += 1) 
            {
                var_28 *= ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_8 + 3])) < (((/* implicit */int) arr_3 [i_8 + 3]))));
                var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_0 [i_8 + 2] [i_1])))) ? (((/* implicit */int) arr_17 [i_1] [i_6] [i_8] [i_8])) : ((-(((/* implicit */int) arr_14 [i_8] [i_1] [i_1]))))));
                arr_30 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_1] [i_6]))));
                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) arr_18 [i_1] [(short)3] [i_6] [i_6] [i_8] [i_8]))));
                var_31 = ((/* implicit */int) var_17);
            }
            for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 3) 
            {
                arr_33 [i_1] [i_9] [i_6] [i_6] = arr_25 [3ULL] [i_6] [i_9];
                var_32 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (var_17))))))) ? (min((((/* implicit */unsigned long long int) arr_25 [i_9 + 1] [i_9 + 2] [i_9 - 1])), (arr_16 [i_9 - 1] [i_9 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_4 [1ULL] [1ULL])), (arr_26 [i_1])))) ? (((/* implicit */int) ((arr_15 [i_1] [i_6] [i_9] [i_6] [i_6]) > (((/* implicit */int) arr_31 [i_1] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1599374332))))))))));
            }
        }
        for (int i_10 = 2; i_10 < 12; i_10 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 13; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        {
                            var_33 = ((((/* implicit */_Bool) arr_25 [i_10 - 1] [i_1] [i_11])) ? ((+((~(var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((1073741824), (((/* implicit */int) (unsigned char)217))))))))));
                            arr_45 [i_1] [i_1] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_13] [i_10] [12ULL] [i_12] [i_10 - 2])) && (((/* implicit */_Bool) arr_43 [i_1] [7] [i_11] [i_12] [i_10 - 2])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) / (arr_16 [i_10 + 1] [i_10 + 1])))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_4)) ? (arr_36 [i_10 - 2] [i_10 + 1] [i_10 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_10 - 1])))))));
            }
            /* vectorizable */
            for (signed char i_14 = 1; i_14 < 11; i_14 += 1) 
            {
                var_35 = ((/* implicit */long long int) min((var_35), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) - (((((/* implicit */_Bool) arr_1 [i_1])) ? (9223372036854775807LL) : (2709390237809593102LL)))))));
                var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (~(((/* implicit */int) arr_17 [i_1] [i_1] [i_10] [i_14 + 2])))))));
                var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_1] [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_5 [i_10 - 1] [i_14 + 1])));
                var_38 = ((/* implicit */int) arr_28 [i_1] [i_10] [i_10 - 1]);
            }
            for (int i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_15])) ? (arr_16 [i_10 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_2))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (arr_48 [i_1] [i_1] [i_1] [(signed char)9]))))))))));
                /* LoopSeq 2 */
                for (unsigned int i_16 = 3; i_16 < 12; i_16 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_17 = 0; i_17 < 13; i_17 += 1) 
                    {
                        arr_57 [i_1] [i_10] [i_15] [i_16] [i_16] [i_15] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_10] [i_10])) || (((/* implicit */_Bool) var_9))))), (min((arr_40 [i_10] [i_15] [8] [(unsigned short)5]), (((/* implicit */signed char) arr_41 [i_17] [i_16] [i_15] [i_10] [i_1])))))))));
                        var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [7LL])), (arr_55 [i_17] [(short)11] [i_15] [i_17])))))))));
                    }
                    var_41 = (-(((/* implicit */int) var_15)));
                    var_42 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_37 [i_16 - 3] [i_15] [i_1]), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : ((+(((/* implicit */int) arr_31 [i_1] [i_1])))))))));
                    arr_58 [(unsigned short)4] [i_10] [i_10] [(unsigned short)12] [i_16] [i_16] = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned long long int) var_12))))) || (((/* implicit */_Bool) var_5)))) ? ((-(var_1))) : (arr_35 [i_15] [i_1] [i_1])));
                    var_43 |= ((/* implicit */short) min(((+(((/* implicit */int) arr_40 [i_16 - 2] [i_10] [i_10 - 2] [i_10 - 1])))), ((+(arr_52 [i_1] [i_10] [i_10 + 1] [i_16] [i_16 - 2] [i_16 - 1])))));
                }
                for (unsigned int i_18 = 3; i_18 < 12; i_18 += 1) /* same iter space */
                {
                    arr_61 [11] [i_18] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_14 [i_15] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_15] [i_1]))) : (var_10)))))), ((+(-9223372036854775787LL)))));
                    var_44 = arr_1 [i_18];
                }
            }
            var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) arr_11 [i_10] [i_10]))));
        }
        for (signed char i_19 = 0; i_19 < 13; i_19 += 1) 
        {
            var_46 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_15 [(signed char)12] [i_19] [i_1] [i_1] [i_1])) : (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_13))) == (((((/* implicit */_Bool) arr_40 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [9ULL] [i_19] [i_19])) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1]))))))))));
            arr_64 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_19])) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) arr_3 [i_1])) : ((+(((/* implicit */int) arr_3 [i_19]))))));
        }
        var_47 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_49 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_49 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_49 [i_1] [i_1] [i_1])))), ((-((-(((/* implicit */int) var_9))))))));
    }
    /* vectorizable */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_48 -= ((/* implicit */short) (~(arr_10 [i_20] [i_20])));
        arr_69 [i_20] [i_20] = ((/* implicit */unsigned long long int) var_4);
    }
    for (int i_21 = 0; i_21 < 13; i_21 += 4) 
    {
        arr_73 [i_21] [i_21] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_40 [i_21] [i_21] [i_21] [i_21]))));
        var_49 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_46 [i_21] [i_21] [11] [i_21]))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 4) 
    {
        for (int i_23 = 1; i_23 < 7; i_23 += 1) 
        {
            for (long long int i_24 = 0; i_24 < 10; i_24 += 1) 
            {
                {
                    var_50 = ((/* implicit */int) (+(max((var_1), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))))));
                    var_51 -= ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) arr_2 [i_23])) ? (((/* implicit */int) arr_32 [i_22] [i_22] [i_23] [i_22])) : (((/* implicit */int) arr_40 [i_22] [i_22] [i_23] [i_24])))))), ((+(((/* implicit */int) (short)-869))))));
                    /* LoopSeq 2 */
                    for (int i_25 = 4; i_25 < 6; i_25 += 1) /* same iter space */
                    {
                        var_52 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(9223372036854775807LL)))))))));
                        arr_84 [i_22] [i_23] [i_24] [6U] [i_25] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_25 + 4])) ? (((/* implicit */int) arr_32 [i_23] [i_23 + 2] [i_24] [i_25])) : (max((((/* implicit */int) arr_40 [i_22] [(unsigned short)1] [(unsigned short)1] [i_25])), (arr_22 [i_22]))))))));
                    }
                    for (int i_26 = 4; i_26 < 6; i_26 += 1) /* same iter space */
                    {
                        var_53 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [(signed char)7] [12U] [i_23 - 1] [(unsigned short)5] [i_26 + 3] [i_26]))) ^ (min((-3468307117961709701LL), (((/* implicit */long long int) (unsigned char)159))))));
                        var_54 = ((/* implicit */int) var_7);
                    }
                }
            } 
        } 
    } 
}
