/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107757
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (!(var_10))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8496472666038883417LL))))), (arr_4 [i_0 + 1] [i_0 - 1])));
            arr_5 [5LL] = ((/* implicit */unsigned short) max(((short)7168), (((/* implicit */short) (signed char)127))));
        }
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            arr_8 [i_2] &= max((((((/* implicit */_Bool) max((arr_0 [(unsigned short)15]), (((/* implicit */long long int) -271125759))))) ? ((+(var_8))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0 - 1])));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) (short)11828))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_4 [i_0] [i_0 + 1])))));
        }
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            arr_13 [i_0 + 1] [(_Bool)1] = max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) (signed char)85)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
            arr_14 [i_0 - 1] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */short) arr_6 [i_0] [(unsigned char)12]))))) ? (((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)108))))))));
        }
        /* LoopSeq 1 */
        for (long long int i_4 = 2; i_4 < 24; i_4 += 4) 
        {
            arr_17 [i_0] [i_0] [i_0] = min((max(((-(208402576826698918ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_4])))), (((/* implicit */unsigned long long int) var_2)));
            arr_18 [i_0] &= ((/* implicit */unsigned int) (~(var_6)));
        }
    }
    for (unsigned char i_5 = 4; i_5 < 23; i_5 += 2) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)(-127 - 1)))))), (((unsigned long long int) var_10)))))))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_15 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) (signed char)-12))))) ? (((((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_16 [i_5 - 1] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
            var_16 = ((/* implicit */signed char) var_4);
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                arr_26 [8] [i_7] [i_7] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(3123364989U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)17118), (((/* implicit */unsigned short) arr_21 [i_6] [i_6] [i_5])))))) : ((-(var_8)))))) : (18238341496882852698ULL)));
                var_17 *= ((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned char)128)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned short)55689))))))));
                var_18 = min((((((/* implicit */_Bool) var_9)) ? (max((var_0), (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 8406131761060684010ULL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))), (((/* implicit */long long int) var_5)));
            }
            for (long long int i_8 = 1; i_8 < 21; i_8 += 4) 
            {
                arr_30 [i_5 - 4] &= (+(((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (var_2))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)5006)) : (((/* implicit */int) arr_10 [i_5]))))) : (max((var_6), (((/* implicit */long long int) -5)))))));
                arr_31 [i_8] [i_8] [i_5] [i_5] &= ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))), (((((/* implicit */_Bool) (signed char)-64)) ? (var_2) : (var_8)))));
            }
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_27 [i_5 - 1] [i_5 + 2] [i_5 - 4]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) 8542179283788932858ULL))));
                arr_35 [i_5 - 2] [i_6] [i_9] = ((/* implicit */long long int) 10040612312648867586ULL);
                arr_36 [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) (~(35184371040256LL)));
            }
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            arr_39 [i_5] [i_10] = var_4;
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_5 + 1] [i_5] [i_10]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_5 + 2] [i_5 - 1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (var_4)))) : (max((((/* implicit */long long int) arr_21 [i_5] [i_5 - 3] [i_10])), (1203500033697751392LL)))));
            var_22 = ((var_10) ? (max((((((/* implicit */_Bool) (unsigned short)2)) ? (8496472666038883417LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)143))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (-(2437435680U)))))));
            arr_40 [i_5 - 2] [i_5] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((((/* implicit */_Bool) 4294967290U)) ? (271125741) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        }
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((max((((/* implicit */long long int) var_2)), (max((((/* implicit */long long int) var_11)), (var_0))))) / (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)173)), ((+(((/* implicit */int) var_5))))))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            var_24 ^= 7057688683680454749LL;
            /* LoopSeq 4 */
            for (unsigned int i_12 = 1; i_12 < 24; i_12 += 2) 
            {
                arr_47 [i_5] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_9))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [i_12])))))));
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    arr_50 [i_13] = ((/* implicit */long long int) ((1832500161565964649ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5 + 2] [i_5 + 2])))));
                    /* LoopSeq 2 */
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        arr_53 [i_5] [i_11] [i_12] [i_5] [i_14] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_4)) / (arr_33 [i_5 + 1])));
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_1))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_48 [i_11] [i_12 - 1] [i_13])) : (6474421125728900099ULL)));
                    }
                    for (unsigned char i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -271125727)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))))))));
                        var_28 = ((/* implicit */unsigned char) (((-(var_8))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
                        arr_58 [(short)18] [i_13] = ((/* implicit */signed char) arr_12 [i_15]);
                    }
                    var_29 *= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (var_4))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned char) var_3)))));
                }
                var_30 += ((/* implicit */unsigned char) var_11);
                var_31 = ((/* implicit */short) ((var_2) ^ (((/* implicit */unsigned int) 1641369706))));
                arr_59 [i_5] = ((/* implicit */short) var_4);
            }
            for (short i_16 = 0; i_16 < 25; i_16 += 2) /* same iter space */
            {
                var_32 *= ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                arr_63 [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 8406131761060684006ULL)))))));
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_5 + 2] [i_5] [i_5] [i_5 + 2] [i_5 + 2] [i_5])) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)71)) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775790LL))) + (36LL)))))) : (24LL)));
            }
            for (short i_17 = 0; i_17 < 25; i_17 += 2) /* same iter space */
            {
                arr_67 [i_5] [(unsigned short)7] [i_17] [i_17] = ((((/* implicit */_Bool) arr_41 [i_5 - 1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
                var_34 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                var_35 = ((/* implicit */short) var_0);
            }
            for (long long int i_18 = 0; i_18 < 25; i_18 += 4) 
            {
                arr_72 [i_5] [i_11] [i_18] = ((/* implicit */int) ((short) var_5));
                var_36 = ((/* implicit */int) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_1 [i_11] [i_11])));
            }
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_33 [i_5 - 2])))))));
            /* LoopSeq 4 */
            for (unsigned int i_19 = 2; i_19 < 21; i_19 += 4) 
            {
                arr_77 [i_5 - 1] [i_11] [i_11] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : ((-(var_2)))));
                arr_78 [i_5] = ((/* implicit */int) ((((/* implicit */long long int) (~(1857531637U)))) >= (((((/* implicit */_Bool) 32767LL)) ? (2205531468150299597LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-21037)))))));
            }
            for (unsigned char i_20 = 0; i_20 < 25; i_20 += 2) 
            {
                arr_81 [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2097151U)) ? (var_8) : (arr_61 [i_5] [i_11] [i_20])))) ? (((/* implicit */unsigned long long int) ((int) var_10))) : (((((/* implicit */_Bool) 433409399)) ? (((/* implicit */unsigned long long int) var_6)) : (7889827767931022013ULL)))));
                var_38 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)58))) : (var_4)));
                var_39 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (4503599627362304LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51819))) : (2097173U));
            }
            for (long long int i_21 = 0; i_21 < 25; i_21 += 1) 
            {
                arr_85 [i_21] [i_11] [i_5] = arr_24 [i_5 - 1] [i_5 + 2] [i_5 - 2] [i_5 - 2];
                arr_86 [i_21] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (645291861U))) : ((+(var_2)))));
                /* LoopSeq 4 */
                for (unsigned int i_22 = 1; i_22 < 24; i_22 += 4) 
                {
                    var_40 = ((/* implicit */unsigned short) ((488087122U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-7816)))));
                    var_41 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_44 [i_5] [i_11] [i_21] [i_11]))))));
                    arr_89 [i_22] [(short)5] [i_11] [i_22] [i_22] = ((/* implicit */unsigned int) var_1);
                }
                for (signed char i_23 = 1; i_23 < 23; i_23 += 4) 
                {
                    var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) (_Bool)0))));
                    arr_94 [i_23] [i_23] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) var_10))));
                }
                for (long long int i_24 = 0; i_24 < 25; i_24 += 2) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)92))));
                    var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                }
                for (long long int i_25 = 0; i_25 < 25; i_25 += 2) /* same iter space */
                {
                    var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21033)) ? (550208852U) : (((/* implicit */unsigned int) arr_12 [i_25]))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))));
                    arr_100 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) var_3);
                    arr_101 [i_11] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2437435642U)))))) & (((long long int) (signed char)70))));
                    arr_102 [i_5] [i_25] = ((/* implicit */unsigned short) ((((var_10) || (((/* implicit */_Bool) var_4)))) ? (arr_33 [i_5 - 4]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_5])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                    arr_103 [i_5] [i_5] [i_5] [i_5 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 3806880173U))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)112))));
                }
                arr_104 [i_21] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_5] [i_21]))) ? ((~(1857531670U))) : ((+(var_8)))));
            }
            for (long long int i_26 = 1; i_26 < 24; i_26 += 2) 
            {
                var_46 |= ((/* implicit */long long int) ((arr_82 [24ULL]) == (arr_82 [i_26 - 1])));
                var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8406131761060684006ULL)) ? (((/* implicit */int) arr_37 [i_11])) : (-20)))))))));
                arr_109 [i_5] [i_26] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 0)) / (2147483648U)))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
            }
        }
        /* vectorizable */
        for (unsigned int i_27 = 0; i_27 < 25; i_27 += 3) 
        {
            var_48 = ((/* implicit */short) (-(((/* implicit */int) (signed char)31))));
            var_49 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_27])) ? (((/* implicit */unsigned long long int) arr_22 [i_5 + 2] [i_5 - 2] [i_5])) : (0ULL)));
            var_50 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_84 [i_5 + 1] [i_5] [i_5 - 4]))));
        }
        /* vectorizable */
        for (int i_28 = 3; i_28 < 24; i_28 += 3) 
        {
            arr_115 [i_5] [i_28] = ((/* implicit */int) var_9);
            var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) (unsigned short)5636))))) == (((long long int) (signed char)30)))))));
            var_52 = ((var_10) ? (((/* implicit */int) arr_57 [i_5] [i_28] [i_28 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_5]))))));
            var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_8)) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3645419143965035992LL)))))))))));
            arr_116 [i_5] [i_5] [i_28] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13716)) ? (((/* implicit */int) arr_37 [i_28])) : (((/* implicit */int) var_1))))) ? ((-(2736940787743810246ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) 508269481U)))))));
        }
        for (unsigned int i_29 = 1; i_29 < 22; i_29 += 2) 
        {
            arr_119 [i_29] [i_5 - 1] [i_5 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) (signed char)28)) : (min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) 9992626825788271722ULL)))))))));
            arr_120 [i_29] [i_5] = ((/* implicit */unsigned long long int) max((var_2), (15U)));
            arr_121 [15ULL] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2048387738924554693LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_29 - 1]))))));
        }
        arr_122 [i_5] = ((/* implicit */unsigned int) (!((_Bool)1)));
    }
    for (int i_30 = 0; i_30 < 18; i_30 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_31 = 0; i_31 < 18; i_31 += 4) 
        {
            arr_127 [i_30] = max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))) : ((-(var_6))))), (max((3772216225076086980LL), (((/* implicit */long long int) (signed char)(-127 - 1))))));
            var_54 = max((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) (signed char)-33))))) : (((((/* implicit */_Bool) arr_98 [i_30])) ? (var_0) : (((/* implicit */long long int) var_8)))))), (((/* implicit */long long int) ((unsigned short) var_10))));
            var_55 = ((long long int) max((((/* implicit */unsigned long long int) arr_34 [i_30] [i_30] [i_31])), (arr_88 [i_30] [i_30])));
            arr_128 [i_31] [i_31] = ((/* implicit */unsigned int) 3ULL);
        }
        var_56 += ((/* implicit */long long int) (-(((/* implicit */int) arr_56 [i_30] [i_30] [i_30] [i_30] [i_30] [i_30]))));
    }
    for (unsigned int i_32 = 0; i_32 < 25; i_32 += 1) 
    {
        var_57 = ((/* implicit */_Bool) max((var_57), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3790114075U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)26)) ? (18) : (((/* implicit */int) var_3))))) : (max((((/* implicit */long long int) var_5)), (-1908479994979421510LL)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_32] [i_32] [i_32] [i_32] [i_32] [i_32] [i_32]))) : (((long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_112 [i_32])))))))));
        var_58 += ((/* implicit */long long int) max((((/* implicit */int) ((signed char) (-(18446744073709551615ULL))))), ((-(((/* implicit */int) var_1))))));
    }
    var_59 *= ((/* implicit */unsigned short) var_8);
}
