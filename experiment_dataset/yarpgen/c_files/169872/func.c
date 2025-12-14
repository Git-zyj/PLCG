/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169872
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0])))))));
                        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_1] [i_0] [i_2]))));
                        var_16 = ((/* implicit */unsigned char) var_4);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 4; i_4 < 10; i_4 += 1) /* same iter space */
                        {
                            var_17 |= ((((/* implicit */int) arr_2 [i_4 - 2] [i_1])) - (((/* implicit */int) arr_2 [i_4 - 4] [i_1])));
                            arr_15 [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
                        }
                        for (unsigned long long int i_5 = 4; i_5 < 10; i_5 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_18 [i_0] [i_0] [i_0] [i_0]))));
                            var_19 = ((/* implicit */unsigned short) (~(arr_17 [i_3] [i_5 - 2] [i_2] [i_3] [i_3])));
                            var_20 = ((/* implicit */long long int) (+(1984467898)));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-119)) % (-491015243)))))))));
                        }
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        var_22 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)184)) ? (-8477439844025284219LL) : (((/* implicit */long long int) -491015243)))))))));
                        var_23 += ((/* implicit */_Bool) -6992324245215636459LL);
                        var_24 = ((/* implicit */unsigned short) arr_21 [i_0] [i_1] [i_1]);
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)20407)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1]))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))))) : (((((/* implicit */_Bool) 665779879U)) ? (3629187416U) : (((/* implicit */unsigned int) -2147483642))))));
                        var_26 -= ((/* implicit */_Bool) max((((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) != (((/* implicit */int) arr_3 [i_6]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-30))))))), ((+(((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))))));
                    }
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), (arr_7 [i_0] [i_0] [i_0] [i_2])))), (((3936475425465553646ULL) - (11246492838093325417ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (-(arr_17 [i_0] [i_0] [i_0] [i_2] [i_7]))))));
                        var_29 = ((/* implicit */signed char) arr_14 [i_0] [i_1]);
                    }
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 4; i_8 < 10; i_8 += 4) 
    {
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) arr_24 [i_8]))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_8 - 4])) ? (((/* implicit */int) arr_26 [i_8 - 4])) : (((/* implicit */int) arr_26 [i_8 - 1]))));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 11; i_9 += 1) 
        {
            for (unsigned char i_10 = 3; i_10 < 10; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    {
                        var_33 = ((/* implicit */unsigned long long int) arr_28 [i_8] [i_10] [i_11]);
                        var_34 = (!(((/* implicit */_Bool) (short)-14310)));
                    }
                } 
            } 
        } 
        var_35 &= ((/* implicit */unsigned long long int) (-(arr_29 [i_8])));
        var_36 |= ((/* implicit */int) arr_28 [i_8] [i_8] [i_8]);
    }
    var_37 = ((/* implicit */unsigned char) (((+(491015243))) % (((/* implicit */int) var_9))));
    var_38 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != (var_6))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_12 = 0; i_12 < 16; i_12 += 4) 
    {
        var_39 = ((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_12])) << (((arr_34 [i_12] [i_12]) - (14312225044682058778ULL)))));
        var_40 = ((/* implicit */signed char) (+(arr_34 [i_12] [i_12])));
    }
    for (int i_13 = 1; i_13 < 11; i_13 += 1) 
    {
        var_41 -= ((/* implicit */short) (-(((((/* implicit */_Bool) max((arr_27 [i_13] [i_13] [i_13]), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((var_2) ? (arr_33 [i_13]) : (((/* implicit */int) var_13))))) : (((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_13])))))))));
        var_42 = ((/* implicit */signed char) max(((-(arr_34 [i_13] [i_13]))), (((/* implicit */unsigned long long int) arr_38 [i_13]))));
        var_43 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)10)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            var_44 = ((/* implicit */unsigned char) arr_33 [i_13]);
            /* LoopSeq 1 */
            for (unsigned short i_15 = 0; i_15 < 13; i_15 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_16 = 4; i_16 < 12; i_16 += 2) 
                {
                    var_45 = (+((-9223372036854775807LL - 1LL)));
                    var_46 = ((/* implicit */long long int) arr_35 [i_14]);
                }
                for (signed char i_17 = 0; i_17 < 13; i_17 += 2) 
                {
                    var_47 -= ((/* implicit */unsigned short) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_13 - 1])))));
                    /* LoopSeq 4 */
                    for (signed char i_18 = 3; i_18 < 10; i_18 += 4) /* same iter space */
                    {
                        var_48 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18 + 2]))) > (var_11)));
                        var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) % (((/* implicit */int) arr_31 [i_13] [i_14] [i_15] [i_13])))) - (((/* implicit */int) arr_32 [i_13])))))));
                    }
                    for (signed char i_19 = 3; i_19 < 10; i_19 += 4) /* same iter space */
                    {
                        var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_40 [i_13 - 1])))))));
                        var_51 -= ((/* implicit */unsigned short) var_9);
                        var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_55 [i_19] [i_13] [i_15] [i_17] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_13 + 2] [i_14] [i_13] [i_17]))) : (arr_55 [i_13] [i_13] [i_13] [i_17] [i_19])));
                    }
                    for (unsigned short i_20 = 1; i_20 < 10; i_20 += 4) /* same iter space */
                    {
                        var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_13 + 2])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_40 [i_14])) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_20 - 1])))));
                        var_54 = ((((((/* implicit */int) arr_37 [i_13])) > (((/* implicit */int) arr_54 [i_13] [i_13] [i_13] [i_17] [i_13])))) ? (((/* implicit */int) arr_31 [i_13] [i_14] [i_15] [i_17])) : (arr_51 [i_13] [i_13] [i_15] [i_20 + 3] [i_13] [i_13] [i_17]));
                    }
                    for (unsigned short i_21 = 1; i_21 < 10; i_21 += 4) /* same iter space */
                    {
                        var_55 = arr_43 [i_13];
                        var_56 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_53 [i_13] [i_13] [i_14] [i_15] [i_17] [i_21])) ? (((/* implicit */long long int) 452199098U)) : (arr_59 [i_15] [i_17]))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_55 [i_14] [i_13] [i_15] [i_13] [i_21]) : (((/* implicit */unsigned int) var_3)))))));
                        var_57 -= (_Bool)0;
                        var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (arr_40 [i_13])));
                    }
                    arr_62 [i_17] [i_13] [i_15] = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_15]))))));
                }
                var_59 = ((/* implicit */unsigned short) arr_31 [i_13] [i_13 - 1] [i_14] [i_14]);
            }
        }
        /* LoopNest 3 */
        for (unsigned int i_22 = 2; i_22 < 12; i_22 += 4) 
        {
            for (signed char i_23 = 0; i_23 < 13; i_23 += 1) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 13; i_24 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_25 = 0; i_25 < 13; i_25 += 2) /* same iter space */
                        {
                            var_60 |= ((/* implicit */unsigned char) (+((-(-1768706606)))));
                            arr_72 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1500070131)) ? (arr_49 [i_13] [i_13] [i_13] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))));
                            var_61 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)52539)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_13] [i_13] [i_13] [i_13] [i_13 - 1]))) : (((((/* implicit */_Bool) (unsigned short)7771)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (signed char)108))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (452199098U)))))));
                        }
                        for (signed char i_26 = 0; i_26 < 13; i_26 += 2) /* same iter space */
                        {
                            var_62 = ((/* implicit */int) (-((-(max((5189875979842556141ULL), (((/* implicit */unsigned long long int) arr_65 [i_26] [i_26] [i_13]))))))));
                            var_63 = ((/* implicit */unsigned long long int) arr_59 [i_13] [i_22]);
                        }
                        var_64 -= ((/* implicit */signed char) 18446744073709551615ULL);
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (signed char i_27 = 2; i_27 < 13; i_27 += 2) 
    {
        var_65 = ((/* implicit */unsigned short) min((var_65), (((/* implicit */unsigned short) min((((((/* implicit */long long int) (~(((/* implicit */int) arr_35 [i_27]))))) - ((~(2305843009213693951LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (1644097400) : (((/* implicit */int) (unsigned char)96))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_28 = 0; i_28 < 16; i_28 += 1) 
        {
            var_66 |= ((/* implicit */unsigned int) max((((/* implicit */int) arr_35 [i_27 + 3])), ((~(((/* implicit */int) arr_35 [i_27 + 1]))))));
            var_67 = ((/* implicit */long long int) min((var_3), (((/* implicit */int) var_10))));
        }
        /* LoopNest 2 */
        for (unsigned char i_29 = 1; i_29 < 14; i_29 += 3) 
        {
            for (int i_30 = 0; i_30 < 16; i_30 += 2) 
            {
                {
                    var_68 -= ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */int) var_4)) / (((/* implicit */int) var_9)))) < (((((/* implicit */int) (signed char)70)) & (((/* implicit */int) (unsigned short)16415)))))))));
                    /* LoopNest 2 */
                    for (signed char i_31 = 0; i_31 < 16; i_31 += 2) 
                    {
                        for (signed char i_32 = 0; i_32 < 16; i_32 += 2) 
                        {
                            {
                                var_69 = ((/* implicit */long long int) (+(((arr_84 [i_27] [i_30] [i_31] [i_31]) - (((/* implicit */unsigned int) arr_77 [i_29 + 1]))))));
                                arr_91 [i_31] [i_29] [i_30] [i_29] [i_29] = ((/* implicit */_Bool) (unsigned short)2047);
                                var_70 = ((/* implicit */short) max((var_70), (((/* implicit */short) (+(((/* implicit */int) arr_82 [i_27])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
