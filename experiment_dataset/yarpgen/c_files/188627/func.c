/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188627
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-(3981340038605164023ULL))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (var_10) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)131)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)223)))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))) - (209))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_15 [i_2] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11)))));
                                arr_16 [i_0] = ((/* implicit */short) var_5);
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) (short)32756)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))))))))));
                                var_20 += ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                                var_21 |= ((/* implicit */short) (~(((((/* implicit */int) var_12)) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_16))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) var_13))))));
        arr_17 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        var_23 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned short) var_12)))))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
    {
        arr_20 [(signed char)21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)83)) != (((/* implicit */int) (unsigned char)32))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                {
                    var_24 *= ((/* implicit */signed char) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_13)) - (64326)))));
                    arr_25 [i_5] [i_5] [i_7] [(unsigned char)5] = ((unsigned char) var_2);
                    arr_26 [(short)12] = ((/* implicit */unsigned short) ((short) var_13));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)36377)) << (((((/* implicit */int) (unsigned char)61)) - (50)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            arr_31 [i_5] [i_5] [(unsigned short)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) var_7))))));
            arr_32 [i_5] [i_8] = ((signed char) var_0);
            var_26 = ((/* implicit */unsigned short) ((unsigned char) var_9));
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
        }
        for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15))));
            /* LoopSeq 3 */
            for (short i_10 = 3; i_10 < 19; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_11 = 3; i_11 < 20; i_11 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        var_29 *= ((/* implicit */signed char) ((((var_14) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) && ((!(((/* implicit */_Bool) (short)-32083))))));
                        var_30 *= ((/* implicit */unsigned char) var_5);
                    }
                    arr_43 [i_10] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (short)-8727)) : (((/* implicit */int) (signed char)114))))));
                    var_31 |= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))));
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        arr_47 [i_9] [i_5] [i_10] [i_11 - 2] [i_10] = ((/* implicit */short) ((unsigned char) var_13));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)38))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32752))) & (var_14))))))));
                    }
                }
                var_33 = ((/* implicit */short) ((((unsigned long long int) (signed char)127)) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 4; i_15 < 20; i_15 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
                            arr_53 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))));
                            arr_54 [i_5] [i_10] [i_10] [(unsigned short)13] [i_14] [i_15] = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) var_16)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                arr_59 [i_16] = (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (14379209477031012950ULL))));
                var_35 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (short)24477)))));
                var_36 *= ((/* implicit */unsigned char) ((unsigned long long int) var_13));
            }
            for (unsigned char i_17 = 0; i_17 < 22; i_17 += 3) 
            {
                var_37 = ((/* implicit */short) (+(((unsigned long long int) var_14))));
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))) : ((~(((/* implicit */int) var_9))))));
                /* LoopSeq 2 */
                for (short i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_1))))) : (((unsigned long long int) var_14))));
                    var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)36)) == (((/* implicit */int) (unsigned char)226)))))));
                    arr_64 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_1))));
                    var_41 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
                }
                for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 3) 
                {
                    arr_67 [i_5] [i_9] [i_9] [i_17] [i_17] [i_19] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (unsigned short)29683))) * (((/* implicit */int) ((unsigned char) var_0)))));
                    var_42 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)0))));
                    arr_68 [i_19] [i_17] [i_9] [i_5] = ((/* implicit */short) (~(((/* implicit */int) var_4))));
                    arr_69 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)116)))) : ((~(14736715190122210874ULL)))));
                }
            }
            var_43 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))));
        }
        var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((((/* implicit */int) var_3)) | (((/* implicit */int) var_4)))) << ((((~(((/* implicit */int) var_1)))) + (18701))))))));
        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((unsigned short) var_9))))))));
    }
    /* vectorizable */
    for (unsigned short i_20 = 0; i_20 < 10; i_20 += 3) 
    {
        var_46 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
        /* LoopSeq 2 */
        for (unsigned char i_21 = 0; i_21 < 10; i_21 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 4) 
            {
                arr_77 [i_20] [i_20] [i_21] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_10) : (var_10)));
                var_47 |= ((/* implicit */unsigned short) ((unsigned long long int) var_11));
            }
            for (signed char i_23 = 0; i_23 < 10; i_23 += 3) 
            {
                var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) (+(((((/* implicit */_Bool) (short)-9599)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)19923)))))))));
                var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))));
                /* LoopSeq 2 */
                for (signed char i_24 = 0; i_24 < 10; i_24 += 2) 
                {
                    var_50 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned char)93))))));
                    var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))));
                    /* LoopSeq 4 */
                    for (unsigned char i_25 = 0; i_25 < 10; i_25 += 2) 
                    {
                        var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_1)))))));
                        arr_86 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */signed char) var_10);
                    }
                    for (signed char i_26 = 0; i_26 < 10; i_26 += 4) 
                    {
                        arr_89 [i_26] [i_24] [i_23] [i_21] [i_20] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_13)))) ^ (((/* implicit */int) var_16))));
                        var_53 = ((/* implicit */signed char) var_7);
                        var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))));
                    }
                    for (unsigned short i_27 = 0; i_27 < 10; i_27 += 4) 
                    {
                        arr_94 [i_20] [i_21] [i_23] [i_24] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_16)))) : ((+(((/* implicit */int) var_12))))));
                        var_55 = ((/* implicit */short) ((unsigned short) ((unsigned char) var_5)));
                    }
                    for (unsigned long long int i_28 = 0; i_28 < 10; i_28 += 4) 
                    {
                        var_56 -= ((/* implicit */short) var_3);
                        var_57 = ((/* implicit */unsigned char) (~(var_10)));
                        arr_99 [i_28] [i_28] [i_28] [(signed char)0] = ((/* implicit */unsigned short) var_14);
                    }
                    var_58 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) % (((/* implicit */int) (unsigned char)18))));
                }
                for (short i_29 = 0; i_29 < 10; i_29 += 3) 
                {
                    var_59 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((unsigned short) var_5)))));
                    arr_102 [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) != ((-(((/* implicit */int) var_2))))));
                    arr_103 [i_29] [i_21] [2ULL] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
                }
            }
            var_60 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
            arr_104 [i_20] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2))))));
        }
        for (short i_30 = 0; i_30 < 10; i_30 += 1) 
        {
            var_61 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15))));
            var_62 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
        }
        var_63 = ((/* implicit */signed char) var_1);
    }
    var_64 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9)))) : ((-(((/* implicit */int) var_8)))))));
}
