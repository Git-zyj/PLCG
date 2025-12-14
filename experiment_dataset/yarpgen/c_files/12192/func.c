/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12192
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
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((((/* implicit */int) arr_2 [i_1] [i_0])) + (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0] [i_1])), (arr_3 [i_0])))))) * (((/* implicit */int) ((var_9) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-74)))))))));
                var_19 &= ((/* implicit */_Bool) max(((signed char)74), (((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1 - 1] [i_0 - 1])) != (((/* implicit */int) (signed char)63)))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), ((unsigned char)183)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) max((var_5), (var_5))))))), (((/* implicit */long long int) max((var_9), (((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_21 = ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min(((unsigned char)180), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))) : (((/* implicit */int) min((arr_3 [i_3]), (((/* implicit */unsigned char) (signed char)119)))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1622962367)), (min((((unsigned long long int) var_14)), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_3 [i_3])), (arr_7 [i_0 - 2] [i_2] [i_2]))))))));
                            arr_14 [i_0 + 1] [i_2] [i_3] [i_0 + 1] [i_1 - 3] [i_2] [i_0 + 1] = ((/* implicit */unsigned short) (unsigned char)224);
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_16 [i_5 + 1] [i_2])), (((var_15) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) ((((/* implicit */int) (signed char)-21)) < (((/* implicit */int) arr_2 [i_0] [i_0])))))))) ? (((/* implicit */int) min((arr_6 [i_0 + 2] [i_2] [i_3 + 1]), (var_13)))) : (((/* implicit */int) ((((/* implicit */long long int) var_9)) < (((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))))));
                            var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_18 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_2))), (max((((/* implicit */long long int) var_10)), ((-9223372036854775807LL - 1LL))))));
                            arr_20 [i_0] [i_1 + 1] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) var_4);
                        }
                        var_25 -= ((/* implicit */signed char) max((((long long int) (signed char)120)), (((/* implicit */long long int) ((signed char) arr_12 [i_0 + 1] [i_0] [i_1 - 3] [i_2] [i_3])))));
                    }
                    for (signed char i_6 = 3; i_6 < 14; i_6 += 3) 
                    {
                        arr_24 [i_0] [i_1] [i_1] [i_2] [i_2] = ((((/* implicit */int) min(((unsigned short)19665), (((/* implicit */unsigned short) (signed char)-54))))) < (((((/* implicit */_Bool) arr_10 [i_1 - 2] [i_2] [i_1 - 2] [i_6 - 1])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1] [i_2])) : (((/* implicit */int) arr_10 [i_1 - 2] [i_2] [17] [i_6 + 1])))));
                        arr_25 [i_0] [i_1 + 1] [i_2] [i_6 + 2] [i_2] [i_1] = ((/* implicit */long long int) min(((~(max((((/* implicit */unsigned long long int) var_12)), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (signed char)57))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (11071944323286756697ULL)))) && (((/* implicit */_Bool) 3762722563408609867ULL))))), (max((((/* implicit */unsigned long long int) ((arr_23 [i_0] [i_1] [i_2] [i_6]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47542)))))), (max((((/* implicit */unsigned long long int) var_0)), (12699491113463149276ULL))))))))));
                        var_27 *= ((/* implicit */unsigned short) ((int) (_Bool)1));
                    }
                    var_28 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (signed char)104))))), (max((((/* implicit */long long int) arr_1 [i_0 - 1] [i_2])), (2340787243413312380LL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) min((max((14684021510300941747ULL), (((/* implicit */unsigned long long int) (signed char)35)))), (((/* implicit */unsigned long long int) var_14))));
                                var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65094)) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_1 - 1])) : (((/* implicit */int) (signed char)-120))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_16)))))));
                            }
                        } 
                    } 
                    arr_32 [i_0] [i_2] [i_1] = ((/* implicit */unsigned long long int) (~(((208684818) | (((/* implicit */int) arr_31 [i_1] [i_1] [i_1 + 1] [i_2] [i_1 - 2]))))));
                }
                /* vectorizable */
                for (signed char i_9 = 3; i_9 < 15; i_9 += 3) 
                {
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_1] [i_1]))) : (arr_23 [i_1] [i_1] [i_0 - 2] [i_9 - 2])));
                    var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) -900298053)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_12 [i_0 + 2] [i_9 - 2] [i_9] [i_9 - 2] [i_9]))));
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [(_Bool)1] [i_9 + 1] [(_Bool)1] [i_9 - 1] [(_Bool)1])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_3))));
                    arr_35 [i_0] [i_1 - 2] = ((/* implicit */unsigned short) ((signed char) arr_33 [i_0 + 1]));
                }
                arr_36 [i_0 + 1] [i_1 - 2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((-3), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))), (min((((18446744073709551601ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [(signed char)5]))))), (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) (signed char)(-127 - 1))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            {
                arr_41 [i_11] [i_11] = ((signed char) ((((/* implicit */int) ((unsigned short) var_7))) - (max((1578852653), (((/* implicit */int) arr_3 [3ULL]))))));
                arr_42 [i_10] [i_11] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) var_8)) & (((/* implicit */int) (signed char)-101)))) : (((((/* implicit */int) var_10)) + (((/* implicit */int) var_1)))))), ((~((-(((/* implicit */int) var_12))))))));
                /* LoopSeq 3 */
                for (int i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
                {
                    arr_47 [(_Bool)1] [i_11] [i_11 - 1] [i_11] = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47541))) + (var_2))), (((/* implicit */long long int) ((var_14) && (((/* implicit */_Bool) var_3)))))));
                    var_34 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (arr_23 [i_11 - 1] [i_11 - 1] [i_12] [i_10]) : (arr_23 [i_11 - 1] [i_12] [i_12] [14])))));
                    var_35 += ((/* implicit */signed char) (+(min((((/* implicit */int) (signed char)-21)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))))));
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((var_2), (((/* implicit */long long int) (_Bool)1)))) ^ (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)12563)))))))) ? (((/* implicit */int) ((var_10) || (((/* implicit */_Bool) arr_30 [i_10] [i_11 - 1] [i_10] [i_10]))))) : (((/* implicit */int) arr_31 [i_10] [i_10] [i_12] [i_11] [(signed char)0]))));
                }
                for (int i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        for (signed char i_15 = 1; i_15 < 9; i_15 += 3) 
                        {
                            {
                                arr_54 [(signed char)5] [i_11] [i_13] [i_13] [i_15] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_10)), (var_16)));
                                arr_55 [(signed char)3] [i_11] [(signed char)3] [i_13] [(unsigned short)6] [i_13] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_15)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 1; i_16 < 7; i_16 += 3) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 11; i_17 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */long long int) (unsigned short)17995);
                                var_38 = ((/* implicit */_Bool) max((((((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_10] [i_11] [i_11])) && (((/* implicit */_Bool) (unsigned short)18621))))) >> (((((unsigned long long int) 16064425856553058768ULL)) - (16064425856553058747ULL))))), (((((/* implicit */int) arr_52 [i_17] [10ULL] [i_13] [i_11 - 1] [0])) - (((/* implicit */int) arr_52 [i_17] [i_16] [i_13] [(signed char)5] [i_10]))))));
                                var_39 = ((/* implicit */unsigned long long int) arr_18 [i_10] [i_10] [i_10] [i_13] [(unsigned short)8] [(_Bool)1]);
                            }
                        } 
                    } 
                }
                for (int i_18 = 0; i_18 < 11; i_18 += 4) /* same iter space */
                {
                    arr_65 [i_18] &= ((/* implicit */_Bool) var_16);
                    var_40 &= ((/* implicit */_Bool) (signed char)120);
                    arr_66 [i_11] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-6))))), (var_7)));
                    var_41 = ((/* implicit */signed char) var_16);
                }
            }
        } 
    } 
    var_42 = max((((/* implicit */unsigned long long int) max((max((var_5), (var_12))), (var_5)))), (var_11));
}
