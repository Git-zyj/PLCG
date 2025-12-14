/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166269
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
    var_15 = ((/* implicit */unsigned int) min((((unsigned char) max((((/* implicit */unsigned char) var_14)), (var_10)))), (((/* implicit */unsigned char) var_14))));
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (-(((/* implicit */int) var_5)))))));
    var_17 &= ((/* implicit */unsigned char) min((var_11), (var_11)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((short) (-(((/* implicit */int) arr_1 [i_0])))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_0 [i_0])))))));
        var_19 ^= ((((/* implicit */int) var_8)) > (((/* implicit */int) var_14)));
        arr_4 [i_0] [16LL] = ((/* implicit */long long int) arr_1 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)61895))));
        /* LoopSeq 3 */
        for (long long int i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), ((unsigned short)3641)));
                var_21 &= ((/* implicit */_Bool) ((signed char) min((max(((unsigned short)61894), ((unsigned short)61895))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_1] [i_3]))))))));
            }
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                var_22 ^= ((/* implicit */unsigned short) max((((unsigned int) ((arr_10 [i_1 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_2)))))) == (((((/* implicit */_Bool) (unsigned short)3640)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(short)9]))))))))));
                /* LoopSeq 2 */
                for (unsigned short i_5 = 1; i_5 < 12; i_5 += 4) 
                {
                    var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6375684134537782142LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-59))))) ? (((((/* implicit */int) arr_18 [i_1] [i_2] [i_4] [i_1])) - (((/* implicit */int) var_5)))) : (((/* implicit */int) (!((_Bool)0))))))) : (((unsigned long long int) (+(((/* implicit */int) var_10)))))));
                    arr_19 [i_1] [i_2 + 2] [i_1] [i_1] [i_4] [i_5 + 1] = ((/* implicit */unsigned int) ((long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)243)) || ((_Bool)1)))));
                }
                for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 1; i_7 < 12; i_7 += 4) 
                    {
                        arr_26 [i_1 + 1] [i_1 + 1] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned char)243)) / (((/* implicit */int) var_8))))));
                        arr_27 [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)16369)))), (((((/* implicit */_Bool) (unsigned char)12)) ? (2718571202U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)58)))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)243)))))))))));
                        var_25 = ((/* implicit */short) ((unsigned char) max((arr_8 [i_1 + 1] [i_4] [i_8]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [i_1] [i_2] [i_4] [i_1] [i_6] [(unsigned char)4]))))))));
                    }
                    var_26 ^= ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (unsigned char)255)))) * (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_9))) < (((/* implicit */int) var_14)))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    arr_32 [i_1] [i_2] [i_4] [i_1] [i_4] [i_9] = ((/* implicit */unsigned char) var_2);
                    arr_33 [i_1] [i_2] [(_Bool)1] [i_9] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_11)) != (((/* implicit */int) (unsigned char)243)))))) ? (((/* implicit */int) max((max((arr_0 [i_1]), (arr_0 [i_1]))), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)3733))))));
                }
                arr_34 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_14))));
            }
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((arr_24 [i_1 + 1] [(_Bool)1] [(_Bool)1] [i_1]) || (var_14))))) / (max((arr_8 [i_2 - 1] [i_1 + 1] [i_1 + 1]), (((/* implicit */long long int) (unsigned short)61895))))))) && (((/* implicit */_Bool) min((((/* implicit */int) var_11)), (((((/* implicit */int) arr_1 [(_Bool)0])) | (((/* implicit */int) (unsigned short)61895))))))))))));
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)58))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 + 1])) ? (9246705493646649234ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))))))));
        }
        for (signed char i_10 = 3; i_10 < 10; i_10 += 2) 
        {
            arr_37 [i_1 + 1] [i_1] [i_1] = 3627095910708582173LL;
            /* LoopSeq 2 */
            for (unsigned short i_11 = 2; i_11 < 11; i_11 += 4) 
            {
                var_29 += ((var_2) ? ((+(3641727730U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))));
                var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
                var_31 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_11)))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) var_12))));
                var_32 += ((/* implicit */_Bool) (-(((((((/* implicit */int) (short)-6899)) + (2147483647))) >> (((8799477936296210227LL) - (8799477936296210202LL)))))));
                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (+((+(((((/* implicit */_Bool) var_0)) ? (arr_15 [i_11] [i_10 + 3] [(short)8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50348))))))))))));
            }
            for (unsigned short i_12 = 2; i_12 < 12; i_12 += 2) 
            {
                arr_42 [i_1] [(_Bool)1] [i_12] [i_12 - 2] |= ((/* implicit */short) var_3);
                var_34 &= ((/* implicit */_Bool) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-31196)))))))));
                /* LoopSeq 3 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_35 &= ((/* implicit */unsigned char) ((((((/* implicit */int) ((arr_10 [i_12 - 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) | (((/* implicit */int) arr_23 [i_12])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1 + 1] [i_12] [i_12] [i_13]))) : (arr_44 [i_13] [i_12] [(unsigned short)0] [(short)11])))))))));
                    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((653239565U), (4238216528U)))) ? (((/* implicit */int) arr_43 [i_12] [i_1 + 1] [i_1 + 1] [i_13] [i_13])) : (((/* implicit */int) arr_0 [i_10 + 2])))), (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_18 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) var_6)))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)21711)))))))))))));
                    var_37 &= ((/* implicit */long long int) max((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_39 [i_1 + 1] [i_12] [i_13]))))))), ((-(((/* implicit */int) (unsigned short)61894))))));
                    arr_45 [i_1] = ((/* implicit */unsigned int) arr_40 [(unsigned short)6] [i_10]);
                    /* LoopSeq 1 */
                    for (short i_14 = 2; i_14 < 10; i_14 += 2) 
                    {
                        arr_48 [i_1] [i_12] [i_1 + 1] |= ((/* implicit */signed char) (!(((_Bool) (unsigned char)39))));
                        var_38 &= ((/* implicit */_Bool) max(((unsigned char)243), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-31196)) && (((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) (unsigned short)54120)))))))));
                        var_39 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)6898))) % (738043802962907837LL)));
                    }
                }
                /* vectorizable */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) < (((/* implicit */int) var_6))))))))));
                    arr_51 [6U] [i_10] [i_12] [(short)7] [i_1] [i_12] = ((/* implicit */signed char) ((arr_16 [i_1] [i_10 - 1] [i_12 - 2]) || (arr_16 [i_10] [i_10 + 1] [i_12 + 1])));
                    var_41 = ((/* implicit */unsigned short) arr_8 [(unsigned short)2] [i_10] [i_10]);
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    var_42 = ((/* implicit */short) (+((-(((/* implicit */int) ((1604104515857784184ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))))))))));
                    /* LoopSeq 1 */
                    for (short i_17 = 0; i_17 < 13; i_17 += 3) 
                    {
                        var_43 = ((/* implicit */_Bool) var_9);
                        arr_58 [i_1] [4LL] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_55 [i_1] [i_1] [(unsigned short)12] [i_12 - 2] [i_16] [i_1 + 1] [i_12])))))));
                        var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((((/* implicit */long long int) var_1)) / (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned char) (signed char)119))))) ? (((/* implicit */long long int) arr_9 [i_12] [i_12])) : (((long long int) var_8)))))))));
                        var_45 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (short)6898)) - (((/* implicit */int) (short)12679)))));
                    }
                    arr_59 [i_16] [i_1] = ((_Bool) max((((/* implicit */unsigned short) var_5)), (var_9)));
                }
                var_46 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), ((unsigned char)68)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_40 [i_12 + 1] [i_12])), (arr_18 [(signed char)4] [0U] [(signed char)4] [i_1])))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_12 - 1] [i_12] [(_Bool)1] [i_12])))))));
            }
            arr_60 [0ULL] [i_1] = ((/* implicit */signed char) ((short) arr_8 [i_1 + 1] [i_1 + 1] [(_Bool)1]));
            /* LoopSeq 1 */
            for (unsigned short i_18 = 0; i_18 < 13; i_18 += 4) 
            {
                var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((signed char) min(((signed char)-113), (arr_14 [i_10 - 1] [(_Bool)0] [i_10] [i_10])))))));
                var_48 = ((/* implicit */long long int) ((((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1 + 1] [i_1 + 1] [i_10 + 1]))))) ? (((/* implicit */int) min((arr_11 [i_1 + 1]), (arr_11 [i_1 + 1])))) : (max((((((/* implicit */_Bool) 5288871093831050589LL)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)150))))))));
            }
        }
        /* vectorizable */
        for (unsigned short i_19 = 0; i_19 < 13; i_19 += 2) 
        {
            var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)6898))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68))) : (arr_10 [i_1 + 1]))))));
            var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) ((arr_55 [i_19] [i_19] [i_19] [i_1 + 1] [i_1 + 1] [i_19] [i_1 + 1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_55 [i_1] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])))))));
            var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) (_Bool)1))));
            var_52 = ((/* implicit */unsigned short) var_4);
        }
        var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) min((((signed char) ((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((/* implicit */signed char) var_4)))))));
    }
    var_54 = ((/* implicit */_Bool) var_12);
}
