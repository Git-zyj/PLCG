/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159212
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((var_10), (((/* implicit */unsigned long long int) -1227015512196408938LL))))))) ? (((/* implicit */unsigned long long int) var_14)) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) max((-1227015512196408938LL), (((/* implicit */long long int) var_6)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_20 = max((1227015512196408937LL), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-73))) / (-1227015512196408935LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)31))))));
        var_21 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (short)18743)) : (-868457612)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : ((~(-1227015512196408922LL))))) / (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (short)2689))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        var_22 &= arr_2 [i_1 - 1];
        var_23 = ((/* implicit */_Bool) 1227015512196408934LL);
    }
    /* vectorizable */
    for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
    {
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 1227015512196408934LL))) || (((/* implicit */_Bool) arr_1 [i_2] [i_2 + 1])))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    {
                        var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_4])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_0 [i_2 + 2]))));
                        arr_16 [i_2 - 2] [i_2 + 2] [i_3] [i_4] [i_5] &= ((/* implicit */unsigned int) ((-1227015512196408906LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28418)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 868457632)) && (((/* implicit */_Bool) 1227015512196408937LL))));
        var_27 |= ((/* implicit */unsigned long long int) arr_18 [i_6]);
        arr_21 [i_6] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_20 [i_6] [i_6])))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6]))) : (2981788002553905674ULL))) : (((arr_3 [i_6]) * (arr_3 [i_6])))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_28 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)10))));
            /* LoopSeq 4 */
            for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                var_29 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) arr_19 [i_8])) >= (((/* implicit */int) (unsigned char)220)))));
                var_30 &= ((/* implicit */unsigned long long int) (+(arr_26 [i_6] [i_7] [i_8])));
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) arr_0 [i_6]))));
                var_32 = ((/* implicit */short) ((long long int) var_17));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 12; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 3; i_11 < 13; i_11 += 1) 
                    {
                        {
                            arr_34 [i_6] [i_7] [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) var_9);
                            var_33 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_6] [i_7] [i_9] [i_10 - 2] [i_11 - 2])) ? (((/* implicit */unsigned int) var_1)) : (937071970U)))) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) var_17))));
                            var_34 = ((/* implicit */_Bool) 2147483647);
                            var_35 = ((10201454307102694090ULL) | (((/* implicit */unsigned long long int) (~((-9223372036854775807LL - 1LL))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */short) ((((arr_1 [i_9] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6] [i_7] [i_6]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_18 [i_9])) : (((/* implicit */int) arr_19 [i_9])))))));
                var_37 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_24 [i_6] [i_7] [i_9])))) != (((/* implicit */int) (!(((/* implicit */_Bool) 1566894428)))))));
                var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(9006542306551114141LL))))));
                var_39 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)48)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 16338321602397600904ULL)) ? (2108422471311950711ULL) : (arr_17 [i_6] [i_6]))))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
                arr_37 [i_6] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4741730285448504077LL))));
                var_41 = ((/* implicit */unsigned long long int) ((arr_31 [i_6] [i_6] [i_6] [i_6] [i_7] [i_7] [i_12]) > (arr_31 [i_6] [i_6] [i_7] [i_7] [i_7] [i_12] [i_12])));
                arr_38 [i_6] [i_7] [i_12] [i_7] = ((/* implicit */_Bool) (+(4745008419103065229LL)));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */_Bool) arr_43 [i_14] [i_13] [i_12] [i_7] [i_6]);
                            var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((unsigned long long int) -5997283895402021947LL)))));
                            arr_44 [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */unsigned long long int) 55674296)) : (2108422471311950711ULL)));
                            var_44 = ((/* implicit */unsigned char) arr_23 [i_14]);
                        }
                    } 
                } 
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_45 = ((/* implicit */int) ((((/* implicit */_Bool) (+(16338321602397600890ULL)))) ? (((/* implicit */long long int) (~(26)))) : (var_2)));
                /* LoopSeq 3 */
                for (signed char i_16 = 0; i_16 < 14; i_16 += 1) 
                {
                    arr_50 [i_6] [10] [i_6] &= ((/* implicit */long long int) arr_25 [i_16] [i_15] [i_7] [i_6]);
                    var_46 *= ((/* implicit */short) ((_Bool) (unsigned char)220));
                    var_47 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12)))) : (14849600371534260961ULL)));
                }
                for (unsigned char i_17 = 0; i_17 < 14; i_17 += 1) /* same iter space */
                {
                    var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_6] [i_15] [i_15] [i_17])) ? (((unsigned int) -55674297)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_7] [i_15])))));
                    var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) ((unsigned short) (signed char)31)))));
                    var_50 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-34))))) && (((/* implicit */_Bool) (unsigned char)16))));
                    var_51 = ((/* implicit */long long int) arr_28 [i_6] [i_7] [i_15] [i_17]);
                }
                for (unsigned char i_18 = 0; i_18 < 14; i_18 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_19 = 0; i_19 < 14; i_19 += 2) 
                    {
                        arr_61 [i_6] [i_6] [i_7] [i_15] [i_18] [i_18] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)25))) ? ((~(arr_46 [i_6] [i_15] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1)))))));
                        var_52 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_6] [i_18])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -3428704781485473253LL)) ? (((/* implicit */int) (signed char)25)) : (492197918))))));
                        var_53 = ((/* implicit */short) ((var_11) ? (-4745008419103065226LL) : (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_18] [i_19])))));
                        var_54 = ((/* implicit */signed char) min((var_54), (((/* implicit */signed char) (((!(var_11))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4745008419103065237LL)) && (((/* implicit */_Bool) arr_60 [i_7] [i_15] [i_19] [i_18] [i_7]))))) : (((((/* implicit */int) (signed char)40)) + (((/* implicit */int) (signed char)-18)))))))));
                        var_55 = ((/* implicit */short) (signed char)24);
                    }
                    for (signed char i_20 = 1; i_20 < 12; i_20 += 1) 
                    {
                        var_56 = (!(arr_47 [i_20 + 2] [i_7] [i_15] [i_18] [i_20]));
                        var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4745008419103065225LL)) ? (((/* implicit */unsigned int) 492197915)) : (524745310U)));
                    }
                    for (signed char i_21 = 0; i_21 < 14; i_21 += 3) 
                    {
                        var_58 = ((/* implicit */long long int) arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                        var_59 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)34)) ? (584296787028566162ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_21])))))));
                    }
                    var_60 *= arr_47 [i_6] [i_6] [i_6] [i_6] [i_6];
                    var_61 = ((/* implicit */short) (~(var_2)));
                    /* LoopSeq 1 */
                    for (long long int i_22 = 3; i_22 < 11; i_22 += 2) 
                    {
                        var_62 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_22] [i_22 - 3] [i_22 - 1] [i_22] [i_22])) ? (((((/* implicit */int) (unsigned char)12)) ^ (((/* implicit */int) arr_58 [i_18] [i_15])))) : (492197931)));
                        var_63 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (signed char)24)) : (arr_53 [i_6] [i_6] [i_15] [i_6])))));
                    }
                }
                var_64 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1846514572)) ? (((/* implicit */int) arr_2 [i_6])) : (var_1)));
                var_65 = ((/* implicit */int) 3210394744U);
            }
        }
    }
    var_66 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (3221225472U) : (((/* implicit */unsigned int) var_5))))) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */int) (unsigned short)34117))))))), (((/* implicit */unsigned int) var_11))));
}
