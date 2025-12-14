/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100855
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
    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 - 1])) != (arr_0 [i_0])));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_0 - 3] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((arr_4 [i_0] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))));
            var_22 = ((/* implicit */int) (signed char)-24);
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 8; i_3 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) (unsigned char)71);
                        var_24 = ((/* implicit */short) arr_3 [i_0]);
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))) - (arr_9 [i_0 - 1] [i_1] [i_2] [i_3]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))))))));
                    }
                } 
            } 
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                var_26 = ((/* implicit */short) arr_5 [i_0] [i_0] [i_5]);
                var_27 = ((/* implicit */int) var_4);
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 2])) ? (arr_12 [i_0 - 1]) : (arr_12 [i_0 - 3])));
                            var_29 = ((/* implicit */unsigned char) (signed char)-24);
                            var_30 = (unsigned char)107;
                            var_31 = ((/* implicit */unsigned int) arr_14 [i_5] [i_4] [i_5]);
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_0] [i_4] [i_6] [i_7]))))) ? (((int) -7952932890866674162LL)) : ((~(((/* implicit */int) arr_21 [i_0] [i_4] [i_5] [i_6])))))))));
                        }
                    } 
                } 
                var_33 ^= arr_15 [i_0] [i_0] [(signed char)8];
            }
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)36415))) ? ((-(arr_20 [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_13))))));
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6095747674958651620ULL)) ? (((/* implicit */int) arr_14 [i_9] [i_4] [i_0 - 2])) : (((/* implicit */int) (unsigned char)120))));
                    }
                } 
            } 
            var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (((_Bool)0) ? (-950189536) : (var_17)))) != (((((/* implicit */_Bool) (signed char)23)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [6U] [i_4])))))));
        }
    }
    /* vectorizable */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99))) != (13535880146185883075ULL)));
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                {
                    var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (signed char)26))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_32 [i_10] [i_11] [i_12])))))));
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) var_11))));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            {
                                var_40 = ((/* implicit */long long int) (_Bool)1);
                                var_41 = ((/* implicit */unsigned short) arr_40 [i_12] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]);
                                var_42 = ((/* implicit */signed char) arr_37 [i_10 - 1] [i_10 - 1] [i_10] [i_10]);
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) ((((/* implicit */int) arr_31 [i_10 - 1])) - (((/* implicit */int) arr_34 [i_10 - 1])))))));
                }
            } 
        } 
        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (unsigned char)81))));
        var_45 = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopSeq 1 */
        for (signed char i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            var_46 = ((/* implicit */short) 6095747674958651620ULL);
            var_47 = ((/* implicit */long long int) ((arr_40 [10U] [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1] [i_15] [i_15]) + (((/* implicit */unsigned long long int) arr_41 [i_10] [i_10] [i_10 - 1] [i_15] [i_15]))));
            var_48 ^= ((/* implicit */unsigned short) arr_40 [(unsigned char)6] [i_10 - 1] [i_10] [i_15] [i_15] [i_15] [i_15]);
        }
    }
    /* LoopNest 3 */
    for (short i_16 = 0; i_16 < 13; i_16 += 2) 
    {
        for (unsigned char i_17 = 0; i_17 < 13; i_17 += 3) 
        {
            for (long long int i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_19 = 0; i_19 < 13; i_19 += 4) 
                    {
                        var_49 = ((/* implicit */unsigned int) ((_Bool) 1030527665));
                        /* LoopSeq 2 */
                        for (unsigned int i_20 = 0; i_20 < 13; i_20 += 4) 
                        {
                            var_50 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((arr_30 [i_16]), (((/* implicit */unsigned short) arr_51 [i_16]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))) : (arr_40 [i_19] [i_17] [i_18] [i_19] [i_19] [i_19] [i_20]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_31 [i_17])))))))));
                            var_51 = ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_16] [i_17] [i_17] [i_20])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) * (((((/* implicit */int) (unsigned short)65535)) / (-363359250)))))) : (((long long int) arr_48 [i_16]))));
                        }
                        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                        {
                            var_52 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_19] [i_17]))) - (6889022576369406013ULL)));
                            var_53 = ((/* implicit */_Bool) ((min((max((arr_33 [i_16] [i_16] [i_16]), (((/* implicit */int) arr_38 [i_16] [i_19] [i_18] [i_16])))), (((/* implicit */int) (unsigned char)175)))) - (199040370)));
                            var_54 ^= ((/* implicit */long long int) arr_36 [i_21 - 1] [i_19] [i_17]);
                            var_55 = ((/* implicit */signed char) max((arr_59 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1]), (arr_59 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1])));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_22 = 1; i_22 < 11; i_22 += 2) /* same iter space */
                        {
                            var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3797436141363568376LL)) ? (((/* implicit */unsigned long long int) 753785075)) : (9625492375340336741ULL)));
                            var_57 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)130)) - (((/* implicit */int) arr_61 [i_22] [i_22] [i_16] [i_22] [i_16]))))) ? (((((/* implicit */_Bool) 363359260)) ? (arr_63 [i_16] [i_17] [i_22]) : (((/* implicit */unsigned int) arr_53 [i_16] [i_17] [i_18])))) : (max((((/* implicit */unsigned int) (unsigned char)185)), (22U)))))));
                        }
                        for (unsigned short i_23 = 1; i_23 < 11; i_23 += 2) /* same iter space */
                        {
                            var_58 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_59 [i_23 + 2] [i_23 - 1] [i_23 + 1] [i_23] [i_23] [i_23 + 1] [i_23])) != (((/* implicit */int) arr_59 [i_23 + 2] [i_23 - 1] [i_23 + 1] [i_23] [i_23 + 1] [i_23] [i_23]))))) != (((((/* implicit */_Bool) arr_59 [i_23 + 2] [i_23 - 1] [i_23 + 1] [i_23] [i_23] [i_23] [i_23])) ? (((/* implicit */int) arr_59 [i_23 + 2] [i_23 - 1] [i_23 + 1] [i_23 - 1] [i_23] [i_23] [i_23 - 1])) : (((/* implicit */int) arr_59 [i_23 + 2] [i_23 - 1] [i_23 + 1] [i_23 + 1] [i_23] [i_23 - 1] [i_23 + 1]))))));
                            var_59 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_59 [i_18] [i_18] [i_23] [i_23 + 1] [i_23] [i_23] [i_23]))));
                            var_60 = ((/* implicit */int) 13689555685984554265ULL);
                        }
                        for (unsigned short i_24 = 1; i_24 < 11; i_24 += 2) /* same iter space */
                        {
                            var_61 = ((/* implicit */unsigned char) arr_67 [i_16] [i_16] [i_17] [i_18] [i_18] [i_19] [i_24]);
                            var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) ((unsigned short) (signed char)-122)))));
                            var_63 = ((/* implicit */_Bool) var_8);
                            var_64 = arr_41 [i_16] [i_17] [i_18] [i_19] [i_24 + 2];
                        }
                    }
                    for (long long int i_25 = 2; i_25 < 11; i_25 += 1) 
                    {
                        var_65 = ((/* implicit */short) 6889022576369406013ULL);
                        var_66 = ((/* implicit */unsigned int) var_11);
                        var_67 = ((/* implicit */signed char) max((var_67), (((/* implicit */signed char) min((((/* implicit */int) ((var_5) != (-7175778843306893769LL)))), (0))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                    {
                        var_68 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)23)) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_48 [i_18])) != (((/* implicit */int) (unsigned char)59)))))) != ((+(arr_40 [i_16] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))))))));
                        var_69 = ((/* implicit */unsigned short) max((var_69), (((/* implicit */unsigned short) max((((/* implicit */long long int) (_Bool)1)), (-4917056024117109036LL))))));
                    }
                    for (unsigned int i_27 = 2; i_27 < 12; i_27 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_28 = 0; i_28 < 13; i_28 += 1) 
                        {
                            var_70 = ((/* implicit */short) (!(((/* implicit */_Bool) 6008780261718869921LL))));
                            var_71 &= ((/* implicit */unsigned int) var_11);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_29 = 1; i_29 < 10; i_29 += 1) 
                        {
                            var_72 |= ((/* implicit */short) ((((/* implicit */_Bool) 363359236)) ? (1U) : (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)171)) - (-363359250))), (((/* implicit */int) min(((unsigned char)197), (((/* implicit */unsigned char) (_Bool)1))))))))));
                            var_73 = ((/* implicit */_Bool) max((((int) (unsigned char)52)), (((/* implicit */int) arr_51 [i_27]))));
                        }
                        var_74 = ((/* implicit */unsigned char) max((((/* implicit */int) (((-(var_3))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_27 - 2] [i_27 - 2])))))), (((((/* implicit */int) arr_34 [i_27 - 2])) - (((/* implicit */int) (signed char)-110))))));
                    }
                    for (unsigned long long int i_30 = 1; i_30 < 10; i_30 += 4) 
                    {
                        var_75 = min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (363359250) : (((/* implicit */int) (signed char)56))))) : (arr_56 [i_30 + 1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((-1845148591) != (((/* implicit */int) arr_71 [i_30 + 1] [i_16] [i_16])))))))));
                        var_76 = ((/* implicit */long long int) arr_41 [i_16] [i_17] [i_18] [i_30 - 1] [i_17]);
                        var_77 = ((/* implicit */long long int) (-(((/* implicit */int) arr_48 [i_18]))));
                        var_78 = ((/* implicit */unsigned short) min((var_78), (((/* implicit */unsigned short) -1352557231))));
                    }
                }
            } 
        } 
    } 
    var_79 = ((/* implicit */short) (~(1684937026U)));
    /* LoopNest 2 */
    for (unsigned long long int i_31 = 0; i_31 < 21; i_31 += 4) 
    {
        for (int i_32 = 0; i_32 < 21; i_32 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_33 = 1; i_33 < 18; i_33 += 2) 
                {
                    var_80 = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (unsigned char)52))))), (arr_86 [i_31])))));
                    var_81 &= ((/* implicit */unsigned short) min((4260219733U), (((/* implicit */unsigned int) arr_89 [i_31] [i_32] [i_33]))));
                }
                var_82 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)56)) - (((/* implicit */int) arr_87 [i_31] [i_31] [i_32]))))) != (((((/* implicit */long long int) ((/* implicit */int) arr_88 [i_31] [i_32] [i_31]))) - (arr_86 [i_31])))));
                var_83 &= ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) ((-4037072639024200816LL) != (((/* implicit */long long int) ((/* implicit */int) arr_87 [i_31] [i_31] [i_32]))))))) != (arr_86 [i_31]))) ? (min((arr_84 [i_32] [i_31]), (((/* implicit */unsigned long long int) (signed char)-79)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_0)))) ? (min((arr_86 [i_32]), (((/* implicit */long long int) arr_85 [i_31] [i_31])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))))))));
            }
        } 
    } 
}
