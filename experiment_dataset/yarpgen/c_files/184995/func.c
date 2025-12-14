/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184995
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)48488), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-11591)))))))) - (min((((/* implicit */int) var_5)), ((+(((/* implicit */int) (short)11590))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_0 + 1] [(signed char)4] [i_0] &= ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((((/* implicit */_Bool) (short)11590)) || (((/* implicit */_Bool) (short)11591)))), (((((/* implicit */_Bool) -2066758176)) && (((/* implicit */_Bool) (signed char)127))))))), ((-(((((/* implicit */_Bool) 9768889234764764907ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)17634))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_15 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-11592))));
                                var_15 &= ((/* implicit */signed char) var_8);
                                arr_16 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */short) ((long long int) max((arr_14 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 2]), (var_1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 7; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 8; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((var_1), ((unsigned char)163))))))))));
                                arr_24 [i_6] [i_5] [i_1] [i_1] [i_0 + 1] = ((/* implicit */_Bool) var_7);
                            }
                        } 
                    } 
                    arr_25 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11609))))))));
                    arr_26 [i_0] [i_1] = max((max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_19 [i_0] [i_0] [i_1] [i_0 + 1] [i_0])))), (var_11))), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [i_1])) > (((/* implicit */int) var_1))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 2) 
    {
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 14299540088051191152ULL))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_9 = 2; i_9 < 15; i_9 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_18 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((-1LL) + (32LL)))))) > (((var_13) ^ (arr_27 [i_9])))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_28 [i_9])) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_8) : (var_8)))) : (var_13)))));
                        arr_36 [i_8] [i_8] [i_9] [i_10] [i_9 + 1] [i_10] = ((/* implicit */unsigned char) 9768889234764764932ULL);
                    }
                    for (int i_11 = 3; i_11 < 17; i_11 += 3) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57266)) % (((/* implicit */int) (signed char)32))));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((arr_37 [i_7] [i_9 - 2] [i_9] [i_9] [i_11 + 1]) ? (14299540088051191152ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_11))))))));
                        var_22 = (+(-910926434));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_27 [i_7 + 4])))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) > (arr_29 [i_9 - 1] [i_9 + 3] [i_9 + 2])));
                        arr_42 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((arr_34 [i_7 + 4]) ? (arr_35 [i_7] [i_7 + 3]) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-11587)))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_48 [i_7] [i_8] [i_9] [i_13] [i_14] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (var_4))) : (arr_27 [i_7 + 4])));
                                arr_49 [i_7] [i_8] [i_9] [i_13] [i_14] [i_14] = ((/* implicit */unsigned int) var_7);
                            }
                        } 
                    } 
                    arr_50 [i_7] [i_8] [i_8] [i_9] = ((((/* implicit */unsigned long long int) arr_29 [i_7 + 1] [i_9 - 2] [i_9])) - (var_13));
                }
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned char)151), (((/* implicit */unsigned char) arr_34 [i_8]))))) && (((/* implicit */_Bool) ((unsigned short) (signed char)-27)))));
            }
        } 
    } 
    var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (8677854838944786708ULL)));
    /* LoopSeq 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_54 [i_15] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)68), (var_1)))))))));
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_53 [i_15] [i_15])), (arr_52 [i_15] [i_15])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11612))) ^ (var_4))) : (min((((/* implicit */unsigned long long int) arr_52 [i_15] [i_15])), (10745728835105913825ULL))))))))));
    }
    /* vectorizable */
    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_17 = 3; i_17 < 13; i_17 += 2) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    arr_64 [i_16] [i_16] [i_16] [i_16] &= ((/* implicit */short) (~(var_8)));
                    arr_65 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)188))));
                    arr_66 [i_18] [i_17] [i_16] = ((/* implicit */int) ((signed char) (_Bool)1));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_19 = 3; i_19 < 14; i_19 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_20 = 2; i_20 < 14; i_20 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_21 = 4; i_21 < 14; i_21 += 1) 
                {
                    arr_75 [i_16] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */unsigned long long int) -910926434)) : (8677854838944786696ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_30 [i_20] [i_21 - 1])) > (var_13)))) : ((~(((/* implicit */int) arr_28 [i_16]))))));
                    var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_58 [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_16] [i_19] [i_20] [i_21]))) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    var_29 = ((/* implicit */unsigned long long int) (-(arr_39 [i_16 - 1] [i_20] [i_20 - 1] [i_16 - 1])));
                    /* LoopSeq 1 */
                    for (long long int i_22 = 0; i_22 < 15; i_22 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) (short)-11591)) + (((arr_61 [i_16] [i_19] [i_20]) ? (((/* implicit */int) arr_44 [i_20 + 1] [i_19] [i_16] [i_21])) : (((/* implicit */int) (_Bool)1)))))))));
                        arr_78 [i_20] [i_22] &= ((/* implicit */signed char) ((arr_60 [i_20 - 1] [i_21 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))) : (var_8)));
                        var_31 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)73)))))));
                        var_32 = ((/* implicit */unsigned int) 910926428);
                        var_33 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (14796874582845599578ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)61901)))) : (((/* implicit */int) (unsigned char)184))));
                    }
                }
                for (unsigned int i_23 = 0; i_23 < 15; i_23 += 2) 
                {
                    arr_82 [i_16] [i_16] [i_19] [i_20] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57054))))))));
                    arr_83 [i_16] [i_16] [i_16] [i_16 - 1] = ((/* implicit */unsigned long long int) ((_Bool) arr_57 [i_16 - 1] [i_19 - 1]));
                    arr_84 [i_16 - 1] [i_19] [i_20] [i_20 + 1] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) -3869801953591080765LL))));
                }
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    var_34 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_16] [i_16 - 1] [i_16 - 1] [i_16]))) == (6246352354525336764ULL));
                    arr_87 [i_16] [i_20] [i_20] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11744263825504932557ULL)));
                    var_35 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_69 [i_16] [i_20] [i_24])) ? (((int) -5038850851350962161LL)) : (((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)46528))))));
                }
                arr_88 [i_16] [i_16 - 1] = ((/* implicit */unsigned long long int) var_5);
            }
            var_36 = ((/* implicit */unsigned long long int) (-(((int) (unsigned char)68))));
            var_37 = ((/* implicit */unsigned short) var_12);
        }
        /* LoopNest 3 */
        for (signed char i_25 = 0; i_25 < 15; i_25 += 4) 
        {
            for (int i_26 = 0; i_26 < 15; i_26 += 4) 
            {
                for (unsigned char i_27 = 1; i_27 < 14; i_27 += 2) 
                {
                    {
                        arr_98 [i_27] [i_27] [i_27] [i_16] = 11744263825504932557ULL;
                        var_38 = arr_67 [i_16] [i_26] [i_27 - 1];
                    }
                } 
            } 
        } 
        arr_99 [i_16] = ((/* implicit */_Bool) var_7);
        arr_100 [i_16] = ((/* implicit */unsigned char) (unsigned short)0);
    }
}
