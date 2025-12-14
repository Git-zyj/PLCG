/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170520
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 *= ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)11273))))) != (((((/* implicit */_Bool) (short)32767)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32756)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_15 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)-32761)))) ? (((/* implicit */int) (short)14455)) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) & (arr_4 [i_0])))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_3] [i_3 + 2] [i_3 + 1] [i_3 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14477))) : (arr_7 [i_3] [i_3] [i_3] [i_3 + 3])));
                        var_17 = ((/* implicit */unsigned short) ((arr_10 [i_0] [i_0] [i_0] [i_0]) << (((arr_10 [i_0] [i_1] [i_2 - 4] [i_3 + 2]) - (4054666061U)))));
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) 3407901290U))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned int) 18446744073709551615ULL);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_15 [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) ((unsigned short) arr_7 [i_0] [i_0] [i_4] [i_4]))))));
            arr_16 [i_4] [i_4] = (((((((~(((/* implicit */int) (short)32767)))) + (2147483647))) >> ((((~(arr_4 [i_0]))) - (10177526710776180848ULL))))) >> (((arr_0 [i_0]) - (422841462))));
        }
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            var_20 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_5] [i_5] [i_0])) : (((/* implicit */int) arr_5 [i_0]))))));
            var_21 *= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-12851)) ? (((/* implicit */int) (short)20386)) : (((/* implicit */int) (short)-12844)))), (arr_14 [i_0])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) var_1))), (max((arr_0 [i_5]), (((/* implicit */int) (_Bool)1))))))) : (arr_7 [i_0] [i_0] [i_0] [i_0]));
        }
    }
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        var_22 = ((/* implicit */int) (~((~((~(7114196541696410808ULL)))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_20 [i_6] [i_6])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 696090570U)) && (((/* implicit */_Bool) arr_19 [i_6])))) && (((/* implicit */_Bool) arr_19 [i_6])))))));
        var_24 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) arr_20 [i_6] [i_6])) : (((/* implicit */int) arr_20 [i_6] [i_6])))), ((+(((/* implicit */int) (short)32736))))));
    }
    for (int i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        arr_24 [i_7] = ((/* implicit */signed char) -1470477801);
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            arr_27 [i_8] = ((/* implicit */unsigned short) (short)-14456);
            arr_28 [i_7] [i_8] = ((/* implicit */unsigned short) (short)-32759);
            /* LoopSeq 3 */
            for (short i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                var_25 = ((/* implicit */unsigned long long int) (!(((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [i_7])))))))));
                var_26 = ((/* implicit */short) (~(((-436471080) | (((int) var_2))))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                arr_33 [i_7] [i_10] [i_7] [i_7] = ((/* implicit */long long int) var_6);
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (794505935U) : (((((/* implicit */_Bool) -1276177504)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) : (3777416146U)))))) ? (((((/* implicit */unsigned long long int) arr_25 [i_8] [i_8])) + (arr_7 [i_7] [i_8] [i_10] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
            }
            for (unsigned short i_11 = 3; i_11 < 7; i_11 += 4) 
            {
                arr_38 [i_8] [i_11] [i_8] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62869)) ? (((/* implicit */int) (short)511)) : (-763094662)))) + (min(((~(var_6))), (((/* implicit */unsigned int) 66584576)))));
                /* LoopSeq 1 */
                for (signed char i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    arr_42 [i_11] [i_11] [i_8] [i_7] [i_11] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_11 [i_11 - 1])), (max((((int) (signed char)99)), (((/* implicit */int) ((arr_10 [i_7] [i_7] [i_11 + 1] [i_7]) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    var_28 += ((/* implicit */unsigned short) max(((short)(-32767 - 1)), (((/* implicit */short) ((((/* implicit */int) arr_8 [i_8] [i_8] [i_8])) == (-826228238))))));
                    arr_43 [i_7] [i_8] [i_7] [i_11] [i_11] = ((/* implicit */unsigned long long int) (signed char)55);
                    arr_44 [i_8] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((short)-28851), (max((((/* implicit */short) (signed char)76)), ((short)22545)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (unsigned char)126)) ? (2093056U) : (arr_10 [i_11 - 2] [i_11 + 1] [i_11 + 3] [i_11 + 3])))));
                }
            }
        }
        /* LoopSeq 1 */
        for (short i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_14 = 1; i_14 < 9; i_14 += 4) 
            {
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (arr_50 [i_7] [i_7])))) ? (((/* implicit */int) ((signed char) arr_36 [i_7] [i_13]))) : (((/* implicit */int) arr_37 [i_7] [i_13] [i_13] [i_14 - 1]))))), (((((((/* implicit */_Bool) 2823654901U)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_17 [i_14] [i_13] [i_14]))) | (((/* implicit */long long int) min((arr_0 [i_13]), (((/* implicit */int) arr_40 [i_7] [i_7] [i_7] [i_7]))))))))))));
                arr_51 [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_14 - 1] [i_14] [i_14] [i_14 - 1])) ? (arr_7 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14]) : (arr_7 [i_14 + 1] [i_14] [i_14 + 1] [i_14]))) ^ ((~(arr_7 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14])))));
                arr_52 [i_7] [i_7] [i_14] [i_14] = ((long long int) ((((/* implicit */long long int) ((((/* implicit */int) (short)24612)) << (((((/* implicit */int) var_12)) - (12705)))))) / (arr_17 [i_14 + 1] [i_14] [i_14 - 1])));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (((((~(((/* implicit */int) arr_11 [i_7])))) + (2147483647))) >> (((((((/* implicit */_Bool) ((long long int) 1879048192U))) ? (17906395941965305970ULL) : (((/* implicit */unsigned long long int) max((arr_47 [i_7] [i_13] [i_15] [i_13]), (((/* implicit */long long int) arr_23 [i_7]))))))) - (17906395941965305970ULL))))))));
                /* LoopSeq 1 */
                for (int i_16 = 2; i_16 < 8; i_16 += 3) 
                {
                    var_31 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) != ((((_Bool)0) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) (unsigned char)210))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (short)-22545)) : (((/* implicit */int) (signed char)-5))))) & (((unsigned long long int) var_2))))));
                    var_32 = ((/* implicit */short) arr_4 [i_7]);
                    arr_58 [i_7] = ((/* implicit */long long int) arr_13 [i_16] [i_15]);
                    arr_59 [i_16] [i_13] [i_15] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)9722)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-32751))));
                }
                var_33 += ((((((/* implicit */int) (short)-32314)) >= (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32546))) : (min((min((((/* implicit */unsigned int) (unsigned short)0)), (1590888144U))), (((/* implicit */unsigned int) arr_40 [i_15] [i_7] [i_7] [i_7])))));
                var_34 = ((/* implicit */unsigned short) min((((arr_54 [i_7] [i_7] [i_7] [i_7]) << (((14893968155699375672ULL) - (14893968155699375649ULL))))), (((/* implicit */unsigned int) ((_Bool) (unsigned char)228)))));
            }
            var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3389838426U))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_17 = 0; i_17 < 13; i_17 += 4) 
    {
        var_36 = ((/* implicit */unsigned char) (unsigned short)58350);
        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_17] [i_17] [i_17] [(unsigned short)2]))) - (arr_7 [i_17] [i_17] [i_17] [i_17])))) ? (((/* implicit */int) ((9223372036854775804LL) <= (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_17])) * (((/* implicit */int) var_0)))))))) : (((/* implicit */int) arr_13 [i_17] [i_17]))));
        var_38 += ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (short)16)))) + (2147483647))) << (((((((/* implicit */_Bool) arr_3 [i_17] [i_17])) ? (((/* implicit */int) (unsigned short)25490)) : (((/* implicit */int) arr_3 [i_17] [i_17])))) - (25490)))));
    }
    /* LoopNest 3 */
    for (unsigned int i_18 = 2; i_18 < 15; i_18 += 2) 
    {
        for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 3) 
        {
            for (unsigned int i_20 = 2; i_20 < 16; i_20 += 4) 
            {
                {
                    var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_68 [i_18 - 1])) & (((/* implicit */int) var_8)))) << (((((/* implicit */int) min((arr_62 [i_18 - 1]), (((/* implicit */short) var_11))))) - (19))))))));
                    arr_70 [i_18] = ((/* implicit */unsigned short) ((max((var_6), (((/* implicit */unsigned int) arr_20 [i_20 - 2] [i_18 + 1])))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) arr_69 [i_18] [i_19] [i_18])) : (((/* implicit */int) (short)18312))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-74)) ? (-2129291773) : (((/* implicit */int) (unsigned short)57459)))))))))));
                    var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_67 [i_18 + 1] [i_18 + 2]), (((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) arr_66 [i_18] [i_19])))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_64 [i_18] [i_18]))))) ? (((((/* implicit */int) var_10)) * (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) arr_69 [i_20] [i_18] [i_18])))))) : (((/* implicit */int) (signed char)-1)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_21 = 1; i_21 < 18; i_21 += 4) 
    {
        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_73 [i_21 - 1] [i_21 + 2])))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_71 [i_21 - 1]) : (arr_71 [i_21 + 2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9755)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((1115023832U), (((/* implicit */unsigned int) (short)(-32767 - 1))))))))));
        var_42 += ((/* implicit */signed char) 657603365U);
        /* LoopNest 2 */
        for (signed char i_22 = 0; i_22 < 20; i_22 += 4) 
        {
            for (unsigned short i_23 = 2; i_23 < 18; i_23 += 4) 
            {
                {
                    var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (short)32763))));
                    var_44 = ((/* implicit */unsigned int) (((+(arr_81 [i_21 + 1] [i_21 + 2]))) > (((/* implicit */long long int) ((((((/* implicit */int) ((short) (short)-14461))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (unsigned short)36838))))) - (1))))))));
                    /* LoopNest 2 */
                    for (short i_24 = 0; i_24 < 20; i_24 += 3) 
                    {
                        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                        {
                            {
                                var_45 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) / (min((((/* implicit */long long int) var_6)), (7114082980079519436LL))))) << ((((~(((/* implicit */int) ((unsigned short) (unsigned short)6808))))) + (6870)))));
                                var_46 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_83 [i_21 - 1] [i_22] [i_23] [i_24]))))));
                                var_47 -= (-(((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) & (arr_84 [i_21] [i_21] [i_23] [i_24] [i_25])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_26 = 0; i_26 < 20; i_26 += 4) 
        {
            var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (signed char)-8))) ? (((/* implicit */int) arr_83 [i_21] [i_21 - 1] [i_26] [i_26])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
            var_49 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14490)) ? (((/* implicit */int) arr_82 [i_26] [i_26] [i_26] [i_21])) : (((/* implicit */int) var_2)))))));
            var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)33532)))))));
            var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) ((((/* implicit */_Bool) arr_83 [i_26] [i_21 - 1] [i_21] [i_26])) ? (((/* implicit */int) arr_74 [i_21])) : (((/* implicit */int) arr_83 [i_21] [i_21 - 1] [i_21 + 2] [i_26])))))));
        }
    }
}
