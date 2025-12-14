/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141410
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) var_7))))) ? (max((((/* implicit */unsigned long long int) var_6)), (17897605920047190189ULL))) : (((/* implicit */unsigned long long int) (-(var_2))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(3)))) ? (((/* implicit */int) var_14)) : ((-(((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)34161), (((/* implicit */unsigned short) (unsigned char)7))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] |= ((/* implicit */short) (+(((((/* implicit */_Bool) 7956765223789945799ULL)) ? (((/* implicit */int) (signed char)-1)) : (838772999)))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            var_18 -= ((/* implicit */signed char) ((unsigned char) ((unsigned int) 685052189289683866ULL)));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17897605920047190186ULL)) ? ((+(var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (int i_3 = 4; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned int i_4 = 1; i_4 < 13; i_4 += 3) 
                    {
                        {
                            var_20 -= ((/* implicit */int) var_6);
                            arr_14 [i_0] [(unsigned char)2] [i_2] [i_2] [i_4 + 1] [i_4] = ((/* implicit */short) ((unsigned int) (_Bool)1));
                        }
                    } 
                } 
            } 
            arr_15 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 17897605920047190189ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (11248543969133885006ULL)));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_15) : (2140178697U)))) || (var_6)));
            arr_19 [0] [i_5] = ((/* implicit */unsigned int) ((unsigned char) 17897605920047190183ULL));
            arr_20 [i_5] = ((int) var_1);
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 1; i_7 < 12; i_7 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) 4294967295U)))));
                        arr_26 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_15) : (var_10)))) ? (var_3) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))));
                    }
                } 
            } 
        }
        for (int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) (-(var_0)));
            /* LoopSeq 3 */
            for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    arr_33 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) (-((~(((/* implicit */int) var_8))))));
                    arr_34 [i_0] = ((unsigned int) var_11);
                }
                arr_35 [i_9] [i_0] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
            }
            for (int i_11 = 2; i_11 < 14; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */int) var_9)) == (((/* implicit */int) (unsigned short)65531))))));
                            var_25 -= ((/* implicit */int) ((((/* implicit */_Bool) 838772995)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65521)))));
                            arr_42 [i_8] [i_11] [(unsigned short)9] [13] [4U] [4U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
                            var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) var_14))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 4; i_14 < 14; i_14 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_15 = 4; i_15 < 14; i_15 += 1) 
                    {
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)59)))))));
                        var_28 += ((/* implicit */unsigned char) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) (-(var_0)))) : ((~(17761691884419867756ULL)))));
                    }
                    for (unsigned int i_16 = 1; i_16 < 11; i_16 += 1) 
                    {
                        arr_51 [i_11] [i_8] [i_8] [i_8] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)207))) : (2154788598U)));
                    }
                    var_30 ^= ((/* implicit */unsigned long long int) (!(((var_13) == (1165870656)))));
                    /* LoopSeq 1 */
                    for (long long int i_17 = 0; i_17 < 15; i_17 += 3) 
                    {
                        arr_54 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))))) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)13447)) : (1341811497)))) : (var_3)));
                    }
                    arr_55 [i_0] [i_0] [i_11] [i_0] [i_14 - 1] = ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) var_6)))));
                }
                var_32 = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
                var_33 = ((/* implicit */int) (~(var_0)));
                var_34 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1764355220)) ? (((/* implicit */int) (short)0)) : (-838772977)))) ? (((((/* implicit */_Bool) var_0)) ? (234444017U) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_9))))))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_19 = 0; i_19 < 15; i_19 += 1) 
                {
                    arr_61 [i_18] = var_13;
                    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (+((-(2047U))))))));
                }
                /* LoopSeq 1 */
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_21 = 0; i_21 < 15; i_21 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (~((~(95095292))))))));
                        arr_66 [i_0] [i_8] [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))));
                    }
                    for (unsigned int i_22 = 4; i_22 < 14; i_22 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned int) ((int) (-(1764355220))));
                        var_38 = ((((/* implicit */_Bool) (signed char)-69)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_5)));
                        arr_70 [i_18] [i_20 - 1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (-356717563)))));
                    }
                    for (signed char i_23 = 1; i_23 < 14; i_23 += 4) 
                    {
                        arr_75 [i_0] [i_18] [i_18] [i_0] = ((/* implicit */int) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (3987567368225993532ULL)));
                        arr_76 [i_0] [i_8] [i_18] [i_20 - 1] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0)))) || (((/* implicit */_Bool) (+(-495101548))))));
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        arr_79 [i_0] [i_0] [i_0] [i_0] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-22387)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) 2288640355U))) ? (((4294967276U) >> (((-231093818) + (231093833))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    }
                    var_40 = ((/* implicit */int) max((var_40), (var_2)));
                }
                var_41 += ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (var_2)));
            }
            arr_80 [i_0] [1ULL] = (((!(((/* implicit */_Bool) (short)2040)))) ? (((/* implicit */unsigned int) -1764355221)) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_0))));
        }
    }
    /* vectorizable */
    for (unsigned short i_25 = 1; i_25 < 19; i_25 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_26 = 4; i_26 < 19; i_26 += 1) 
        {
            arr_87 [i_25] = ((/* implicit */long long int) (+((~(3121640462U)))));
            arr_88 [i_25] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_14))) ? (((((/* implicit */_Bool) var_13)) ? (4164125933U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_2)) : (var_15)))));
            var_42 = ((/* implicit */int) min((var_42), (((int) ((long long int) 3517839369U)))));
        }
        for (unsigned int i_27 = 0; i_27 < 20; i_27 += 1) 
        {
            arr_91 [i_25] [17] [i_25] = (~(((int) (short)-11370)));
            arr_92 [i_25] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) 1018506353)) : ((-(var_4)))));
        }
        for (unsigned int i_28 = 0; i_28 < 20; i_28 += 2) 
        {
            arr_96 [i_25] = ((/* implicit */_Bool) 3228471154U);
            arr_97 [i_28] [i_28] |= (-(((/* implicit */int) var_9)));
            arr_98 [i_25] [i_25] [i_28] = ((/* implicit */_Bool) ((var_10) << ((((-(((/* implicit */int) var_7)))) + (36670)))));
            var_43 = ((((/* implicit */_Bool) var_16)) ? (var_15) : ((-(277306542U))));
            arr_99 [i_25 + 1] [i_25] = ((/* implicit */int) (-(var_15)));
        }
        var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (var_13)))))));
    }
    for (short i_29 = 0; i_29 < 25; i_29 += 1) 
    {
        var_45 ^= ((/* implicit */int) max((((((/* implicit */_Bool) var_4)) ? (-1LL) : (-1LL))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_3)) ? (0U) : (var_15))))))));
        var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) var_8))));
        var_47 += ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((int) var_10))) ? (((unsigned int) (short)3705)) : (1563587684U))));
    }
    var_48 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (short)-15407))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) : (4294967295U)))))), (min((max((((/* implicit */long long int) var_4)), (3540516081377723868LL))), (((/* implicit */long long int) ((signed char) var_16)))))));
}
