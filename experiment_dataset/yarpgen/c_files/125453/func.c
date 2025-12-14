/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125453
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39407))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)2273)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */long long int) 1048566U)) : (-3336433769011446047LL))) : (((var_1) << (((((((/* implicit */int) (short)-1)) + (39))) - (38)))))))));
        var_15 -= ((/* implicit */unsigned int) ((unsigned char) 19));
        arr_5 [i_0] = min((((/* implicit */int) (unsigned char)124)), (625645160));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */int) (!(((((/* implicit */int) arr_1 [i_1])) > (((/* implicit */int) ((-625645160) >= (((/* implicit */int) arr_2 [i_1])))))))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)251), (((/* implicit */unsigned char) (_Bool)1))))) ? (((unsigned int) arr_0 [i_1])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)20530))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (signed char)111)))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_8 [i_1])))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-3336433769011446075LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_3)) ? (-625645160) : (((/* implicit */int) var_12)))) : ((~(((/* implicit */int) var_12)))))))))));
        var_18 &= ((/* implicit */unsigned long long int) arr_1 [i_1]);
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_12 [i_2] [i_2] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52012)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) arr_3 [i_2] [i_2]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)4))))) : ((((~(arr_7 [i_2] [i_2]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) arr_1 [(unsigned char)5])) : (var_11)))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_2))) && (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (13579453806804935528ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_2])), ((unsigned short)5944)))))))));
            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_12);
            arr_16 [i_2] = ((((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_2 [i_3])))) ? (((arr_7 [i_2] [i_2]) / (((/* implicit */unsigned long long int) -625645182)))) : (min((arr_7 [i_2] [i_3]), (arr_7 [17ULL] [i_3]))));
            var_20 = ((/* implicit */signed char) arr_6 [i_2] [i_2]);
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)72))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (4293918728U)))))))));
        }
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_4])), (var_3)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (arr_17 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (6684454646876789534ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) ((short) 11131246240223204646ULL))) : (((/* implicit */int) ((_Bool) 2))))))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max((arr_10 [i_2]), (((/* implicit */short) ((arr_18 [i_2] [i_4]) > (arr_18 [i_2] [i_2])))))))));
        }
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            arr_21 [2] [i_5] |= ((/* implicit */unsigned short) ((12) / (((/* implicit */int) (signed char)-10))));
            var_24 &= ((/* implicit */unsigned short) var_5);
        }
        var_25 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-22694))) != (9223372036854775807LL)));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (signed char i_7 = 1; i_7 < 23; i_7 += 4) 
            {
                {
                    arr_27 [i_2] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((unsigned int) (signed char)-24))))) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) -12)) : (var_0))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)72))) : (var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) var_12)) < (((/* implicit */int) (short)-28591))))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */short) 26);
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) var_13))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_7)))) ? (1048535U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7 - 1] [i_7 - 1]))))))));
                        }
                        for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            var_29 *= ((/* implicit */unsigned short) (((~(arr_25 [i_10] [i_6] [i_7 + 1]))) & (min((0ULL), (((/* implicit */unsigned long long int) (signed char)16))))));
                            var_30 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_6] [i_7] [i_7] [i_7 - 1] [i_7 - 1]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))));
                            var_31 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) -8856014307701648204LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3))));
                            arr_34 [i_2] [i_7] [i_7] [i_7] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_24 [i_6] [i_6])) ? (arr_26 [i_7]) : (((/* implicit */int) var_10))))))) ? (min((((/* implicit */unsigned long long int) (signed char)17)), (15ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((int) (signed char)-120)))))));
                        }
                        var_32 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_2] [i_6] [i_6] [i_6] [i_8])) ? (2147483647) : (((/* implicit */int) arr_31 [i_8] [i_6] [i_6] [i_8] [i_7 + 1])))))));
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((((/* implicit */int) arr_28 [i_7 - 1] [i_7 - 1] [i_2] [i_6])) > (((/* implicit */int) (_Bool)1)))) ? (((min((((/* implicit */unsigned int) var_5)), (3512732682U))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)34611))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))))));
                        var_34 = ((/* implicit */_Bool) ((((unsigned long long int) (signed char)-14)) << (((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)11)), (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_2] [i_2]))) : (min((((/* implicit */unsigned int) var_10)), (arr_23 [i_7]))))) - (4294943440U)))));
                        var_35 -= ((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned int) (unsigned short)45508)), (max((((/* implicit */unsigned int) arr_2 [i_2])), (arr_17 [i_2]))))));
                    }
                    for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_36 = (-((+(var_0))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
                        {
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_38 -= ((/* implicit */unsigned int) (unsigned char)78);
                        }
                        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_31 [i_7] [i_7 + 1] [(unsigned char)17] [i_11] [i_7 + 1])))) + ((+(((/* implicit */int) arr_0 [i_7 + 1]))))));
                            arr_44 [(_Bool)1] [i_7] [(unsigned short)15] [i_11] [i_13] = ((/* implicit */unsigned int) ((long long int) var_3));
                        }
                        for (short i_14 = 3; i_14 < 23; i_14 += 3) /* same iter space */
                        {
                            var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) (((+(((/* implicit */int) (unsigned char)32)))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_7 - 1] [i_7 - 1] [i_11] [i_14 - 2] [i_7 - 1] [i_6] [i_14])) && (((/* implicit */_Bool) arr_33 [i_7 - 1] [i_14] [i_14] [i_14 - 2] [i_14 + 1] [i_6] [i_14 - 3]))))))))));
                            var_41 = ((/* implicit */int) (-(((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_6]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)62))))) : (min((var_9), (var_9)))))));
                        }
                        for (short i_15 = 3; i_15 < 23; i_15 += 3) /* same iter space */
                        {
                            var_42 = ((/* implicit */int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)0))))))) != (((/* implicit */int) (signed char)-97))));
                            var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) var_8))));
                            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_33 [12LL] [(signed char)4] [i_7] [i_11] [i_11] [i_6] [i_15 - 2]))) - (((((/* implicit */int) var_10)) + (((/* implicit */int) var_12)))))))));
                            arr_50 [i_2] [i_6] [(unsigned char)11] [i_2] [i_7] = ((/* implicit */unsigned char) min((((arr_28 [i_7 + 1] [3ULL] [i_7 + 1] [i_7]) ? (((/* implicit */unsigned int) 610178440)) : (arr_47 [i_7 + 1] [i_6] [i_7 + 1] [i_2] [i_15]))), (((/* implicit */unsigned int) (short)0))));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_16 = 0; i_16 < 24; i_16 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 1; i_17 < 22; i_17 += 3) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    for (unsigned char i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) ((unsigned long long int) (-(min((195133086U), (((/* implicit */unsigned int) (short)7))))))))));
                            var_46 |= ((/* implicit */_Bool) arr_54 [i_2] [i_18] [i_18] [0U]);
                            arr_60 [i_19] [i_19] [i_19] [i_19] [i_17] [i_19] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 17976063722299402497ULL)))))))), (arr_49 [i_2] [i_17 - 1] [(unsigned char)14])));
                        }
                    } 
                } 
            } 
            var_47 = ((/* implicit */unsigned short) (((~(min((var_6), (((/* implicit */int) (_Bool)1)))))) / (((((/* implicit */int) arr_19 [i_2])) + (((/* implicit */int) var_10))))));
            arr_61 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_25 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) (unsigned char)255)) : ((-(((/* implicit */int) ((signed char) var_10)))))));
            /* LoopNest 2 */
            for (unsigned short i_20 = 0; i_20 < 24; i_20 += 4) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_22 = 0; i_22 < 24; i_22 += 1) 
                        {
                            var_48 = (~(0ULL));
                            arr_70 [i_2] [i_2] [i_2] [i_21] [(unsigned char)7] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)15)), (8191U)))) ? (((unsigned int) (~(((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_23 [i_16]) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)6))))))))))));
                            var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 4083852332U)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) ^ (((/* implicit */int) ((arr_17 [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))))));
                            var_50 = (((+(((/* implicit */int) (signed char)-97)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 3512732690U))))));
                        }
                        var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) (~(((195133086U) << (((((/* implicit */int) (unsigned char)65)) - (45))))))))));
                    }
                } 
            } 
        }
    }
    for (signed char i_23 = 0; i_23 < 23; i_23 += 4) 
    {
        var_52 ^= ((/* implicit */unsigned short) var_0);
        var_53 -= ((/* implicit */signed char) var_12);
        var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_23])) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_68 [i_23] [i_23] [i_23] [i_23] [i_23])) ? (((/* implicit */int) (unsigned char)70)) : (478709616)))))))));
    }
    var_55 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 195133086U)) ? (((/* implicit */int) (unsigned short)54163)) : (((/* implicit */int) (unsigned short)59899))));
}
