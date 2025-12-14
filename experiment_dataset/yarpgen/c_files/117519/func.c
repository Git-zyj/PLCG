/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117519
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
    var_13 ^= ((/* implicit */short) (~(((/* implicit */int) var_3))));
    var_14 = ((/* implicit */unsigned char) min(((short)-32761), (((/* implicit */short) var_10))));
    var_15 = ((short) (+((-(10878454245397110397ULL)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) (_Bool)0);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_8)), (8715237864514218096ULL))))))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) max((8476950704453412620LL), (((/* implicit */long long int) var_0)))))))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)0)) ? (17344964436886638644ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_7))))) : (max((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), (((var_1) / (var_1)))))));
                var_20 = ((max((((/* implicit */unsigned long long int) (unsigned short)14)), (7884418561694780855ULL))) >> (((((/* implicit */int) var_5)) - (2765))));
                arr_9 [i_0] [7ULL] [i_0] [i_0] &= max((((/* implicit */int) (unsigned short)37907)), (532676608));
            }
            for (long long int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)37889))));
                            var_22 ^= ((/* implicit */unsigned long long int) (-((+((-(((/* implicit */int) (_Bool)1))))))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
                            var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (17344964436886638622ULL)))) ? (1791473855) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) >> (((var_9) - (2459585313575638793LL)))));
                            var_25 ^= ((((/* implicit */_Bool) 9041108586774560550ULL)) ? (18446744073709551488ULL) : (576460752303423456ULL));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 15; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        {
                            var_26 *= ((/* implicit */long long int) (-(((/* implicit */int) (!((_Bool)1))))));
                            var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) ((_Bool) 17344964436886638644ULL))) >= (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) 5345511006218615579LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((7940004099931757853LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((long long int) ((((/* implicit */int) (unsigned short)65535)) >> (((9223372036854775807LL) - (9223372036854775804LL)))))))))));
                var_29 = ((/* implicit */short) min((var_1), ((-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-4244782671254734724LL)))))));
            }
            for (long long int i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)65512)))))));
                    /* LoopSeq 3 */
                    for (short i_10 = 4; i_10 < 15; i_10 += 3) 
                    {
                        arr_31 [i_0] [i_8] [i_8] [i_8] [i_10 - 2] = ((/* implicit */int) (unsigned char)255);
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((/* implicit */unsigned long long int) 1789763069)) * (18446744073709551481ULL))))));
                        var_32 = ((/* implicit */_Bool) -1898055309);
                        arr_32 [i_8] [i_8] [i_8] [i_8] [(unsigned char)6] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_2))) * (((/* implicit */int) (_Bool)0))));
                    }
                    for (long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                        var_34 |= var_9;
                    }
                    for (unsigned char i_12 = 3; i_12 < 15; i_12 += 2) 
                    {
                        arr_37 [i_0] [i_9] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 127ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551612ULL))))) : (((/* implicit */int) var_3))));
                        var_35 = (+(var_4));
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)98)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)-23008))))))));
                        arr_38 [i_12] [i_12 - 3] [i_12 - 1] [i_12 - 1] [i_8] = ((/* implicit */_Bool) (-(232918985)));
                    }
                }
                for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    arr_43 [i_8] [i_8] [i_8] [i_13] = ((/* implicit */long long int) var_7);
                    arr_44 [i_0] [i_8] [i_0] [i_0] = ((((/* implicit */unsigned long long int) var_11)) + ((~(18446744073709551481ULL))));
                    var_37 = var_5;
                }
                /* LoopSeq 2 */
                for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 72057044282114048ULL))));
                    var_39 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) var_11))));
                    var_41 += ((/* implicit */_Bool) 142ULL);
                    /* LoopSeq 2 */
                    for (short i_15 = 1; i_15 < 15; i_15 += 3) 
                    {
                        var_42 ^= ((/* implicit */_Bool) ((max(((-(18374687029427437572ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))) * (((/* implicit */unsigned long long int) min((((long long int) var_0)), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)242)) * (((/* implicit */int) (unsigned char)86))))))))));
                        var_43 = max(((-((-(var_12))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))))));
                        arr_51 [i_8] [(unsigned char)9] = max((((/* implicit */long long int) (short)-3465)), (-9089287031758450017LL));
                    }
                    /* vectorizable */
                    for (unsigned char i_16 = 1; i_16 < 15; i_16 += 1) 
                    {
                        arr_54 [i_0] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */short) (+(((/* implicit */int) var_5))));
                        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        arr_55 [i_8] [i_1] [i_8] [i_14] [i_16 + 1] [i_8] [9ULL] = ((((/* implicit */_Bool) var_1)) ? (72057044282114043ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                        var_45 = ((/* implicit */int) min((var_45), ((+((~(-2134759624)))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_46 = ((/* implicit */long long int) (~(((/* implicit */int) (short)27662))));
                    var_47 = (((~(((/* implicit */int) (_Bool)0)))) & (((((/* implicit */int) (short)21260)) >> (((1952590359620905234LL) - (1952590359620905233LL))))));
                }
                var_48 = ((/* implicit */long long int) var_2);
                /* LoopSeq 3 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_61 [i_8] [i_8] [(_Bool)1] [i_8] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */long long int) var_11)) < (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-17568))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (short)17546)))))) : (-7283724356026227971LL)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_19 = 4; i_19 < 13; i_19 += 1) 
                    {
                        var_49 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                        arr_64 [i_8] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
                        arr_65 [i_8] = ((/* implicit */_Bool) (short)-1);
                        arr_66 [i_8] = ((((/* implicit */unsigned long long int) -1589174289)) * (7564702795138152132ULL));
                    }
                    var_50 += ((/* implicit */unsigned short) var_10);
                    var_51 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), ((~(((/* implicit */int) (_Bool)1))))));
                }
                /* vectorizable */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_71 [i_8] [i_8] [i_8] [i_8] = (short)-27659;
                    var_52 = ((/* implicit */unsigned long long int) (short)28069);
                }
                for (int i_21 = 3; i_21 < 14; i_21 += 1) 
                {
                    var_53 = ((/* implicit */_Bool) (unsigned char)26);
                    var_54 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)27657)) : (((/* implicit */int) var_3))));
                    var_55 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) 7564702795138152132ULL)) ? (var_12) : (var_12)))));
                }
            }
            /* LoopNest 3 */
            for (int i_22 = 4; i_22 < 14; i_22 += 3) 
            {
                for (unsigned long long int i_23 = 0; i_23 < 16; i_23 += 4) 
                {
                    for (int i_24 = 0; i_24 < 16; i_24 += 1) 
                    {
                        {
                            var_56 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                            arr_82 [i_0] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */short) ((((/* implicit */unsigned long long int) -7940004099931757871LL)) / (16140901064495857664ULL)));
                        }
                    } 
                } 
            } 
        }
        var_57 = ((/* implicit */unsigned char) (short)-8997);
        var_58 = ((/* implicit */int) (-(((((1152920405095219200LL) / (((/* implicit */long long int) ((/* implicit */int) var_0))))) / ((+(var_9)))))));
    }
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
    {
        var_59 = ((/* implicit */long long int) ((min((8296920474695517904ULL), (((/* implicit */unsigned long long int) 3425378399485762881LL)))) & (((/* implicit */unsigned long long int) min((var_9), (5698136536038462358LL))))));
        arr_85 [i_25] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255))));
        /* LoopNest 2 */
        for (unsigned long long int i_26 = 0; i_26 < 18; i_26 += 4) 
        {
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                {
                    arr_90 [17LL] [i_26] [i_27] [i_25] = ((/* implicit */short) (+(max((14375219009359260555ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_28 = 0; i_28 < 18; i_28 += 2) 
                    {
                        var_60 = ((/* implicit */int) (-(6617186665460480857ULL)));
                        var_61 = ((((/* implicit */int) var_3)) < (-12));
                        var_62 += ((/* implicit */short) ((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned char)250))));
                        /* LoopSeq 1 */
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                        {
                            arr_96 [i_25] [i_28] [i_25] |= ((/* implicit */_Bool) 4071525064350291079ULL);
                            var_63 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)161)) ? (-5092980987470140484LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)188)) << (((((/* implicit */int) (unsigned char)255)) - (249))))))));
                        }
                    }
                    arr_97 [i_25] = (+((+(((/* implicit */int) (unsigned short)10)))));
                }
            } 
        } 
    }
}
