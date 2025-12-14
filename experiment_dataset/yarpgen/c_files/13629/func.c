/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13629
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [(short)0] [i_0])) : (arr_1 [12ULL])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) + (arr_1 [i_0])))) : (max((((/* implicit */long long int) var_7)), (var_10))))))))));
        var_12 ^= ((/* implicit */unsigned long long int) var_8);
    }
    for (short i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        var_13 = ((/* implicit */short) max(((-(min((13077897870754890668ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))))), (((/* implicit */unsigned long long int) ((signed char) min((arr_3 [i_1]), (((/* implicit */short) var_3))))))));
        var_14 = ((/* implicit */unsigned int) var_5);
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_1 + 1])), (var_5))));
                    arr_8 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) arr_7 [i_1] [i_2] [i_3]);
                }
            } 
        } 
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */short) ((((((((/* implicit */_Bool) 8787363004885379453LL)) ? (5832461298450900067ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))))) != (((/* implicit */unsigned long long int) ((unsigned int) arr_17 [i_5] [9U] [i_6] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)174)))) : (arr_11 [i_4])));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_9))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_18 -= ((/* implicit */signed char) arr_16 [i_7] [(_Bool)1] [i_7]);
                arr_22 [i_7] [i_7] [i_7] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (arr_11 [i_7])))) < (((((/* implicit */_Bool) var_1)) ? (arr_17 [(_Bool)1] [i_5] [i_7] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))))))) ? (max((((/* implicit */unsigned long long int) max((var_7), ((short)26973)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20615))) ^ (16268888493056105234ULL))))) : (max((((/* implicit */unsigned long long int) (short)2622)), (11442898340817006832ULL)))));
            }
            var_19 = ((/* implicit */unsigned char) var_6);
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                for (signed char i_9 = 1; i_9 < 20; i_9 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_10 = 2; i_10 < 22; i_10 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((_Bool) var_9)))));
                            arr_31 [i_9] [i_5] [i_9] [i_9] [i_5] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (var_5))));
                        }
                        var_21 = ((/* implicit */short) max((((/* implicit */long long int) (short)-22211)), (3850372875138867864LL)));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_11 = 4; i_11 < 23; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    for (signed char i_13 = 2; i_13 < 21; i_13 += 1) 
                    {
                        {
                            arr_38 [(unsigned char)10] [i_5] [i_5] [i_12] &= ((/* implicit */unsigned long long int) var_8);
                            var_22 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_11] [i_11] [i_11 - 3] [i_11] [i_11])) ? (((((/* implicit */int) var_0)) / (var_9))) : (min((arr_13 [i_12] [i_5]), (((/* implicit */int) var_7))))))) / (arr_28 [i_13] [i_11]));
                            arr_39 [i_4] [i_5] [i_5] [i_11 + 1] [i_11] [i_12] [i_11] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)1023)) ? (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) 381794226U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7420)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_10))))));
                            arr_40 [i_4] [i_5] [i_11] [i_12] [i_11] = ((((/* implicit */_Bool) -376115945)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 11665457565638754612ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) arr_20 [i_11])) ? (((/* implicit */int) (unsigned char)88)) : (2147483647)))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_14 = 0; i_14 < 24; i_14 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_16 = 4; i_16 < 22; i_16 += 4) 
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) != (((/* implicit */long long int) ((((/* implicit */int) arr_45 [i_16] [i_15] [i_14])) + (((/* implicit */int) var_1))))))))) + (((((/* implicit */_Bool) 1503565198787189897ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4] [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_10 [i_4 - 1])) ? (((/* implicit */unsigned long long int) 1894910411)) : (8054433769344695664ULL)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 1; i_17 < 22; i_17 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) arr_28 [i_4] [i_14]);
                        var_25 = ((/* implicit */_Bool) 3242556517473984584ULL);
                        var_26 *= ((/* implicit */short) max((((/* implicit */long long int) ((unsigned int) arr_10 [i_4 - 1]))), (var_8)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (_Bool)1))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 13715798771355863050ULL)) && (((/* implicit */_Bool) arr_47 [14LL] [i_14])))) ? (((/* implicit */int) arr_47 [i_4 - 1] [i_15 + 2])) : (((((/* implicit */int) arr_52 [i_15] [i_15] [i_15] [i_14] [i_15])) - (((/* implicit */int) var_7)))))))));
                        var_29 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) var_2)))) - (((/* implicit */int) var_3))));
                    }
                }
                arr_56 [i_15] [i_15] [i_15] |= ((/* implicit */unsigned int) var_6);
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_30 ^= ((((/* implicit */long long int) ((/* implicit */int) var_0))) & (max((((/* implicit */long long int) max((1172958556U), (((/* implicit */unsigned int) arr_27 [i_4] [i_14] [i_14] [i_4]))))), (arr_29 [i_4] [i_14] [i_4] [i_4] [i_4 - 1]))));
                arr_59 [i_4] [i_4] = ((/* implicit */unsigned char) ((arr_50 [i_19] [19ULL] [(_Bool)1] [21LL] [i_14] [i_4]) - (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    arr_63 [i_20] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-122)) ? (709157644) : (((/* implicit */int) (short)-19696))));
                    arr_64 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_20] [i_4 - 1] = ((/* implicit */short) var_6);
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_43 [i_4] [20ULL] [i_19])) | (((/* implicit */int) (short)-1)))), (((((/* implicit */_Bool) (short)-12323)) ? (((/* implicit */int) arr_41 [i_4] [i_4])) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */int) max((var_1), (arr_14 [i_14] [i_4])))) % (((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_4] [i_4] [i_19] [i_14])))))))) : (((/* implicit */int) (short)-32186))));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((3344262388927607294LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150)))))) ? (max((((/* implicit */unsigned int) (signed char)124)), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_19 [i_4 - 1] [i_4 - 1] [i_14]))))));
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */short) arr_43 [i_4] [i_14] [i_20])), (var_7)))) ? (arr_42 [i_4 - 1] [i_14] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned long long int) arr_58 [i_4] [i_4] [i_4] [(short)23])), (var_5))))))))));
                }
                /* LoopSeq 2 */
                for (signed char i_21 = 0; i_21 < 24; i_21 += 3) 
                {
                    arr_67 [(unsigned short)6] [i_14] [(short)9] [i_14] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (((unsigned short) var_3)))))));
                    arr_68 [i_21] [i_19] [i_14] [i_4] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_6)) : (max((626906201), (((/* implicit */int) var_6)))))), (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (unsigned short)9839)))))));
                }
                for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 3) 
                {
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))), (max((arr_36 [i_4 - 1]), (((/* implicit */unsigned long long int) var_8))))))) || (((/* implicit */_Bool) var_6)))))));
                    arr_71 [i_22] [i_22] [i_22] [20ULL] [i_14] [i_22] = ((/* implicit */short) arr_61 [i_4] [(unsigned short)12] [(unsigned short)12] [i_22]);
                    arr_72 [i_4] [i_4 - 1] [i_22] = max((max((max((((/* implicit */unsigned long long int) var_8)), (var_5))), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) arr_16 [i_4 - 1] [i_14] [i_22])));
                    arr_73 [i_22] [i_22] [i_14] [i_14] [i_14] [i_22] = ((/* implicit */short) min((arr_65 [i_4] [i_4] [i_4 - 1]), (((/* implicit */unsigned long long int) (short)-7))));
                }
                arr_74 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] = ((/* implicit */short) max((0U), (((/* implicit */unsigned int) (unsigned short)28784))));
            }
            var_35 *= ((/* implicit */short) var_5);
        }
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (10678388516787884767ULL)));
    }
    for (short i_23 = 0; i_23 < 11; i_23 += 1) 
    {
        var_37 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_23] [i_23] [i_23] [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_23] [i_23] [i_23]))) : (arr_37 [i_23] [i_23] [i_23] [i_23] [i_23] [12LL] [i_23])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_23] [(short)4] [i_23] [(short)4] [i_23])) ? (var_5) : (0ULL))))))) : (var_9)));
        var_38 -= ((((/* implicit */_Bool) ((short) max((var_3), (var_0))))) ? (((/* implicit */unsigned long long int) ((int) arr_37 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]))) : (max((((((/* implicit */_Bool) arr_15 [4LL] [i_23] [i_23])) ? (739379003826456333ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_23] [i_23]))))), (min((arr_36 [i_23]), (((/* implicit */unsigned long long int) arr_4 [i_23] [i_23])))))));
    }
    var_39 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (31ULL));
}
