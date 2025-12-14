/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189533
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)102)) ? (-2125498961293502389LL) : (-6687507933468842783LL)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] [i_1] = (((!(((/* implicit */_Bool) (signed char)89)))) ? (1511454446U) : (((((/* implicit */_Bool) (unsigned short)22259)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
            arr_6 [i_0] [i_1] = ((((/* implicit */_Bool) 16072263859677058814ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46))) : (var_11));
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(((((/* implicit */_Bool) 126100789566373888ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9266351001644891794ULL))))))));
        }
        arr_7 [i_0] = ((/* implicit */long long int) ((-1376101058) >= ((+(((/* implicit */int) (unsigned short)1))))));
    }
    for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 1; i_4 < 10; i_4 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned int i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    arr_17 [i_4] [(signed char)6] [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3675127412U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) : (-7086602035778498747LL)))) || (((/* implicit */_Bool) var_16))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((var_10) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                    var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_15)))) ? (((/* implicit */unsigned long long int) ((var_16) & (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))) : (((var_9) << (((var_2) - (7064593563867933112LL)))))));
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))));
                }
                for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((84585446) % (((/* implicit */int) (signed char)55))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)255))));
                        var_25 = ((((/* implicit */int) var_12)) - (((/* implicit */int) var_12)));
                        arr_23 [i_3] [i_2] [1ULL] [i_4 + 1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((var_5) >= (var_17))))) != ((-(var_17)))));
                        var_26 = ((/* implicit */unsigned short) var_2);
                    }
                    var_27 += ((/* implicit */short) (-(((((/* implicit */_Bool) var_9)) ? (var_8) : (var_11)))));
                }
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_11)) : (var_2)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_19)))));
                    arr_26 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                    var_29 = ((/* implicit */long long int) var_4);
                }
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    arr_29 [i_9] [i_4 - 1] [0U] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)64010)) ? (((/* implicit */int) (unsigned short)44777)) : (((/* implicit */int) (signed char)121))));
                    var_30 += ((/* implicit */unsigned int) var_10);
                    arr_30 [i_3] [i_9] [i_4] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                }
                arr_31 [i_2] [i_3] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-110)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                arr_32 [i_3] [i_4] = ((/* implicit */signed char) var_12);
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (unsigned char)229)) : (1660261110)));
            }
            for (short i_10 = 1; i_10 < 10; i_10 += 2) /* same iter space */
            {
                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_19))))))));
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    arr_37 [i_11] [i_10 - 1] [i_10 + 1] [i_3] [i_2] = ((/* implicit */signed char) var_7);
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        arr_40 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? ((+(var_15))) : (((/* implicit */long long int) var_16))));
                        arr_41 [i_2] [i_3] [i_10 - 1] [i_11] [i_11] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-63)) ? (5U) : (((/* implicit */unsigned int) -839472346))));
                    }
                }
                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */int) var_18))));
                var_34 += ((/* implicit */short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_18))));
                var_35 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (var_14)))) * (var_16));
            }
            arr_42 [i_2] [i_3] [i_2] &= ((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_15)) : (var_9)))));
        }
        for (unsigned char i_13 = 1; i_13 < 10; i_13 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_14 = 1; i_14 < 9; i_14 += 3) 
            {
                var_36 = max((((/* implicit */long long int) max((((((/* implicit */_Bool) -8790933011299552369LL)) ? (((/* implicit */unsigned int) 446803256)) : (3351218449U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_19)))))))), (max((((/* implicit */long long int) var_14)), (var_17))));
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 11; i_15 += 2) 
                {
                    for (int i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        {
                            arr_51 [i_2] [i_2] [i_2] [i_2] [i_13] [i_2] [i_2] = ((/* implicit */int) var_2);
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (var_15)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) var_14)) + (var_16)))) : (var_15)))) ? (((((/* implicit */_Bool) (unsigned char)28)) ? (872270777U) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (unsigned short)4264))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7373481255844645897ULL)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) (signed char)63))))) : (((((/* implicit */_Bool) (signed char)100)) ? (var_11) : (3800926335U)))))) ? (((((/* implicit */_Bool) (short)6704)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61752))) : (-2183682317037729822LL))) : (((/* implicit */long long int) (+(max((1426169455U), (((/* implicit */unsigned int) (unsigned char)107)))))))));
                var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15274683893828559348ULL)) ? (((/* implicit */unsigned long long int) -5113989582555147490LL)) : (13030487607595663624ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3068)) << (((/* implicit */int) (signed char)0))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_11)) : (var_7)))));
            }
            for (signed char i_17 = 0; i_17 < 11; i_17 += 2) 
            {
                arr_55 [i_17] [i_13] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(3892581429U)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_16)) : (var_15))))));
                var_40 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2493585394U)) ? (((/* implicit */int) (short)-12120)) : (((/* implicit */int) (signed char)-95))))) ? (((/* implicit */unsigned long long int) min((var_15), (var_1)))) : (max((((/* implicit */unsigned long long int) var_10)), (var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_18))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? ((((!(((/* implicit */_Bool) var_17)))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32762)) ? (2698464833U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((var_8) | (((/* implicit */unsigned int) var_14))))) & (((var_15) | (((/* implicit */long long int) var_14))))))))))));
                arr_56 [i_17] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) max((68169720922112ULL), (((/* implicit */unsigned long long int) (signed char)-1))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((var_14) >= (((/* implicit */int) (unsigned char)121)))))));
            }
            /* LoopSeq 3 */
            for (unsigned short i_18 = 0; i_18 < 11; i_18 += 2) 
            {
                var_42 &= ((/* implicit */unsigned int) (((_Bool)1) ? (var_17) : (((((/* implicit */_Bool) max(((unsigned char)49), (((/* implicit */unsigned char) (signed char)112))))) ? (((/* implicit */long long int) 1708039822U)) : (((((/* implicit */_Bool) (unsigned short)56509)) ? (-4177520007408670574LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                var_43 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_11)))) && (((/* implicit */_Bool) var_18)))), (((((((/* implicit */_Bool) -4902023677922676342LL)) && (((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) var_19))))));
            }
            for (long long int i_19 = 0; i_19 < 11; i_19 += 4) 
            {
                var_44 = ((/* implicit */short) var_12);
                var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_19))) <= (var_11))) ? (((/* implicit */unsigned int) var_13)) : (max((((/* implicit */unsigned int) var_6)), (var_11)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)62981)))) ? (((/* implicit */int) max(((unsigned short)63), (((/* implicit */unsigned short) (signed char)16))))) : (((((/* implicit */int) var_10)) ^ (var_13))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)87)), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4386))))))));
            }
            for (unsigned short i_20 = 0; i_20 < 11; i_20 += 2) 
            {
                arr_67 [10LL] [i_13] [i_13] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)96)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2941176405U)) ? (((/* implicit */int) (unsigned short)64740)) : (((/* implicit */int) (unsigned char)56))))))) && (((/* implicit */_Bool) min(((unsigned short)34497), (min(((unsigned short)65535), ((unsigned short)44416))))))));
                arr_68 [i_2] [i_13] [i_13] [i_20] = ((/* implicit */unsigned int) (+((+(max((var_9), (((/* implicit */unsigned long long int) var_11))))))));
            }
        }
        arr_69 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)204))) & (15917645669425194686ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)100)), (1605634017)))))) : (((max((((/* implicit */unsigned long long int) var_18)), (var_9))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))))))));
    }
    /* LoopNest 3 */
    for (long long int i_21 = 0; i_21 < 14; i_21 += 2) 
    {
        for (signed char i_22 = 0; i_22 < 14; i_22 += 2) 
        {
            for (signed char i_23 = 0; i_23 < 14; i_23 += 2) 
            {
                {
                    arr_76 [i_21] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)60249)), (-280800132104908315LL)))) ? (((/* implicit */unsigned long long int) var_11)) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) min((var_15), (8589934591LL))))))));
                    arr_77 [i_21] [i_21] [i_23] = ((/* implicit */unsigned int) var_18);
                    arr_78 [i_22] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (5817613U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (signed char)54))))) : (248980834U))), (((var_10) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                }
            } 
        } 
    } 
    var_46 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (var_9)))));
}
