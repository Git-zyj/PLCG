/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184682
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
    var_15 = ((/* implicit */_Bool) var_14);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [2ULL]))) : (16892826645824891796ULL))) % (1553917427884659820ULL))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1])))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)126)) > (((/* implicit */int) (unsigned short)17593)))))))))))));
            arr_5 [9ULL] [i_0 + 1] [9ULL] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (arr_2 [i_0 + 1] [i_0 + 3] [i_0 + 1]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0))))));
            arr_6 [i_0] [2U] [i_1] = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)65535)) ^ (((((/* implicit */_Bool) 15986616213088398798ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)0)))))) ^ (((/* implicit */int) ((short) (-(var_13)))))));
            arr_7 [i_0] [i_0] = min((min((var_6), (((/* implicit */unsigned short) var_9)))), ((unsigned short)55742));
        }
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) ((unsigned char) ((14218454693357424493ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
            var_18 = (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3696))))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (~(((/* implicit */int) (short)24576))))))));
                var_20 = ((/* implicit */unsigned int) ((unsigned short) min((var_10), (((/* implicit */unsigned long long int) (+(33538048U)))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)511)) % (((/* implicit */int) (unsigned short)17593))));
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        arr_20 [i_0] [i_2] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)152));
                        var_22 = ((/* implicit */unsigned short) (-(((14218454693357424491ULL) * (var_4)))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        arr_24 [i_7] [i_5] [i_5] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_0] [i_2] [i_2] [i_4] [i_4] [i_5] [(unsigned short)9]))));
                        arr_25 [i_0 + 2] [i_0] [i_5] [i_0 + 2] [(unsigned char)8] = ((/* implicit */unsigned short) (-((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (12742561565204968972ULL)))))));
                        var_23 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        arr_28 [i_0] [i_5] [i_4] [i_4] [(unsigned char)3] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_13) * (var_10)))) ? (((/* implicit */int) max(((unsigned short)60161), (((/* implicit */unsigned short) arr_26 [i_0 + 2] [i_0 - 2] [(_Bool)1] [i_0 - 1] [i_0 + 1] [i_0]))))) : (((/* implicit */int) ((signed char) arr_26 [i_0 - 1] [i_0 + 1] [i_0] [(signed char)0] [i_0 - 2] [i_0 + 3])))));
                        arr_29 [(unsigned short)7] [(_Bool)1] [i_2] [i_5] [i_5] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(4228289380352127125ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12175))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 0U)) : (6085254901429031934ULL)))));
                        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) 13032427601207342124ULL)))));
                    }
                    arr_30 [i_0] [i_2] [(short)9] [i_5] [i_0] = ((/* implicit */unsigned short) ((((var_13) - (((/* implicit */unsigned long long int) 1342086457U)))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 2] [i_0 + 2])))))));
                }
                /* vectorizable */
                for (unsigned char i_9 = 2; i_9 < 10; i_9 += 4) 
                {
                    arr_33 [i_0] [i_2] [i_0] [(unsigned char)10] [i_9] [i_0 - 2] = ((/* implicit */unsigned char) var_0);
                    var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))) % (1032192U)));
                }
                for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    var_26 |= ((/* implicit */unsigned int) (unsigned short)521);
                    var_27 = ((/* implicit */unsigned char) arr_34 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        arr_38 [i_0] [i_2] [(unsigned char)3] [i_10] [(unsigned char)3] = min((var_13), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)79))))));
                        var_28 = ((/* implicit */unsigned long long int) 5U);
                    }
                    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        arr_43 [i_10] [i_10] [i_10] [i_10] [(unsigned char)0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
                        var_29 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) (_Bool)1)));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                        arr_44 [i_0 - 2] [i_0 - 2] [i_4] [i_10] [i_12] [i_0 - 2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)78))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41037)) % (((/* implicit */int) (signed char)-78))))) ? (arr_27 [i_0] [i_2] [(unsigned short)6] [i_10] [i_12]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16316)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)164)))))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        {
                            arr_50 [i_0] [i_2] [i_0] [i_13] [i_14] = ((/* implicit */unsigned long long int) var_2);
                            arr_51 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) ((unsigned long long int) max(((-(arr_35 [(short)5] [2U] [(unsigned char)3] [6U] [i_13] [i_14]))), (((/* implicit */unsigned long long int) (unsigned char)203)))));
                            arr_52 [i_0] [i_13] [i_13] = ((/* implicit */unsigned int) ((unsigned char) ((short) ((((/* implicit */int) arr_40 [i_0] [i_0] [i_4] [i_4] [i_14])) > (((/* implicit */int) (unsigned short)511))))));
                            var_31 = ((/* implicit */unsigned long long int) (-(((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (var_13))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
            {
                for (unsigned char i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_14)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_17 = 3; i_17 < 10; i_17 += 4) 
                        {
                            var_33 = ((/* implicit */short) var_3);
                            var_34 = ((/* implicit */unsigned short) ((4228289380352127125ULL) * (8786117843892931351ULL)));
                        }
                        arr_64 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((1666594073832700074ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) < (((/* implicit */unsigned long long int) (-(679168969U))))))) ^ (((/* implicit */int) (unsigned short)47933))));
                        var_35 = (!((!(((_Bool) var_6)))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_18 = 0; i_18 < 11; i_18 += 4) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (unsigned char)254))));
            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) 142989288169013248ULL)) ? (((/* implicit */int) ((signed char) var_5))) : ((+(((/* implicit */int) var_1))))));
            var_38 = (+(arr_65 [i_0 + 2] [i_0 + 2] [i_0 + 3]));
            /* LoopSeq 1 */
            for (unsigned short i_19 = 0; i_19 < 11; i_19 += 4) 
            {
                var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) < (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) var_11)))))));
                var_40 = ((/* implicit */signed char) arr_1 [i_18]);
                arr_71 [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (var_10)));
            }
            arr_72 [i_0 - 2] = ((((/* implicit */_Bool) ((3978195859U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_20 = 0; i_20 < 11; i_20 += 4) /* same iter space */
        {
            arr_77 [i_0] [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_74 [i_0 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2)));
            var_41 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_31 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)149))))) : (((((/* implicit */_Bool) 1544328356U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2))));
        }
        /* vectorizable */
        for (unsigned int i_21 = 0; i_21 < 11; i_21 += 4) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (unsigned short)20068)) ^ (((/* implicit */int) var_8)))));
            var_43 = ((/* implicit */unsigned short) ((unsigned long long int) var_11));
            /* LoopNest 2 */
            for (signed char i_22 = 2; i_22 < 7; i_22 += 4) 
            {
                for (unsigned long long int i_23 = 0; i_23 < 11; i_23 += 4) 
                {
                    {
                        arr_86 [(unsigned short)0] [(_Bool)1] [i_22 - 2] [i_21] [i_21] = 15056216593746668245ULL;
                        arr_87 [i_0] = ((/* implicit */signed char) (-(var_13)));
                        /* LoopSeq 3 */
                        for (short i_24 = 0; i_24 < 11; i_24 += 4) 
                        {
                            var_44 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) var_0)))));
                            arr_90 [i_22 + 4] [i_22 + 4] [i_21] = ((/* implicit */unsigned short) (-(arr_69 [i_0] [i_0] [i_0])));
                        }
                        for (signed char i_25 = 1; i_25 < 10; i_25 += 4) 
                        {
                            var_45 = ((/* implicit */short) (unsigned short)9322);
                            var_46 = ((/* implicit */signed char) var_12);
                        }
                        for (unsigned short i_26 = 0; i_26 < 11; i_26 += 4) 
                        {
                            arr_97 [(unsigned char)2] [i_21] [i_21] [(unsigned char)2] [(signed char)1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) var_11)))));
                            arr_98 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 2] = ((/* implicit */unsigned long long int) (unsigned short)20068);
                        }
                        arr_99 [i_23] [i_23] [(_Bool)1] [i_21] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [(signed char)10] [i_0] [i_0 - 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_22 - 1]))) : (2462701339U)));
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_27 = 0; i_27 < 13; i_27 += 4) 
    {
        arr_102 [i_27] = ((/* implicit */unsigned short) (short)-14769);
        /* LoopNest 3 */
        for (unsigned long long int i_28 = 0; i_28 < 13; i_28 += 4) 
        {
            for (unsigned long long int i_29 = 0; i_29 < 13; i_29 += 4) 
            {
                for (unsigned int i_30 = 1; i_30 < 12; i_30 += 4) 
                {
                    {
                        var_47 = ((/* implicit */short) (+(arr_101 [i_30 - 1] [i_30 + 1])));
                        arr_111 [i_30] = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (unsigned short)541)), (arr_109 [i_27] [i_30 + 1])))));
                        arr_112 [i_27] [(unsigned short)11] [i_27] [i_30] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_11)) | (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)75)), (var_10)))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((arr_110 [i_27] [i_27] [i_27] [2U] [i_27]), (var_1))))))));
                        var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)24417)))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)42990)) ? (((/* implicit */int) arr_107 [i_28])) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((short) 1576350655U)))))) : (var_4)));
                    }
                } 
            } 
        } 
    }
}
