/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162110
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)112))))) > (((long long int) var_1))))) << (((((unsigned int) ((((/* implicit */_Bool) -4086234276499885479LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_5))))) - (4294967285U)))));
        arr_3 [i_0] [i_0] |= ((/* implicit */long long int) var_6);
        var_15 = ((/* implicit */unsigned char) -1077694858131607549LL);
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)9959)) ? (((((/* implicit */int) (unsigned char)245)) << (((((/* implicit */int) (unsigned short)8201)) - (8181))))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9)))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 21; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_17 = ((/* implicit */long long int) (((-(((/* implicit */int) var_7)))) > (((/* implicit */int) ((((/* implicit */long long int) var_10)) >= (6669478063477146375LL))))));
            var_18 = ((/* implicit */int) min((var_18), ((-(((/* implicit */int) (unsigned short)8201))))));
            arr_10 [i_2] [i_1] [i_1] = ((/* implicit */short) (-((-(((/* implicit */int) (signed char)37))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 23; i_5 += 1) 
                        {
                            arr_18 [i_3] [i_2] [1LL] [1LL] [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (1077694858131607581LL)));
                            var_19 = ((/* implicit */int) (~(var_2)));
                            var_20 ^= ((/* implicit */short) (((~(-5101679641882302618LL))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) -4645973284683446955LL)) ? (var_10) : (var_10))))));
                            var_21 = var_12;
                            var_22 += ((/* implicit */signed char) var_2);
                        }
                        arr_19 [i_3] [i_2] [i_4] = ((/* implicit */long long int) ((1125899906842623LL) == (((long long int) var_9))));
                        arr_20 [i_3] [i_3] [i_4] = ((/* implicit */short) (-((~(var_11)))));
                    }
                } 
            } 
        }
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            arr_23 [i_6] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 1322777335)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-31))))));
            arr_24 [(unsigned char)15] [i_6] [i_1 + 3] = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
        }
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1077694858131607581LL)) ? (var_9) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)4)))))));
    }
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8201)) + (((/* implicit */int) var_1))))) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)9202)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))))))) ? ((-(-6669478063477146376LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)56441)) + (((((/* implicit */int) (unsigned char)112)) + (((/* implicit */int) (unsigned char)104)))))))));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (signed char i_11 = 1; i_11 < 10; i_11 += 4) 
                            {
                                var_25 = var_12;
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)133)) || (((/* implicit */_Bool) var_13))))) : ((-(((/* implicit */int) var_7))))))) : (var_2))))));
                                var_27 = ((/* implicit */short) 6669478063477146367LL);
                            }
                            for (int i_12 = 2; i_12 < 10; i_12 += 1) 
                            {
                                arr_44 [i_7] [(unsigned short)1] [i_12] [i_10] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((-6669478063477146379LL) < (((/* implicit */long long int) ((/* implicit */int) var_8))))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)122)) != (((/* implicit */int) ((1459314922047945641LL) >= (((/* implicit */long long int) var_13))))))))));
                                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8427)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967295U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (3399347883502097946LL)))))) ? (((/* implicit */int) ((((var_12) / (((/* implicit */long long int) ((/* implicit */int) (signed char)13))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1077694858131607556LL)) && (((/* implicit */_Bool) (short)32767))))))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1077694858131607573LL)) || (((/* implicit */_Bool) var_5))))))))));
                            }
                            for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                            {
                                arr_47 [i_7] [i_7] [i_8] [i_8] [i_10] [i_10] [i_13] = ((/* implicit */signed char) (~((~((~(((/* implicit */int) (short)-10372))))))));
                                var_29 = (~(((((/* implicit */_Bool) (unsigned char)116)) ? (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((int) (signed char)4))))));
                                arr_48 [i_8] [i_8] [(short)0] [i_10] [(signed char)4] = ((/* implicit */signed char) ((int) ((((((/* implicit */_Bool) 256470291U)) ? (516237163) : (((/* implicit */int) var_8)))) != (((/* implicit */int) (signed char)-4)))));
                            }
                            for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
                            {
                                arr_51 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33635)) | (((/* implicit */int) (short)-5246))))) ? (((((((/* implicit */int) (unsigned short)4398)) / (((/* implicit */int) var_0)))) / (((((/* implicit */_Bool) (short)-1009)) ? (((/* implicit */int) (short)-1478)) : (((/* implicit */int) (signed char)-1)))))) : (((/* implicit */int) var_6))));
                                var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (+(((/* implicit */int) (((-(-7160553370378906413LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) var_13))))))))))));
                            }
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (((~((~(((/* implicit */int) (signed char)0)))))) ^ ((+(((/* implicit */int) ((((/* implicit */int) (signed char)13)) > (((/* implicit */int) var_7))))))))))));
                            var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)106))))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) (unsigned char)167)))))) * (((((((/* implicit */int) (unsigned char)18)) << (((var_11) + (1506586429429368990LL))))) % (((/* implicit */int) ((((/* implicit */_Bool) (signed char)3)) || (((/* implicit */_Bool) (short)23735)))))))));
                            var_33 = ((/* implicit */short) ((((/* implicit */int) (signed char)-5)) >= (((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) (unsigned char)145)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-13892)) : (((/* implicit */int) (unsigned char)7))))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_15 = 0; i_15 < 12; i_15 += 1) 
                            {
                                arr_55 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (signed char)-11);
                                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((unsigned short) (unsigned short)26901)))));
                                var_35 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)30108)) ? (1482127981) : (((/* implicit */int) (unsigned short)12754))))));
                                arr_56 [i_15] [i_10] [i_9] [i_8] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)169))));
                                var_36 = var_12;
                            }
                            for (long long int i_16 = 0; i_16 < 12; i_16 += 1) 
                            {
                                var_37 = ((/* implicit */long long int) max((var_37), (((long long int) (unsigned char)255))));
                                arr_59 [i_16] [i_10] [i_9] [i_8] [i_7] = ((/* implicit */unsigned short) (short)5254);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_38 = ((/* implicit */long long int) ((unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-36))) ^ (var_11))) ^ (((((/* implicit */_Bool) var_6)) ? (var_11) : (-1LL))))));
    /* LoopNest 2 */
    for (unsigned char i_17 = 3; i_17 < 17; i_17 += 1) 
    {
        for (short i_18 = 1; i_18 < 15; i_18 += 1) 
        {
            {
                var_39 = (-(((/* implicit */int) (unsigned char)255)));
                var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((((/* implicit */int) var_5)) << (((((/* implicit */int) var_1)) - (152)))))))) / ((-(((((/* implicit */_Bool) (unsigned char)1)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))))));
                var_41 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-122)) + (2147483647))) >> (((((/* implicit */int) (short)5228)) - (5209)))))) ? (((((/* implicit */int) (unsigned char)252)) >> (((((/* implicit */int) var_6)) - (203))))) : (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (short)18686)))))))));
                /* LoopSeq 2 */
                for (long long int i_19 = 3; i_19 < 16; i_19 += 4) 
                {
                    var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)1))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-4667960965859924561LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1448)))))) || (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)110)) && (((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) var_8))))))))));
                    /* LoopSeq 2 */
                    for (signed char i_20 = 4; i_20 < 16; i_20 += 4) 
                    {
                        var_43 = ((/* implicit */unsigned int) (((((((~(362638712472513536LL))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))) : (var_2))) - (125LL))))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10))))));
                        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)61))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))))))) ? (((((/* implicit */_Bool) ((var_11) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88)))))) ? (((519506496754897330LL) / (var_2))) : (((((/* implicit */_Bool) (short)-24607)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_12))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)243)))))));
                    }
                    for (unsigned char i_21 = 0; i_21 < 18; i_21 += 2) 
                    {
                        arr_71 [i_17] [i_17 + 1] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((long long int) (-(var_9))));
                        arr_72 [i_17] [i_18] [i_19] [i_21] [i_17] [i_17 - 1] = ((/* implicit */long long int) 198113635U);
                        arr_73 [i_17] [i_19 + 1] [i_18] [i_17] = ((((/* implicit */_Bool) ((int) (signed char)19))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) (short)12043)))));
                        /* LoopSeq 4 */
                        for (signed char i_22 = 1; i_22 < 17; i_22 += 3) 
                        {
                            arr_77 [i_17] [i_18] [i_19] [i_19] [i_22] [i_17 + 1] [1LL] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56))) | (var_9)))));
                            var_45 = ((/* implicit */int) ((((/* implicit */_Bool) (+(-1063703052075648417LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)253))))) : ((-(((((/* implicit */_Bool) 2824109435U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)181))) : (519506496754897315LL)))))));
                        }
                        for (short i_23 = 0; i_23 < 18; i_23 += 1) 
                        {
                            var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) var_9))));
                            arr_81 [i_17] [i_17] [i_17] = (((+(519506496754897315LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))));
                        }
                        for (long long int i_24 = 0; i_24 < 18; i_24 += 1) /* same iter space */
                        {
                            arr_84 [i_17 - 2] [i_17 - 2] [i_17] [16LL] [i_24] = ((/* implicit */long long int) var_1);
                            arr_85 [i_17] [i_17] [i_17] [i_17] [i_17 - 1] = (+(3142340017972401172LL));
                        }
                        for (long long int i_25 = 0; i_25 < 18; i_25 += 1) /* same iter space */
                        {
                            var_47 = ((unsigned char) ((((/* implicit */_Bool) (+(var_12)))) ? (((-519506496754897341LL) ^ (5781100890006760797LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))) : (var_9))))));
                            var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) var_11))))))));
                        }
                        arr_89 [i_17] [i_18] [i_19 + 2] [i_21] [i_21] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (unsigned short)34102)))) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)219))) | (var_11)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) -2736189055981196331LL)) ? (((/* implicit */int) (unsigned short)59976)) : (((/* implicit */int) (unsigned char)74)))))) - (12366)))));
                    }
                    arr_90 [i_19 - 3] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) / (var_11)))) ? (((((/* implicit */_Bool) (short)29544)) ? (((var_2) - (((/* implicit */long long int) var_13)))) : ((-(-1LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(183191426679865280LL)))) && (((/* implicit */_Bool) ((short) 359981328U)))))))));
                }
                for (unsigned char i_26 = 0; i_26 < 18; i_26 += 4) 
                {
                    arr_93 [i_17] [i_18] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)52)) ? (var_10) : (var_9)))) ? (((/* implicit */long long int) 1143204624)) : ((~(-3172141187683102900LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_1)))))))));
                    arr_94 [i_26] [i_17] [i_17] [i_17 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_3)))) : ((-((~(((/* implicit */int) var_3))))))));
                }
            }
        } 
    } 
}
