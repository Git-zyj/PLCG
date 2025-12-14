/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103768
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_12 = (~(min((((/* implicit */long long int) max((var_0), (((/* implicit */unsigned int) var_1))))), (((long long int) 2228005496U)))));
                    var_13 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (unsigned short)40003)), (arr_5 [i_2] [i_1]))) | (max((((((/* implicit */_Bool) (unsigned char)56)) ? (2228005496U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)30)) && (((/* implicit */_Bool) (short)31301)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_14 -= ((/* implicit */unsigned long long int) arr_2 [i_3]);
        var_15 = ((/* implicit */unsigned int) ((max((arr_3 [i_3]), (((/* implicit */unsigned long long int) (+(2228005496U)))))) << (((((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_5 [16] [i_3]))))) << (((((((/* implicit */_Bool) 818136165U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))) : (var_5))) - (184LL))))) - (67108808)))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                {
                    arr_13 [i_3] [i_4] [i_3] = ((/* implicit */long long int) arr_0 [i_3]);
                    arr_14 [i_3] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_4] [i_4] [(unsigned char)14])) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (short)16501))))) ? (((/* implicit */unsigned long long int) max((arr_2 [i_3]), (((/* implicit */long long int) (short)126))))) : (((((/* implicit */unsigned long long int) arr_5 [i_5] [i_4])) + (var_8))))) == (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) arr_11 [i_3] [i_4] [i_4] [i_5])), (4973080507719641473LL))), (((/* implicit */long long int) 3109383742U)))))));
                    arr_15 [i_5] [i_5] [3] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((var_10) <= (((/* implicit */int) (_Bool)1))))), (max((arr_0 [i_4]), (((/* implicit */unsigned short) (_Bool)1))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */long long int) -2061532376);
                        var_17 = ((/* implicit */unsigned short) 14074372557546522065ULL);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */short) (unsigned char)139);
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) 818136165U)))) && (((/* implicit */_Bool) arr_4 [i_3] [i_4] [i_5] [i_5])))))));
                        arr_21 [i_7] [(unsigned char)0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */int) max(((unsigned short)59846), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_4] [i_5] [i_7])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [i_7] [i_4] [i_5] [i_7]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7]))) + (3239504365850826211LL)))))));
                    }
                    for (short i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (int i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) (unsigned short)0);
                            var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_23 [i_3] [i_4] [i_5] [i_9])), ((~(((((/* implicit */_Bool) (short)-31302)) ? (7313465897563348640ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31301)))))))));
                            var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) ((unsigned int) 258048U))))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) arr_19 [i_9] [i_8] [i_8] [i_3]))), (max((((/* implicit */unsigned int) var_7)), (var_0)))))) ? (((/* implicit */int) max(((short)-32760), (var_9)))) : (((/* implicit */int) ((unsigned char) arr_25 [i_3] [i_4] [i_5] [i_8] [i_9])))));
                        }
                        for (int i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) min((((unsigned int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)12719)))), (((/* implicit */unsigned int) ((unsigned char) arr_27 [i_3] [i_3] [i_3] [i_3] [i_3])))));
                            var_25 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-56)), (var_7))))) & (((((/* implicit */_Bool) (unsigned char)119)) ? (6881935493326117832LL) : (arr_24 [i_10]))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)60)), (arr_0 [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-31301)), ((unsigned short)12719))))) : ((~(818136184U))))))));
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 15; i_11 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) arr_2 [i_3]);
                            var_27 = ((/* implicit */unsigned long long int) ((((arr_10 [i_4]) + (2147483647))) << (((((arr_10 [i_5]) + (790823139))) - (26)))));
                            arr_33 [(signed char)12] [i_4] [i_5] [i_8] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (arr_4 [i_3] [i_5] [i_8] [(unsigned short)17]) : (((/* implicit */long long int) arr_5 [i_4] [i_5]))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_11])) << (((arr_30 [i_3] [(short)3] [i_5] [i_3] [i_8] [i_11] [i_11]) - (898365688U)))));
                        }
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
                        {
                            arr_37 [i_3] [i_4] [i_3] [i_12] = ((/* implicit */unsigned long long int) ((short) arr_7 [i_8]));
                            var_29 = ((/* implicit */short) ((((/* implicit */int) arr_34 [i_4])) & (((/* implicit */int) arr_34 [i_5]))));
                        }
                        var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_8 [i_3]), (arr_8 [i_4])))) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) max(((unsigned short)30720), (((/* implicit */unsigned short) arr_8 [i_3])))))));
                    }
                    var_31 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) ((3239504365850826209LL) < (((/* implicit */long long int) 1389469530))))), (((((/* implicit */unsigned int) 1423569838)) & (353335587U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)119)), (var_9)))) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (unsigned char)133)))))));
                }
            } 
        } 
        arr_38 [i_3] = ((((((((/* implicit */unsigned int) arr_36 [i_3] [i_3] [i_3] [i_3])) < (arr_19 [i_3] [6] [i_3] [i_3]))) || (((/* implicit */_Bool) 1088530093867940524LL)))) ? (arr_19 [i_3] [4ULL] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-58)) ? (arr_31 [i_3] [i_3] [i_3] [i_3] [i_3]) : (11947106245542171198ULL)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 4) 
        {
            for (unsigned char i_14 = 0; i_14 < 15; i_14 += 4) 
            {
                {
                    var_32 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) 14259645995384824919ULL))));
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 15; i_16 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((4114617880U) * (3060587699U)))))) - (((((/* implicit */_Bool) (+(var_6)))) ? ((+(3239504365850826211LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_3] [i_3] [i_3] [i_15] [i_14])) ? (((/* implicit */int) arr_41 [i_13] [i_14] [i_15])) : (((/* implicit */int) (unsigned short)0)))))))));
                                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (unsigned char)255))));
                                var_35 = ((/* implicit */int) (unsigned char)253);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_17 = 0; i_17 < 20; i_17 += 4) 
    {
        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (signed char)113))));
        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) var_6))));
        var_38 -= ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (unsigned char)0)), (3185521224U))), (((((/* implicit */_Bool) arr_2 [i_17])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4239822980U)) ? (((/* implicit */int) arr_51 [i_17] [(signed char)18])) : (((/* implicit */int) var_4))))) : ((-(1109446082U)))))));
        var_39 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((((/* implicit */int) arr_50 [i_17])) | (((/* implicit */int) var_3))))))) < (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (3185521215U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12719))))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_18 = 0; i_18 < 22; i_18 += 3) 
    {
        for (short i_19 = 0; i_19 < 22; i_19 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 22; i_20 += 3) 
                {
                    for (long long int i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        for (unsigned short i_22 = 0; i_22 < 22; i_22 += 4) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_18])) ? (((/* implicit */int) max(((unsigned short)12719), (((/* implicit */unsigned short) (unsigned char)27))))) : ((~(((/* implicit */int) var_7)))))))));
                                arr_66 [i_18] [(unsigned char)7] [i_20] [i_21] [i_22] [i_19] [i_18] = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_58 [i_18] [i_19])))), (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_58 [i_20] [i_21]))))));
                                var_41 = ((/* implicit */short) max((((/* implicit */long long int) -599745164)), (3883545517582330455LL)));
                                arr_67 [(short)0] [i_22] [i_18] [i_18] [i_19] [i_18] = ((/* implicit */short) arr_57 [i_18] [i_20] [i_18] [(short)0]);
                                arr_68 [i_18] [i_18] [i_21] = ((/* implicit */int) ((unsigned short) (unsigned short)29339));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 22; i_23 += 3) 
                {
                    for (signed char i_24 = 0; i_24 < 22; i_24 += 3) 
                    {
                        {
                            arr_75 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (max((((/* implicit */long long int) arr_5 [i_18] [i_19])), (var_2)))))) ? (min((((/* implicit */unsigned int) max((var_10), (((/* implicit */int) (_Bool)1))))), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_56 [i_19] [i_23] [i_24]) <= (((/* implicit */unsigned long long int) arr_53 [i_23]))))))));
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_18])) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) arr_72 [i_18] [i_18] [i_18] [i_18]))))) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (unsigned char)122))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_23] [i_18]))) : (arr_53 [i_18]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-1949112174) : (((/* implicit */int) (short)22429))))) ? (((/* implicit */int) min(((unsigned short)58555), (((/* implicit */unsigned short) arr_1 [i_18]))))) : (((/* implicit */int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
                        }
                    } 
                } 
                arr_76 [i_18] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)125))))), (((((/* implicit */long long int) 3109482845U)) | (arr_61 [i_19] [i_18])))));
                var_43 = ((((/* implicit */unsigned long long int) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-31301)))))) * (((((((/* implicit */_Bool) arr_55 [i_18] [i_18] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))) : (arr_70 [i_18]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_53 [i_18])) > (var_2))))))));
            }
        } 
    } 
}
