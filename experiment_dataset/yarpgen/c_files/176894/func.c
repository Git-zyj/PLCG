/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176894
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(var_4)));
        var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_3 = 1; i_3 < 9; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 6; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_12 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                            var_13 = ((/* implicit */_Bool) (+(0LL)));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)9771)) ? (6301232878708466345ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 1; i_7 < 8; i_7 += 4) 
                    {
                        {
                            var_15 += (~(((/* implicit */int) (!((_Bool)1)))));
                            arr_21 [i_1] [i_1] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
                            arr_22 [i_3] = (+(((/* implicit */int) var_5)));
                            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_10 [i_2] [i_2]) : (((/* implicit */int) var_2)))))));
                            var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 1269913662)) ? ((+(3654361731788036438ULL))) : ((-(16713517310371394646ULL)))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)9771))))) ? (((((/* implicit */_Bool) -1620648272)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3]))) : (arr_12 [i_1] [i_2] [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_3 [i_1] [i_1]))))));
                arr_23 [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (var_10)));
            }
            for (long long int i_8 = 2; i_8 < 9; i_8 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_9 = 2; i_9 < 9; i_9 += 1) 
                {
                    var_19 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(2919050417U)))) * (((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126)))))));
                    var_20 = ((signed char) (~(11LL)));
                    arr_30 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))) % (11LL))));
                }
                for (long long int i_10 = 1; i_10 < 8; i_10 += 2) 
                {
                    arr_33 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */long long int) var_4)) : ((~(var_10)))));
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_37 [i_2] [i_10] = ((/* implicit */unsigned long long int) ((long long int) arr_20 [i_8] [i_10 - 1] [i_11] [i_11] [i_11]));
                        arr_38 [i_1] [i_1] [i_1] [i_10] [i_10] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)15))));
                        arr_39 [i_11] [i_10] [i_10] [i_10] [i_2] [i_1] = ((/* implicit */int) ((((var_3) != (arr_25 [i_1] [i_8] [i_8] [i_8]))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)55767))))) : (((long long int) arr_27 [i_1] [i_1] [i_8] [i_10] [i_11]))));
                    }
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
                    {
                        arr_44 [i_1] [i_1] [i_1] [i_10] [i_10] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : ((~(((/* implicit */int) arr_11 [i_2] [i_10]))))));
                        arr_45 [i_1] [i_1] [i_1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_8 - 2] [i_10 + 1] [i_10]))) < (var_3)));
                        var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) 16798754012479073236ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (3654361731788036438ULL)))));
                    }
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46200)) + (((/* implicit */int) (signed char)126))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) : ((~(16713517310371394646ULL))))))));
                        arr_49 [i_1] [i_2] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_36 [i_8 + 1] [i_8] [i_8] [i_8] [i_8 - 1])));
                    }
                    arr_50 [i_1] [i_1] [i_10] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) var_0)))));
                    /* LoopSeq 1 */
                    for (int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((unsigned int) (signed char)-127)))));
                        arr_53 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((unsigned int) (+(var_1))));
                        arr_54 [i_10] = (!(((/* implicit */_Bool) (unsigned short)9779)));
                        var_24 = ((int) ((((/* implicit */_Bool) var_5)) ? (4294967274U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        arr_55 [i_1] [i_2] [i_1] [i_1] [i_10] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 6524609752210611484ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0))));
                    }
                }
                arr_56 [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned int) ((unsigned short) (_Bool)0));
            }
            for (long long int i_15 = 2; i_15 < 9; i_15 += 3) /* same iter space */
            {
                /* LoopSeq 4 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) % (((unsigned int) arr_48 [i_1] [i_2] [i_2] [i_15] [i_16] [i_1]))));
                    arr_64 [i_1] [i_1] [i_1] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)19257))));
                }
                for (unsigned short i_17 = 0; i_17 < 10; i_17 += 4) 
                {
                    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(2096640))))));
                    arr_67 [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) (+(942323046)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_1] [i_2] [i_15 - 1] [i_17]))) : (((unsigned long long int) arr_0 [i_1]))));
                    var_28 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_9))))));
                }
                for (unsigned short i_18 = 0; i_18 < 10; i_18 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        arr_73 [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((signed char) ((0) << (((-1LL) + (25LL))))));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1])) ? (var_1) : (((/* implicit */long long int) var_7))))) ? (((var_10) & (((/* implicit */long long int) arr_6 [i_1] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                        var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                    }
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_65 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1])))))));
                }
                for (signed char i_20 = 3; i_20 < 9; i_20 += 1) 
                {
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_68 [i_1] [i_1] [i_1]) ? (arr_71 [i_1] [i_1] [i_15] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-113)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_15] [i_1] [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) (signed char)-24)))))));
                    arr_76 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((int) 0ULL));
                    arr_77 [i_1] [i_1] [i_1] [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_51 [i_1] [i_1] [i_2] [i_15 - 1] [i_20 + 1])) ? (((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */long long int) 762385763U)) : (-637155484955809536LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)12359)))))));
                    arr_78 [i_20] [i_15] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)104))));
                }
                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_1] [i_2] [i_15] [i_15] [i_15])) ? (((/* implicit */int) arr_3 [i_1] [i_2])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((unsigned short) arr_61 [i_15] [i_15] [i_1] [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) -7320398287266782415LL)) ? (-530977392) : (((/* implicit */int) var_2))))));
            }
            arr_79 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_74 [i_1] [i_2] [i_2]))));
            arr_80 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_40 [i_1] [i_1] [i_1] [i_2] [i_2])))));
            var_34 = ((/* implicit */_Bool) ((signed char) (unsigned short)53177));
        }
        arr_81 [i_1] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)0))));
        arr_82 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)104)) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) arr_28 [i_1] [i_1] [i_1])))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_21 = 3; i_21 < 14; i_21 += 4) 
    {
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            {
                var_35 ^= ((/* implicit */short) ((((((/* implicit */int) (signed char)5)) << ((((~(arr_85 [i_21]))) - (51568620U))))) > ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))));
                /* LoopNest 2 */
                for (int i_23 = 2; i_23 < 15; i_23 += 4) 
                {
                    for (int i_24 = 2; i_24 < 15; i_24 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */int) ((unsigned long long int) (((+(var_1))) / (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-10425)), (var_3)))))));
                            var_37 |= (~(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned char)162)))))));
                            arr_92 [i_21] [i_23] |= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (var_8))));
                            var_38 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)93))));
                        }
                    } 
                } 
            }
        } 
    } 
}
