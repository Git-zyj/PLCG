/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127877
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
    var_18 *= ((/* implicit */unsigned char) var_0);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (((-9223372036854775807LL - 1LL)) >= (var_14)))) : (((((/* implicit */_Bool) var_17)) ? (arr_3 [i_0]) : ((-2147483647 - 1))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0] [i_0]))) ? (6121607585272448356ULL) : (var_17)))) ? (12932978755483297687ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) var_4);
                        /* LoopSeq 4 */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_21 -= ((/* implicit */unsigned short) arr_8 [i_1]);
                            var_22 = ((/* implicit */_Bool) ((unsigned long long int) (-9223372036854775807LL - 1LL)));
                            arr_20 [i_5] [i_2] [i_2] [i_2] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) ((int) var_2));
                        }
                        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6121607585272448326ULL)) ? (7356218653344638037ULL) : (4047434454860340283ULL)));
                            arr_24 [i_3] [i_6] = ((/* implicit */int) 6121607585272448356ULL);
                            var_24 *= ((/* implicit */unsigned short) var_9);
                        }
                        for (long long int i_7 = 2; i_7 < 17; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */_Bool) (-(arr_25 [i_1] [i_2] [i_3] [i_1] [i_7])));
                            var_26 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 2922350296901495396ULL)) ? (((/* implicit */int) (unsigned char)9)) : (2147483647)))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            var_27 &= ((/* implicit */unsigned long long int) (_Bool)0);
                            var_28 = ((/* implicit */_Bool) (unsigned char)216);
                        }
                        arr_30 [i_1] [i_2] [i_3] [i_4] [i_4] = arr_2 [i_1] [i_4];
                        var_29 = ((/* implicit */long long int) ((arr_7 [i_2]) < (arr_7 [i_1])));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) arr_13 [i_1] [i_1] [i_1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
    {
        var_31 &= (!((_Bool)1));
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1577836652)) ? (6121607585272448349ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */_Bool) 2147483643);
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_14] [i_13] [i_11] [i_11] [i_10])) ^ (((/* implicit */int) arr_43 [i_14]))))) ? (((((/* implicit */_Bool) 12325136488437103266ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (2005360188682186498ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13)))))) ? ((-((~(15524393776808056219ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4707966404570565721ULL)) ? (-528682703) : (((/* implicit */int) (unsigned char)134)))))));
                                var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [i_10] [i_10] [i_10] [i_10] [8LL])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)3)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51975))) : (-1LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)230))))) : (9223372036854775807LL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_36 *= ((/* implicit */unsigned char) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)19417)) <= (((/* implicit */int) var_12)))))) + (((unsigned long long int) (unsigned short)16259)))) - (16253ULL)))));
                        var_37 ^= ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((int) var_4))) & ((+(arr_7 [i_10])))))));
                        /* LoopSeq 1 */
                        for (short i_16 = 1; i_16 < 11; i_16 += 2) 
                        {
                            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31350))) : (1921526829U)))) : ((~(12325136488437103267ULL))))))));
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -5216092338309231292LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)65535))))))) < (((unsigned long long int) (~(10054994311879765122ULL))))));
                        }
                        var_40 = ((/* implicit */unsigned char) (unsigned short)49259);
                        var_41 = max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_3)))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) ((short) (unsigned char)241)))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 6121607585272448357ULL))))), (max((((/* implicit */long long int) -1416920122)), (-6530332089695154763LL))))));
                    }
                    for (long long int i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        var_42 = min((((/* implicit */unsigned long long int) (unsigned char)62)), (13950954224155991018ULL));
                        var_43 &= ((/* implicit */int) ((unsigned long long int) ((arr_52 [i_12]) | (arr_52 [i_10]))));
                        var_44 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_11])))))) >= (((((/* implicit */_Bool) arr_43 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_16)))));
                    }
                    for (short i_18 = 2; i_18 < 9; i_18 += 4) 
                    {
                        var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) ((((/* implicit */int) ((16441383885027365099ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6571)))))) % (((/* implicit */int) arr_33 [i_11] [i_12])))))));
                        var_46 &= ((/* implicit */unsigned char) arr_15 [i_12] [i_12] [i_18] [i_18 - 2] [i_18 - 2] [i_18]);
                        var_47 = var_6;
                        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_18] [i_18 + 1]))) : (1292691892534523105ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) (+(var_16)))) : (((unsigned long long int) (signed char)-30)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_19 = 0; i_19 < 12; i_19 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_20 = 0; i_20 < 12; i_20 += 3) 
                        {
                            var_49 -= ((/* implicit */unsigned short) arr_11 [i_20] [i_20] [i_20] [i_20]);
                            var_50 = (!(((/* implicit */_Bool) 18446744073709551615ULL)));
                            var_51 = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)60337));
                        }
                        for (unsigned short i_21 = 0; i_21 < 12; i_21 += 3) 
                        {
                            arr_65 [i_19] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)148)) ? (-5216092338309231307LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 805306368ULL))))))));
                            var_52 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
                            var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_21] [i_19] [i_10])) ? (((/* implicit */int) arr_42 [i_19] [i_10] [i_10])) : (((/* implicit */int) var_11)))))));
                            var_54 = ((/* implicit */short) ((((/* implicit */_Bool) 6813794230483028570LL)) ? (12325136488437103266ULL) : (6121607585272448342ULL)));
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_55 *= ((((/* implicit */_Bool) ((unsigned char) 702885775837485434ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_19]))) : (((((/* implicit */_Bool) 12325136488437103270ULL)) ? (17743519978552180435ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                            var_56 = ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
                            var_57 = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
                            var_58 = ((/* implicit */signed char) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32761)))));
                        }
                        var_59 -= ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_0)))));
                    }
                }
                for (short i_23 = 0; i_23 < 12; i_23 += 1) 
                {
                    var_60 = ((/* implicit */long long int) arr_18 [i_10] [i_11] [i_10] [i_10]);
                    arr_72 [i_10] [i_11] [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_10] [i_10] [i_23] [i_10] [i_23] [i_23] [i_23])) ? (((/* implicit */int) arr_71 [i_23])) : (((/* implicit */int) (short)24204))))) ? (((((/* implicit */int) arr_64 [i_23] [i_11] [i_11] [i_11] [i_10])) + (((/* implicit */int) (unsigned char)153)))) : (max((arr_70 [i_23] [i_23] [i_11] [i_10]), (((/* implicit */int) arr_64 [i_10] [i_11] [i_10] [i_11] [(short)6]))))));
                }
                var_61 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)97))) ^ (18446744073708503040ULL))), (((/* implicit */unsigned long long int) 3388136903U))));
                /* LoopSeq 3 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    var_62 = ((/* implicit */unsigned char) -1LL);
                    arr_75 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((long long int) 776927166));
                }
                for (unsigned char i_25 = 0; i_25 < 12; i_25 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_26 = 1; i_26 < 8; i_26 += 3) 
                    {
                        for (long long int i_27 = 0; i_27 < 12; i_27 += 1) 
                        {
                            {
                                var_63 = ((long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (7160025300020953841LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)81)))));
                                var_64 = ((/* implicit */unsigned long long int) max((var_64), (((/* implicit */unsigned long long int) ((short) var_3)))));
                                arr_87 [i_27] [i_26] [i_25] [i_26] [i_10] = ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (max((((/* implicit */unsigned int) -245548400)), (1802913165U))));
                                var_65 ^= ((/* implicit */int) 6384408134871479606LL);
                                var_66 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_47 [i_10] [i_10] [i_25] [i_10] [i_27])))))));
                            }
                        } 
                    } 
                    var_67 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)112)) ? (840531002884295067ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8507)))))));
                    var_68 -= arr_64 [i_25] [i_11] [i_11] [i_10] [i_10];
                }
                /* vectorizable */
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    arr_92 [i_10] [i_28] [i_11] [i_28] = ((/* implicit */signed char) (~(255)));
                    /* LoopNest 2 */
                    for (int i_29 = 0; i_29 < 12; i_29 += 3) 
                    {
                        for (long long int i_30 = 0; i_30 < 12; i_30 += 4) 
                        {
                            {
                                var_69 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (-37403383) : (((/* implicit */int) (short)11729))));
                                arr_98 [i_29] [i_29] [i_29] [i_29] [i_29] [i_28] = (i_28 % 2 == 0) ? (((/* implicit */int) ((((arr_38 [1ULL] [i_10]) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) arr_88 [i_28] [i_28] [i_29])) : (((/* implicit */int) arr_67 [i_10] [i_11] [i_28] [i_10] [i_30]))))))) : (((/* implicit */int) ((((arr_38 [1ULL] [i_10]) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) arr_88 [i_28] [i_28] [i_29])) : (((/* implicit */int) arr_67 [i_10] [i_11] [i_28] [i_10] [i_30])))) - (46))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
