/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168734
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) 4042541362045208856LL)))));
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [(short)7]);
        var_15 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)40852)) ^ (((/* implicit */int) (unsigned char)184))))), (268435455ULL)));
        var_16 = ((/* implicit */_Bool) ((int) ((((4104601734U) % (arr_1 [i_0] [(_Bool)1]))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169))))));
        var_17 += ((((((/* implicit */unsigned long long int) (((_Bool)1) ? (var_12) : (((/* implicit */unsigned int) 0))))) ^ (((((/* implicit */_Bool) (unsigned char)54)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))))))) % (((/* implicit */unsigned long long int) var_8)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_0 [i_1])))))) | ((+(((/* implicit */int) arr_7 [i_2] [i_2]))))));
            arr_8 [i_1] [(short)13] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-119)))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 1; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-119)));
                        var_20 = ((/* implicit */unsigned char) ((long long int) (~(var_8))));
                        var_21 &= ((/* implicit */unsigned short) ((min((arr_1 [i_4 - 1] [i_4 + 1]), (((/* implicit */unsigned int) (unsigned char)195)))) > (((/* implicit */unsigned int) ((int) arr_12 [i_4 + 1])))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_5 = 1; i_5 < 16; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    for (short i_7 = 1; i_7 < 16; i_7 += 2) 
                    {
                        {
                            var_22 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1]))) == (11911146982043057836ULL));
                            var_23 = ((/* implicit */short) arr_5 [(unsigned char)12]);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-97)) ? (((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */unsigned int) var_11)), (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))) : (min((4000756878U), (((/* implicit */unsigned int) ((unsigned short) arr_19 [i_1])))))));
                            var_25 = ((/* implicit */signed char) ((long long int) min((((/* implicit */unsigned int) (unsigned short)24687)), (var_0))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_8 = 4; i_8 < 16; i_8 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) arr_23 [i_8 - 3] [i_8 - 4] [i_1]);
                var_27 -= ((/* implicit */int) ((arr_14 [i_1] [i_1] [i_1] [i_1]) == (arr_14 [i_1] [i_2] [i_8 - 3] [i_8 - 3])));
                var_28 = ((/* implicit */unsigned long long int) (+(arr_14 [i_8 - 4] [i_2] [i_1] [i_2])));
                var_29 = ((/* implicit */int) (-(549366399U)));
                /* LoopNest 2 */
                for (unsigned char i_9 = 3; i_9 < 15; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        {
                            arr_29 [i_2] [2LL] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_8 - 3] [i_9 - 2] [i_10]);
                            var_30 ^= ((/* implicit */signed char) 18446744073709551605ULL);
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    for (unsigned char i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        {
                            var_31 &= ((/* implicit */_Bool) ((short) (_Bool)1));
                            var_32 = (-((~(2086566296U))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */int) arr_10 [i_1] [i_11] [i_12] [i_12]);
                var_34 = arr_33 [i_12] [i_11] [i_12];
            }
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                arr_44 [(unsigned char)4] [(unsigned char)8] [i_11] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3582162005U)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (unsigned char)66))));
                /* LoopSeq 1 */
                for (unsigned int i_16 = 2; i_16 < 13; i_16 += 1) 
                {
                    var_35 *= ((/* implicit */unsigned short) (~(arr_17 [i_1] [i_11] [i_15 - 1])));
                    arr_47 [i_15] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */long long int) -1610937421)) : (-5448271588261551231LL))) == (((/* implicit */long long int) ((3745600896U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96))))))));
                    arr_48 [i_1] [i_1] [i_15 - 1] [i_16 - 2] = (-(((/* implicit */int) arr_22 [i_15] [i_15 - 1] [i_15 - 1] [i_16 - 2])));
                    var_36 = ((/* implicit */long long int) ((_Bool) (_Bool)1));
                }
            }
            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_1] [i_11] [i_1] [i_11])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_20 [(unsigned short)2]))) ^ (arr_43 [i_1] [6U] [6U]))) : (((/* implicit */long long int) ((unsigned int) var_5)))));
            var_38 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_11]))));
            var_39 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)51084))));
            var_40 &= ((/* implicit */short) ((((/* implicit */int) var_11)) / (((/* implicit */int) ((3981682391613819752LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))))))));
        }
        arr_49 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)30076)) == (-80548409))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40852)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_1] [i_1]))) : (549366397U)))) ? (arr_37 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -1LL))))))));
    }
    /* vectorizable */
    for (unsigned short i_17 = 1; i_17 < 8; i_17 += 4) 
    {
        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_17] [(_Bool)1] [(_Bool)1] [i_17 + 3])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96)))))) ? ((-(((/* implicit */int) (unsigned short)24694)))) : (((((/* implicit */int) (unsigned char)103)) | (((/* implicit */int) (unsigned char)141))))));
        var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_17 + 3]))));
        var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_27 [i_17] [i_17 + 3]) % (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_17])))))) || (((/* implicit */_Bool) (unsigned short)33361)))))));
    }
    /* vectorizable */
    for (unsigned int i_18 = 0; i_18 < 10; i_18 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_19 = 3; i_19 < 9; i_19 += 2) 
        {
            var_44 = ((/* implicit */unsigned short) ((3745600896U) << (((((/* implicit */int) ((unsigned short) 4294967295U))) - (65535)))));
            var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) var_1))));
        }
        /* LoopSeq 1 */
        for (long long int i_20 = 0; i_20 < 10; i_20 += 4) 
        {
            var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23577)) ? (549366389U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35450)))))) ? (((/* implicit */int) arr_5 [i_18])) : (((((/* implicit */int) var_10)) + (((/* implicit */int) arr_23 [i_18] [i_18] [i_18])))))))));
            var_47 = ((/* implicit */short) arr_39 [i_18]);
            /* LoopSeq 1 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                /* LoopNest 2 */
                for (short i_22 = 0; i_22 < 10; i_22 += 2) 
                {
                    for (short i_23 = 2; i_23 < 8; i_23 += 4) 
                    {
                        {
                            var_48 = ((/* implicit */int) max((var_48), (arr_14 [i_18] [i_18] [i_18] [i_18])));
                            var_49 &= ((/* implicit */unsigned char) ((((long long int) var_6)) <= (((((/* implicit */_Bool) arr_51 [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (6014178145248955508LL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_24 = 1; i_24 < 8; i_24 += 1) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            var_50 *= ((/* implicit */_Bool) ((arr_32 [i_21] [i_21] [i_21]) | (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            var_51 = ((/* implicit */int) ((signed char) (-(384329375U))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (short i_26 = 1; i_26 < 9; i_26 += 2) 
                {
                    arr_80 [i_18] [i_20] [i_20] [1LL] [i_21] [i_26] = ((/* implicit */signed char) var_1);
                    var_52 &= ((/* implicit */short) (unsigned char)128);
                    var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3997317743U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_8)))) ? (arr_62 [(short)8] [i_20] [i_20]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)43939))))));
                    var_54 = ((/* implicit */unsigned char) arr_1 [(unsigned short)4] [11ULL]);
                    var_55 = ((/* implicit */unsigned short) (-(-554589352)));
                }
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    arr_83 [i_18] = ((/* implicit */_Bool) arr_77 [i_18] [i_20] [i_21] [i_20]);
                    var_56 = ((/* implicit */unsigned char) (_Bool)1);
                    var_57 -= ((/* implicit */short) (_Bool)1);
                    var_58 = ((/* implicit */short) arr_11 [i_18] [i_18] [i_18] [i_18]);
                    var_59 = ((/* implicit */unsigned int) var_10);
                }
                for (unsigned short i_28 = 0; i_28 < 10; i_28 += 1) 
                {
                    arr_87 [i_18] [i_18] [i_18] [(unsigned short)4] [i_21] [i_28] = ((/* implicit */long long int) ((signed char) ((unsigned char) (-2147483647 - 1))));
                    var_60 = ((/* implicit */int) arr_38 [i_18] [i_18]);
                    arr_88 [i_28] [i_28] [i_21] [i_28] [i_28] = ((/* implicit */_Bool) ((unsigned short) arr_12 [i_18]));
                    var_61 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)29960)) ? (2147483647) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33327)) && ((_Bool)1))))));
                }
                for (short i_29 = 0; i_29 < 10; i_29 += 4) 
                {
                    var_62 = ((/* implicit */long long int) var_3);
                    var_63 &= ((/* implicit */short) arr_84 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]);
                    var_64 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1708885804645028504LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3344005053322060411LL)));
                    arr_91 [(signed char)1] [(signed char)1] [(signed char)1] [(signed char)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 100703596U)) ? (549366389U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_65 = ((/* implicit */int) ((var_13) % (var_12)));
                }
            }
        }
        /* LoopSeq 1 */
        for (signed char i_30 = 1; i_30 < 9; i_30 += 4) 
        {
            arr_95 [i_18] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((3356486136423156896LL) == (-1708885804645028504LL))))) != (((((/* implicit */_Bool) (unsigned short)58315)) ? (2925782936U) : (((/* implicit */unsigned int) 80548408))))));
            var_66 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 80548408)) ? (((/* implicit */int) arr_51 [i_30 + 1])) : (((/* implicit */int) arr_51 [i_18]))));
        }
    }
    var_67 = ((/* implicit */short) min((var_2), (var_3)));
}
