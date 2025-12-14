/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175763
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
    var_18 *= ((/* implicit */_Bool) var_17);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) & (var_5))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : (0LL)))))) ? (max((((/* implicit */unsigned long long int) 1145722973)), (8380063371257180969ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 2457310733U)) ? (2644264890466286136LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)183))))))))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_3 [i_1])) & ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15945036948216984373ULL)))));
        }
        for (signed char i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~(((((/* implicit */int) ((arr_1 [i_0]) > (arr_3 [i_0])))) >> (((((/* implicit */int) var_3)) - (174))))))))));
            arr_6 [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -7912250369249758264LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)48))))))) : (((unsigned int) (_Bool)1))));
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    {
                        var_22 += ((/* implicit */long long int) (!(((/* implicit */_Bool) -6322581015616359537LL))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            arr_14 [(unsigned char)1] [i_4] [i_3] [1U] [i_4] [1U] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (unsigned char)197))));
                            arr_15 [i_0] [i_2] [i_3] [i_5] [i_3] [i_3] [i_4] = (+(((/* implicit */int) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            var_23 += ((/* implicit */unsigned int) ((arr_10 [i_3 + 2] [i_3 + 2] [(signed char)10] [i_3 + 2] [i_3 + 1] [i_3 - 1]) < (var_11)));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_3 + 1] [16LL] [1ULL] [i_4] [i_4] = arr_12 [i_4] [i_4] [i_3] [11LL] [i_4];
                            arr_19 [i_0] [i_4] [i_2] [9] [4U] [(unsigned char)17] [i_6] = ((/* implicit */long long int) 3960664424701365667ULL);
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_4] [(signed char)6] [i_6] = ((/* implicit */signed char) (+((-(((/* implicit */int) var_3))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_7] [i_4] [i_3 - 1] [i_4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2])))))) ? (arr_9 [i_3 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) arr_10 [i_0] [i_2] [i_4] [i_4] [i_7] [i_4])) : (arr_23 [i_7] [i_4] [i_4] [i_4] [i_2] [i_0]))))));
                            arr_25 [i_7] [(_Bool)1] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_2] [i_3 - 1] [(_Bool)1] [i_4] [i_3 + 2] [i_3 + 2])) ? (((/* implicit */int) arr_13 [i_7] [i_4] [i_4] [i_3] [i_2] [i_0])) : ((~(((/* implicit */int) var_0))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 521948801237604596LL)) || (((/* implicit */_Bool) var_8)))))));
                            arr_28 [i_4] = ((/* implicit */long long int) (-((~(((unsigned int) (unsigned char)125))))));
                            var_25 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_8])) ? (arr_2 [i_2] [i_4] [i_8]) : (arr_2 [i_0] [i_2] [i_4]))) + (((((/* implicit */long long int) ((unsigned int) var_14))) / (arr_3 [i_3 + 1])))));
                            var_26 = ((/* implicit */int) (-(1949233124U)));
                        }
                    }
                } 
            } 
        }
        for (signed char i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_10 = 3; i_10 < 17; i_10 += 3) 
            {
                var_27 = ((/* implicit */unsigned int) max((((arr_8 [i_10 + 1] [i_10 - 1] [i_10 - 2]) | (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (-439148218887967692LL))))));
                /* LoopNest 2 */
                for (signed char i_11 = 3; i_11 < 17; i_11 += 1) 
                {
                    for (long long int i_12 = 3; i_12 < 14; i_12 += 3) 
                    {
                        {
                            arr_39 [i_0] [i_0] [(unsigned char)6] [i_0] [i_9] [i_9] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_11)))) ? (((/* implicit */int) arr_38 [i_10 + 1] [i_12] [i_12] [i_12 - 1] [i_10 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) 4993739513370294486LL)) || (((/* implicit */_Bool) -1710553936670549210LL))))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_21 [i_0] [i_9] [i_0] [i_0] [i_0] [i_0] [i_9])) : (((/* implicit */int) arr_22 [i_0] [i_9]))))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_29 [i_10 - 1] [i_12] [8LL]), (arr_29 [i_10 - 1] [i_11] [i_12])))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) (signed char)-94)) ? (2239856397U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9] [i_9] [i_10] [i_11] [17U]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_0] [(signed char)17] [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119)))));
                            var_29 = ((/* implicit */unsigned char) max((var_5), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7635475943739472258LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7169394114364949535LL)))))))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) / ((+(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                arr_40 [i_9] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_12);
            }
            /* vectorizable */
            for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) 
            {
                var_31 = ((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_9] [i_13]))));
                /* LoopSeq 1 */
                for (unsigned int i_14 = 1; i_14 < 16; i_14 += 3) 
                {
                    var_32 = ((/* implicit */signed char) (-(((/* implicit */int) arr_30 [4U] [4U] [i_0]))));
                    var_33 = ((/* implicit */long long int) var_13);
                    arr_46 [i_13] [i_9] [(unsigned char)8] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_14] [i_14])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 517258890619933500LL)) ? (((/* implicit */int) arr_36 [i_0] [i_0] [i_9] [(signed char)3] [i_14 - 1] [i_14])) : (((/* implicit */int) arr_7 [i_0] [i_13] [i_13] [i_13]))))) : (var_11)));
                    var_34 = ((/* implicit */long long int) max((var_34), (((((/* implicit */long long int) var_15)) + (var_4)))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 1; i_15 < 16; i_15 += 3) 
                {
                    arr_49 [i_9] = ((/* implicit */signed char) var_13);
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 1; i_16 < 15; i_16 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) * (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_44 [i_0] [i_0] [i_0] [i_15] [i_16])))));
                        var_36 += ((/* implicit */unsigned int) var_2);
                        arr_53 [3U] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) var_8);
                    }
                    for (long long int i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        var_37 = ((((/* implicit */_Bool) 6059140902397447279LL)) ? (1903770883U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_9] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_9] [i_9]))) : (9223372036854775803LL)));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 18; i_18 += 3) 
                    {
                        var_39 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_26 [i_15 + 2] [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15 + 1]))));
                        arr_59 [i_0] [(signed char)6] [2U] [0U] [i_13] [i_15 + 2] [i_18] |= ((/* implicit */unsigned char) (-(var_16)));
                    }
                    var_40 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_15 + 1] [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_15 - 1] [i_15 + 2]))));
                    var_41 = ((/* implicit */signed char) var_9);
                }
            }
            /* LoopNest 2 */
            for (unsigned char i_19 = 0; i_19 < 18; i_19 += 1) 
            {
                for (unsigned int i_20 = 0; i_20 < 18; i_20 += 1) 
                {
                    {
                        var_42 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0])) ? (arr_1 [i_9]) : (arr_2 [i_20] [i_9] [i_9]))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2233447703131021495LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_0 [i_9] [i_19])))) < (min((517258890619933500LL), (((/* implicit */long long int) arr_58 [i_9] [i_9] [i_19] [i_19] [i_19]))))))))));
                        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((min((arr_11 [(unsigned char)8]), (arr_32 [i_0] [10U]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0] [i_0] [(unsigned char)2] [i_20] [(unsigned char)2] [i_19]))))) != ((((_Bool)1) ? (1827586191U) : (((/* implicit */unsigned int) -1)))))))));
                        var_44 += ((/* implicit */unsigned char) max((((/* implicit */int) (((!(((/* implicit */_Bool) 262140LL)))) || (((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (min((((((/* implicit */_Bool) arr_61 [i_0] [i_9] [i_19] [i_20])) ? (((/* implicit */int) arr_55 [i_0] [i_0] [i_9] [i_19] [8ULL])) : (((/* implicit */int) var_0)))), (((/* implicit */int) arr_55 [i_20] [(_Bool)1] [(unsigned char)8] [8U] [i_0]))))));
                    }
                } 
            } 
            var_45 = ((/* implicit */unsigned int) (+(var_5)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_21 = 1; i_21 < 15; i_21 += 1) 
            {
                var_46 = ((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_9])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0)))))));
                /* LoopNest 2 */
                for (signed char i_22 = 3; i_22 < 17; i_22 += 3) 
                {
                    for (long long int i_23 = 3; i_23 < 15; i_23 += 1) 
                    {
                        {
                            var_47 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -7641797326608544592LL)) || (((/* implicit */_Bool) arr_63 [(unsigned char)0] [(unsigned char)0] [i_21] [i_22])))))) - (((((/* implicit */_Bool) var_15)) ? (var_10) : (var_10)))));
                            var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [8LL] [i_23] [i_23] [i_23 - 2] [i_23] [i_22 - 1])) ? (((((/* implicit */_Bool) 4294967295U)) ? (7912250369249758262LL) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_9] [i_21] [i_22 + 1] [i_23]))))) : (((((/* implicit */_Bool) var_5)) ? (517258890619933500LL) : (((/* implicit */long long int) var_11))))));
                            var_49 = ((/* implicit */unsigned char) ((arr_68 [i_0] [i_23] [i_21 + 3] [i_9]) >> (((/* implicit */int) arr_52 [i_23] [i_9] [i_21 + 3] [i_22 - 1]))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_24 = 0; i_24 < 18; i_24 += 1) 
            {
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 18; i_25 += 3) 
                {
                    for (unsigned long long int i_26 = 1; i_26 < 17; i_26 += 1) 
                    {
                        {
                            var_50 -= ((/* implicit */signed char) arr_1 [i_9]);
                            arr_82 [i_0] [i_9] [i_9] [i_24] [i_24] [i_25] [i_26] = ((/* implicit */signed char) (+(((/* implicit */int) arr_36 [i_26] [i_26 - 1] [i_26] [i_26] [i_26] [i_26]))));
                        }
                    } 
                } 
                var_51 = ((/* implicit */long long int) ((7641797326608544591LL) > (var_6)));
                arr_83 [i_0] [i_9] [i_24] [i_24] = ((/* implicit */long long int) ((arr_41 [i_24] [i_9] [i_0]) > (arr_41 [i_0] [i_9] [i_24])));
                arr_84 [i_9] [i_9] [i_0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_0]))) : (arr_8 [i_0] [i_0] [i_24])));
                /* LoopNest 2 */
                for (unsigned int i_27 = 1; i_27 < 16; i_27 += 3) 
                {
                    for (signed char i_28 = 0; i_28 < 18; i_28 += 3) 
                    {
                        {
                            var_52 += var_3;
                            arr_91 [17ULL] [i_9] [i_9] [i_27] = ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17253283767886758320ULL));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 1 */
        for (unsigned int i_29 = 0; i_29 < 18; i_29 += 3) 
        {
            arr_95 [i_0] = ((/* implicit */signed char) (~(((3380719851U) ^ (914247444U)))));
            var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_73 [i_29] [i_29] [i_0] [i_29] [i_29] [i_0])) ? ((-(7641797326608544591LL))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_41 [i_0] [(unsigned char)10] [i_29])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) > (((/* implicit */long long int) var_16)))))) ^ (max((((/* implicit */unsigned long long int) arr_45 [i_0] [i_29] [i_29] [i_0])), (arr_9 [i_29])))))));
            /* LoopNest 3 */
            for (unsigned int i_30 = 0; i_30 < 18; i_30 += 1) 
            {
                for (unsigned int i_31 = 1; i_31 < 17; i_31 += 3) 
                {
                    for (long long int i_32 = 0; i_32 < 18; i_32 += 1) 
                    {
                        {
                            var_54 = ((/* implicit */_Bool) max((var_54), (((/* implicit */_Bool) (+(((/* implicit */int) min((arr_97 [i_29] [i_29] [i_31 + 1] [i_31]), (((/* implicit */unsigned char) arr_105 [i_29] [i_30] [i_31 + 1] [3ULL] [i_32]))))))))));
                            var_55 = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
            } 
            arr_106 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_16)))) ? ((~(134184960U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) -1))))))))) & (((((/* implicit */_Bool) (-(-3171737123055780422LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_0] [(signed char)4] [i_0] [i_29] [8U] [i_29]))) : (arr_80 [i_29] [i_29] [i_0])))));
        }
        var_56 += ((/* implicit */signed char) (~(((unsigned long long int) (~(arr_54 [(signed char)0]))))));
        var_57 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_85 [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */long long int) ((/* implicit */int) arr_85 [i_0] [i_0] [i_0] [i_0] [i_0]))) & (var_6)))));
    }
    var_58 = ((/* implicit */unsigned int) max((var_58), (((/* implicit */unsigned int) ((((-1) + (2147483647))) >> (((-1LL) + (18LL))))))));
    /* LoopNest 2 */
    for (signed char i_33 = 0; i_33 < 20; i_33 += 3) 
    {
        for (unsigned char i_34 = 1; i_34 < 16; i_34 += 1) 
        {
            {
                var_59 ^= ((/* implicit */_Bool) var_8);
                var_60 += ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_109 [i_34 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_109 [i_34 + 1])))));
                var_61 = ((/* implicit */signed char) (+(min((((/* implicit */int) var_17)), (arr_113 [i_34] [i_34 + 4] [i_33])))));
                /* LoopNest 3 */
                for (unsigned int i_35 = 0; i_35 < 20; i_35 += 3) 
                {
                    for (int i_36 = 0; i_36 < 20; i_36 += 1) 
                    {
                        for (unsigned char i_37 = 0; i_37 < 20; i_37 += 1) 
                        {
                            {
                                arr_122 [i_36] [i_36] [i_35] [i_34 + 2] [i_36] = ((/* implicit */signed char) max((((2747943595914418320ULL) & (((((/* implicit */unsigned long long int) -5378138483674207171LL)) / (17346662743613490166ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_115 [i_33] [i_34 + 3])))))));
                                var_62 = ((/* implicit */unsigned char) max((var_62), (max((min((arr_117 [i_33] [i_34 + 3] [i_33] [i_36] [i_37] [i_33]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_112 [(signed char)14] [i_34] [i_33])) || (((/* implicit */_Bool) 3171737123055780421LL))))))), (var_1)))));
                            }
                        } 
                    } 
                } 
                var_63 += ((/* implicit */unsigned long long int) (+((((~(-7567488780461521082LL))) >> (((/* implicit */int) ((arr_119 [i_33] [i_33]) >= (arr_112 [i_33] [i_33] [i_34]))))))));
            }
        } 
    } 
}
