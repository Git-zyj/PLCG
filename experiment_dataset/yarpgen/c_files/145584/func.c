/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145584
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_14 = (!((!(((/* implicit */_Bool) ((short) (short)11600))))));
                                var_15 = ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */int) var_1))))) ? (arr_11 [i_2] [i_2] [i_6 + 2] [i_6 - 1] [i_6]) : (((/* implicit */unsigned long long int) max((var_3), (var_3))))))) ? (((var_11) >> (((((((/* implicit */_Bool) 1097813799925248405LL)) ? (((/* implicit */int) arr_4 [i_1] [12ULL] [i_1])) : (((/* implicit */int) var_1)))) + (153))))) : (var_11)));
                                var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_5 [i_1])), (6856741506838197806ULL))) * (((((/* implicit */unsigned long long int) var_11)) / (var_10)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))) * (11590002566871353810ULL)))) ? (max((6856741506838197805ULL), (6856741506838197800ULL))) : (((/* implicit */unsigned long long int) -1073741824)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_6 + 1] [i_6 + 2] [i_6 + 1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        var_18 &= ((/* implicit */unsigned char) ((int) ((int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_7] [i_7])));
                        var_19 = ((/* implicit */_Bool) arr_1 [i_2] [i_7]);
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_7] |= ((/* implicit */unsigned short) 999539719248357233ULL);
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 4) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_1]))));
                        var_21 = ((/* implicit */unsigned char) arr_21 [i_0] [i_0] [i_2] [i_1] [i_1] [i_8]);
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(18446744073709551604ULL)))) ? (((unsigned int) max((999539719248357233ULL), (((/* implicit */unsigned long long int) (signed char)-67))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2])))));
                        arr_29 [i_2] = ((/* implicit */int) arr_23 [i_0] [i_0] [(signed char)10] [(signed char)10]);
                    }
                    for (short i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_23 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))))) - (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-5579))))), (34359737856ULL)))));
                        arr_33 [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) var_9);
                        var_24 |= ((((/* implicit */_Bool) 999539719248357220ULL)) ? (((((/* implicit */_Bool) 1159610526)) ? (4294967290U) : (((/* implicit */unsigned int) 65535)))) : (((/* implicit */unsigned int) 1073741823)));
                        arr_34 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((unsigned int) arr_6 [i_0] [i_1])) > (((/* implicit */unsigned int) max((arr_5 [i_2]), (arr_5 [i_2]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            for (int i_12 = 2; i_12 < 18; i_12 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) 6856741506838197829ULL);
                    arr_42 [i_10] [8U] [8U] = ((/* implicit */_Bool) ((0LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 4; i_13 < 19; i_13 += 4) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_13 - 1] [i_12 + 2]))));
                                var_27 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 8837186882921861544ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) : (arr_22 [i_10] [i_14]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 += ((/* implicit */short) 999539719248357220ULL);
        arr_49 [i_10] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_14 [i_10] [14]))));
    }
    for (short i_15 = 0; i_15 < 20; i_15 += 1) /* same iter space */
    {
        arr_52 [i_15] |= ((/* implicit */short) (~(((var_5) ? (((int) arr_2 [i_15])) : (((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_30 [i_15] [16ULL] [16ULL] [i_15]))))))));
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (int i_17 = 0; i_17 < 20; i_17 += 4) 
            {
                {
                    arr_59 [i_15] [i_15] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) var_10))), ((-(((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned long long int) var_13)) : (max((min((var_7), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((signed char) (short)-18406)))))));
                    var_29 = ((/* implicit */_Bool) (-((~(((((/* implicit */int) var_8)) * (((/* implicit */int) var_0))))))));
                }
            } 
        } 
        arr_60 [i_15] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)(-127 - 1)))));
    }
    for (short i_18 = 0; i_18 < 20; i_18 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (+(-1819381513)))) : (min((((/* implicit */unsigned int) ((unsigned short) var_7))), (((unsigned int) -1660573938))))));
        var_31 = var_5;
    }
    /* LoopNest 2 */
    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
    {
        for (signed char i_20 = 2; i_20 < 24; i_20 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 25; i_21 += 4) 
                {
                    for (unsigned short i_22 = 0; i_22 < 25; i_22 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */short) max((var_32), (var_12)));
                            var_33 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_10)));
                            arr_77 [i_19] [i_20] [i_21] [i_22] [i_22] = ((/* implicit */unsigned short) (+(1073741818)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_23 = 0; i_23 < 25; i_23 += 4) 
                {
                    for (int i_24 = 0; i_24 < 25; i_24 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) (~(var_11)));
                            var_35 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
                            arr_85 [i_19 + 1] [i_20] [i_19 + 1] [i_19 + 1] = ((/* implicit */short) var_10);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_25 = 0; i_25 < 25; i_25 += 4) 
                {
                    for (int i_26 = 2; i_26 < 22; i_26 += 1) 
                    {
                        {
                            var_36 -= (-(max((((/* implicit */int) arr_83 [i_19])), (((int) var_12)))));
                            arr_91 [(signed char)23] [i_20] [i_20 + 1] [i_20 + 1] [i_26] = ((/* implicit */_Bool) ((((max((((/* implicit */int) (signed char)113)), (-1819381508))) <= ((+(var_9))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_4)))))) >= (((var_5) ? (17447204354461194371ULL) : (999539719248357233ULL)))))) : (((((/* implicit */_Bool) arr_80 [i_19 + 1] [i_20 + 1] [i_20 + 1] [i_26 + 3])) ? (var_11) : (((/* implicit */int) arr_80 [i_19 + 1] [i_20 - 1] [i_20 - 1] [i_26 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_27 = 3; i_27 < 12; i_27 += 4) 
    {
        for (unsigned char i_28 = 0; i_28 < 13; i_28 += 4) 
        {
            {
                var_37 = ((/* implicit */_Bool) ((((arr_56 [i_27] [i_27] [(_Bool)1]) > (((/* implicit */int) ((arr_27 [i_27] [i_27] [i_27]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_8))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-11612)) : (1819381513)))) ? (min((var_10), (((/* implicit */unsigned long long int) var_3)))) : (var_10)))));
                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), (arr_63 [i_27 - 1] [i_27 - 1])))) ? (max((((/* implicit */unsigned long long int) (signed char)31)), (999539719248357269ULL))) : ((-(999539719248357244ULL)))));
                var_39 = ((/* implicit */int) (-(((unsigned long long int) arr_25 [i_27 - 2] [i_27 - 1] [i_27 - 1]))));
                /* LoopSeq 1 */
                for (int i_29 = 0; i_29 < 13; i_29 += 1) 
                {
                    var_40 |= ((/* implicit */short) (-(((/* implicit */int) ((1074104921U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    arr_100 [i_27] [i_27] [i_29] = ((/* implicit */int) ((((/* implicit */_Bool) -7)) || (((/* implicit */_Bool) 7))));
                    /* LoopSeq 1 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_41 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_64 [i_27 + 1])) ? (((/* implicit */int) arr_64 [i_27 - 2])) : (((/* implicit */int) arr_64 [i_27 - 1])))) - (min((max((1819381513), (((/* implicit */int) var_8)))), (((/* implicit */int) arr_58 [i_27] [i_27] [i_27 + 1] [i_27]))))));
                        arr_103 [i_27] [i_27] [i_27] [i_30] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_64 [i_30])) ? (max((((/* implicit */unsigned long long int) min((var_3), (var_11)))), (2762699875155048412ULL))) : (((/* implicit */unsigned long long int) var_11))));
                        arr_104 [i_27] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1819381512)) ? (var_9) : ((+(((int) (unsigned short)54697))))));
                    }
                    arr_105 [i_27] [i_27] [i_28] [i_27] = ((/* implicit */unsigned char) min((min((((/* implicit */int) arr_64 [i_27 + 1])), (-8))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_4))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483635)) ? (var_13) : (((/* implicit */int) (short)-1686))))))))));
                }
                var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_76 [i_28]))));
            }
        } 
    } 
}
