/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103636
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_2), (var_0)))) ? (min((((/* implicit */unsigned int) var_9)), (3120165023U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-74), ((signed char)-80)))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_6)) ? (2046251839) : (((/* implicit */int) var_2))))))));
                            var_18 = ((/* implicit */short) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))));
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_3] [1] [i_4] = max((((/* implicit */unsigned short) (signed char)84)), (min((((/* implicit */unsigned short) (short)-10004)), ((unsigned short)0))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            arr_19 [i_1] [i_3] [(short)2] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (unsigned short)65529))) ? (min((var_16), (((/* implicit */unsigned int) ((int) var_12))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) (short)19305)) : (((/* implicit */int) (unsigned char)5)))))));
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))));
                            arr_20 [i_0] [i_1] [i_2 - 1] [i_3] [i_1] = ((/* implicit */short) (unsigned short)26289);
                            var_20 ^= ((/* implicit */long long int) min((((/* implicit */int) ((min((((/* implicit */unsigned int) (_Bool)1)), (1571159599U))) != (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))))), (((((/* implicit */_Bool) (short)255)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)0))))));
                        }
                        for (int i_6 = 2; i_6 < 8; i_6 += 4) 
                        {
                            arr_25 [8U] [i_0] [(unsigned short)4] [i_3] [i_6 - 2] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_14)), ((short)12932))))));
                            arr_26 [i_0] [i_1] [i_2] [(unsigned short)7] [i_6 - 2] = ((/* implicit */unsigned int) ((long long int) var_14));
                            var_21 ^= ((((/* implicit */_Bool) ((min((-934785967), (((/* implicit */int) var_6)))) / (min((((/* implicit */int) var_2)), (var_13)))))) ? (((/* implicit */int) var_1)) : (min((max((((/* implicit */int) (short)26652)), (492227807))), (((((/* implicit */int) (signed char)127)) << (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_29 [(short)7] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) min((var_2), (var_0)));
                            var_22 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned long long int) min((var_12), (1873403151U)))) != (min((((/* implicit */unsigned long long int) (short)26649)), (17910651106423714007ULL))))));
                        }
                        var_23 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) min((((/* implicit */unsigned short) (short)-20869)), ((unsigned short)54766)))), (min((((/* implicit */long long int) (_Bool)1)), (var_4))))), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-26659)), ((unsigned short)54760)))) <= (((/* implicit */int) (short)-9452)))))));
                        arr_30 [i_0] [i_0] [6ULL] [i_1] [1ULL] [i_3] |= (+(((((/* implicit */_Bool) var_14)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_1)))));
                        arr_31 [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((2251799679467520LL) & (((/* implicit */long long int) -1558503049)))))))), (-795345408)));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        arr_34 [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */int) var_16);
                        var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)36995))));
                        arr_35 [i_1] [(short)1] = ((/* implicit */unsigned long long int) var_0);
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (627406818533179608ULL)))) ? (((/* implicit */int) (short)26660)) : (746303906)));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            arr_42 [i_0] [i_1] [i_2] [i_0] [i_10] [i_0] [0U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1873403145U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-6))));
                            var_26 = ((/* implicit */unsigned char) ((_Bool) 8603551115431769017LL));
                            arr_43 [i_10] [i_9] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)1))));
                            var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-9452)))) : (((/* implicit */int) var_3))));
                        }
                        for (long long int i_11 = 1; i_11 < 7; i_11 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 2421564161U)) ? (((((/* implicit */_Bool) (unsigned char)104)) ? (524287) : (((/* implicit */int) (signed char)-55)))) : (((((/* implicit */int) (unsigned char)253)) / (1469957230)))));
                            arr_46 [i_11] = var_14;
                            arr_47 [i_1] [0] [0] [i_1] [i_11 + 3] [i_9] |= ((/* implicit */short) ((((/* implicit */_Bool) 725669753)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (short)-31153))));
                            arr_48 [i_9] [2] [i_2] [i_0] [i_9] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)9950)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (unsigned char)225))));
                        }
                        for (long long int i_12 = 1; i_12 < 7; i_12 += 4) /* same iter space */
                        {
                            arr_51 [i_0] [i_2 - 1] [i_12 - 1] = ((/* implicit */unsigned int) var_10);
                            arr_52 [i_0] [i_1] [i_1] [i_9] [i_12 + 2] = ((/* implicit */signed char) ((short) var_14));
                            arr_53 [i_12 + 2] [5ULL] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) 10505270250603860636ULL);
                        }
                        arr_54 [i_0] [i_0] [i_2] [i_0] [i_1] = ((4194288) + (((/* implicit */int) var_3)));
                        arr_55 [i_0] [i_1] [(_Bool)1] [i_2] [(unsigned short)6] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) var_3))));
                        arr_56 [i_9] [i_2] [i_1] [i_0] = ((/* implicit */short) (signed char)127);
                    }
                    for (int i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
                    {
                        var_29 += ((/* implicit */int) ((((((/* implicit */_Bool) 33594550U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8026))) : (min((3581319665U), (((/* implicit */unsigned int) var_7)))))) % (4261372761U)));
                        arr_59 [(_Bool)1] [(_Bool)1] [i_1] [i_2 - 1] [i_1] = (+(3581319665U));
                        /* LoopSeq 1 */
                        for (int i_14 = 1; i_14 < 8; i_14 += 4) 
                        {
                            arr_62 [i_14] [i_13] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_13)) % ((+(var_8)))));
                            arr_63 [i_1] [i_13] [i_2 - 1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29367)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)4432))))) : (((((/* implicit */_Bool) 4194312)) ? (14938181771730979094ULL) : (8971886547660892246ULL)))))) ? (max((((((/* implicit */_Bool) var_9)) ? (-4194308) : (((/* implicit */int) var_3)))), (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (var_11)))))) : (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-108)))) : (((int) 1256752158U)))));
                            var_30 = ((/* implicit */unsigned int) ((short) min((725669744), (((/* implicit */int) (unsigned short)61946)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
                    {
                        arr_66 [i_15] = ((/* implicit */unsigned char) ((int) var_6));
                        arr_67 [i_0] [i_1] [i_2] [i_15] = ((/* implicit */unsigned char) ((((-8974508235151442182LL) + (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned short) 5828215776028981917LL))) - (64157)))));
                        arr_68 [i_0] [i_0] [i_1] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-24565)) ? (((/* implicit */int) var_1)) : (-725669753)));
                        var_31 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)22801)) : (((/* implicit */int) var_7)))) <= (((((/* implicit */int) (short)-24965)) ^ (((/* implicit */int) (short)(-32767 - 1)))))));
                        arr_69 [9U] [i_1] [i_2] [i_15] = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_2)))) >= (var_15)));
                    }
                    var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (short)13139)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)4)))) : (min((((/* implicit */int) var_11)), (-725669762))))))));
                    arr_70 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((-8974508235151442176LL), (((/* implicit */long long int) (short)-5035))))) ? (min((((/* implicit */unsigned int) var_7)), (1387530759U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((-1559573058) + (1559573059))))))));
                }
            } 
        } 
    }
    for (int i_16 = 0; i_16 < 24; i_16 += 1) 
    {
        arr_74 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-104))))), (((unsigned short) var_14))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)25462))))) : (var_13)));
        arr_75 [i_16] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_16)))) ? (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27182))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (1524931903)))))), (min((var_8), (var_8)))));
    }
    for (unsigned char i_17 = 0; i_17 < 11; i_17 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 3; i_18 < 10; i_18 += 4) 
        {
            arr_80 [i_18] [i_18 - 2] [i_18] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)-18891)));
            /* LoopNest 2 */
            for (unsigned int i_19 = 0; i_19 < 11; i_19 += 4) 
            {
                for (unsigned short i_20 = 1; i_20 < 10; i_20 += 4) 
                {
                    {
                        var_33 += ((/* implicit */_Bool) 67108832U);
                        var_34 ^= ((/* implicit */unsigned long long int) ((unsigned short) min(((short)32747), ((short)-32747))));
                        arr_87 [i_18] [i_18] [i_19] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32420)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (unsigned short)3687))))) ? (((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */long long int) (-2147483647 - 1))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)125)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (unsigned short i_22 = 0; i_22 < 11; i_22 += 1) 
                {
                    for (short i_23 = 0; i_23 < 11; i_23 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((unsigned int) 923844726)), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_15)) >= (var_16))))))) ? (32505856U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((3592036655U) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) || (((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) (unsigned short)65535)))))))))));
                            var_36 = ((/* implicit */short) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) 4294967295U))))) && (((/* implicit */_Bool) min((var_1), ((unsigned short)3687)))))))));
                            var_37 = ((/* implicit */int) min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -6)) > (6366754006283465860ULL)))), (((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))))));
                            arr_97 [i_17] [i_18] [i_17] [2] [i_23] = ((((/* implicit */int) var_5)) << (((min((((/* implicit */long long int) ((unsigned int) 268173312LL))), (268173312LL))) - (268173298LL))));
                        }
                    } 
                } 
            } 
            arr_98 [i_18] [i_18] [i_17] = ((/* implicit */unsigned short) (short)31202);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_24 = 0; i_24 < 11; i_24 += 1) 
        {
            arr_101 [i_17] [i_24] [i_24] = ((/* implicit */short) ((unsigned int) var_13));
            arr_102 [i_24] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)65535))));
        }
        for (int i_25 = 0; i_25 < 11; i_25 += 2) 
        {
            arr_105 [5] = ((/* implicit */unsigned short) (~(18446744073709551615ULL)));
            arr_106 [i_17] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (_Bool)1)))))) / (((unsigned long long int) max((var_12), (2444808762U))))));
            var_38 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((min((((/* implicit */int) (short)-30784)), (173814197))) >= (((((/* implicit */_Bool) (unsigned short)3702)) ? (((/* implicit */int) (signed char)-125)) : (1692093997)))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)114)))))));
        }
        arr_107 [i_17] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)5))));
        arr_108 [5] = ((/* implicit */unsigned short) min((((min((var_8), (((/* implicit */unsigned int) -297408294)))) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) ((short) (signed char)-116)))));
        var_39 += (+(((/* implicit */int) (signed char)-114)));
    }
    for (unsigned char i_26 = 0; i_26 < 11; i_26 += 2) /* same iter space */
    {
        arr_111 [i_26] = ((short) ((long long int) (signed char)89));
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 11; i_27 += 4) 
        {
            for (unsigned int i_28 = 1; i_28 < 10; i_28 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_29 = 0; i_29 < 11; i_29 += 4) 
                    {
                        arr_120 [i_28] [i_29] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) : (var_8)))), (max((((/* implicit */long long int) 3172154853U)), (var_10)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_2))))) ? ((+(8682129775190167161LL))) : (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551596ULL) >= (((/* implicit */unsigned long long int) var_10)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((signed char)14), ((signed char)108)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_9)))) : (((/* implicit */int) (short)-1736)))))));
                        arr_121 [i_29] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)205)))))) & (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49732))) % (var_4))), (((/* implicit */long long int) ((unsigned short) var_9)))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_30 = 4; i_30 < 9; i_30 += 2) 
                    {
                        arr_125 [i_26] [i_27] [i_28 - 1] [(short)7] = ((/* implicit */short) var_12);
                        arr_126 [i_26] [i_27] [i_28 + 1] [i_30] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) var_1))), ((-(((/* implicit */int) (short)16368))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1290979692U)) ? (-2147483636) : (-1144221762)))))))) : (var_12)));
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)1985)) + (-274826698)));
                    }
                    arr_127 [i_26] [i_27] [i_27] [i_28] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */unsigned int) -908469597)) : (var_12)))) ? (((/* implicit */long long int) (-(231598415)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-86))) : (min((((/* implicit */long long int) var_7)), (8525115323343861215LL)))))));
                }
            } 
        } 
    }
    var_41 = ((/* implicit */unsigned int) var_10);
    var_42 = ((/* implicit */int) max((var_42), (((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-9223372036854775795LL), (((/* implicit */long long int) var_13))))) ? (min((((/* implicit */long long int) var_15)), (var_4))) : (var_4)))) ? (((/* implicit */int) (short)16374)) : (((/* implicit */int) var_11))))));
    var_43 = ((/* implicit */short) var_14);
}
