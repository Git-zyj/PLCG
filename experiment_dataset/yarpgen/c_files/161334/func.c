/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161334
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
    var_10 = ((/* implicit */short) 6250234521429654912LL);
    var_11 = ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */int) ((long long int) ((unsigned long long int) arr_7 [i_0 + 1] [i_1] [i_2 + 2])));
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_1])))))));
                }
            } 
        } 
        var_13 -= ((/* implicit */short) var_9);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                arr_15 [i_3] [(unsigned char)2] [(unsigned char)2] [10] |= ((/* implicit */signed char) arr_1 [i_4] [13ULL]);
                var_14 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1])) | (arr_14 [i_0 + 1] [i_0] [i_0] [i_0 + 1])));
            }
            var_15 *= ((/* implicit */signed char) var_9);
        }
        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            var_16 = ((/* implicit */unsigned int) arr_3 [i_0]);
            var_17 *= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_5 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_5 - 1])))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_17 [(signed char)14] [i_5]))));
        }
        /* vectorizable */
        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 4) 
        {
            var_19 *= ((/* implicit */unsigned int) arr_7 [i_6 - 1] [i_6 - 1] [i_6 - 1]);
            /* LoopSeq 3 */
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) == (((arr_7 [i_0] [i_0] [i_0]) ? (arr_16 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                var_21 = ((/* implicit */signed char) ((arr_14 [i_0] [i_0] [i_0] [i_6 + 1]) <= (arr_14 [i_6 - 1] [i_0] [i_6 + 1] [i_6 + 1])));
                arr_23 [i_7] [i_0] [i_0 + 1] = ((/* implicit */signed char) ((arr_14 [(unsigned char)5] [i_0] [i_6] [i_6]) / (arr_14 [i_6] [i_0] [i_6] [i_6])));
                var_22 = ((/* implicit */signed char) ((arr_20 [i_0 - 1] [i_6 - 1]) ? (arr_22 [i_6 - 1] [i_6] [i_6] [i_0 + 1]) : (((unsigned int) arr_12 [i_0 - 1] [i_0]))));
            }
            for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 1) 
            {
                var_23 = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [(unsigned short)12] [i_6] [i_0])) : (((/* implicit */int) (short)6336)))) - (((int) var_9)));
                var_24 |= ((var_9) ^ (arr_21 [i_0 + 1] [i_0] [i_0] [i_8 - 1]));
            }
            for (int i_9 = 1; i_9 < 16; i_9 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        arr_37 [i_10] [i_10] [i_0] [i_0] [16ULL] [i_0] [i_10] |= ((arr_22 [i_9] [i_9] [i_9] [i_9]) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((arr_3 [i_0]) & (((/* implicit */int) var_5))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))) / (var_7)))));
                        var_26 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [i_0] [i_10] [i_6] [i_0])) <= (var_3))))));
                        var_28 = ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_0]))));
                    }
                    for (signed char i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        var_29 *= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0 - 1])) ^ (((/* implicit */int) arr_34 [i_0] [i_10] [i_10] [i_9] [i_0] [i_13])))));
                        var_30 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_11 [i_10] [i_6] [i_10] [i_9 - 1])))) ? ((+(((/* implicit */int) arr_41 [i_0] [i_6 + 1] [i_6 + 1] [i_10] [i_13])))) : (((/* implicit */int) arr_34 [i_6 - 1] [i_10] [i_9 - 1] [i_10] [i_13] [i_13]))));
                        var_31 ^= ((/* implicit */int) arr_41 [i_0] [i_6 - 1] [i_0] [i_0] [i_13]);
                    }
                    var_32 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_10]))) + (var_3)));
                }
                for (signed char i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    var_33 = ((/* implicit */signed char) ((var_8) ? (491456942) : (((/* implicit */int) arr_5 [i_0]))));
                    var_34 = ((/* implicit */_Bool) var_1);
                    var_35 = ((/* implicit */long long int) var_1);
                    /* LoopSeq 3 */
                    for (short i_15 = 2; i_15 < 14; i_15 += 3) 
                    {
                        var_36 = ((/* implicit */long long int) ((int) var_2));
                        var_37 |= ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0 - 1]);
                    }
                    for (unsigned int i_16 = 0; i_16 < 18; i_16 += 2) /* same iter space */
                    {
                        arr_51 [i_0] = ((/* implicit */signed char) ((unsigned char) arr_40 [i_0] [i_0 + 1] [(signed char)5] [i_0 - 1] [i_0 - 1]));
                        arr_52 [i_0] [5LL] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */long long int) arr_34 [6U] [i_0] [6U] [i_14] [(signed char)5] [i_14]);
                    }
                    for (unsigned int i_17 = 0; i_17 < 18; i_17 += 2) /* same iter space */
                    {
                        arr_57 [i_0] [i_6 + 1] [i_9] [i_0] [i_9] [i_0] = ((/* implicit */short) (-(arr_29 [i_6] [i_6 - 1] [i_6 - 1] [17U])));
                        var_38 *= ((/* implicit */signed char) ((((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) & (((/* implicit */int) ((((/* implicit */int) var_0)) <= (arr_17 [i_17] [i_17]))))));
                    }
                }
                for (unsigned char i_18 = 1; i_18 < 16; i_18 += 3) 
                {
                    var_39 = ((/* implicit */unsigned long long int) ((short) arr_4 [i_6] [i_18 + 1]));
                    var_40 = ((/* implicit */unsigned short) arr_35 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                    var_41 |= ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) var_8)))));
                    arr_60 [i_0 + 1] [i_6 + 1] [i_9 - 1] [i_0] [(_Bool)0] = ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) ((signed char) var_5))) + (11))));
                }
                var_42 *= ((/* implicit */unsigned int) arr_42 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_9 - 1]);
            }
        }
        for (unsigned short i_19 = 0; i_19 < 18; i_19 += 4) 
        {
            var_43 = ((/* implicit */signed char) arr_53 [i_0] [i_0] [i_0] [i_0] [i_19] [i_19]);
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_35 [i_0] [i_0] [17U] [i_0] [i_0] [i_0] [i_19])), (var_7))), (((/* implicit */unsigned int) arr_34 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1]))))) % (var_3)));
            var_45 = ((/* implicit */unsigned short) ((min((var_3), (((/* implicit */unsigned long long int) arr_28 [i_0] [i_0 - 1] [i_0 - 1] [i_0])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_19] [12U] [12U] [i_0 + 1])))));
            var_46 ^= ((/* implicit */_Bool) var_1);
        }
    }
    /* vectorizable */
    for (signed char i_20 = 0; i_20 < 15; i_20 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_21 = 4; i_21 < 14; i_21 += 3) 
        {
            for (int i_22 = 1; i_22 < 13; i_22 += 1) 
            {
                {
                    var_47 = ((/* implicit */int) arr_30 [i_22 + 1] [i_22] [i_22 + 1] [i_22 + 2] [i_20] [i_22 + 2]);
                    var_48 = ((/* implicit */unsigned short) arr_69 [i_20] [i_20] [i_21 - 3] [i_20]);
                    var_49 -= ((unsigned short) ((unsigned char) var_8));
                }
            } 
        } 
        var_50 ^= ((/* implicit */signed char) ((unsigned long long int) arr_65 [(signed char)10]));
        var_51 *= ((/* implicit */unsigned short) arr_67 [i_20] [6LL]);
        var_52 -= ((/* implicit */long long int) var_1);
        arr_73 [i_20] [i_20] = ((/* implicit */signed char) var_6);
    }
    for (unsigned char i_23 = 0; i_23 < 20; i_23 += 1) 
    {
        var_53 -= ((/* implicit */int) (unsigned char)236);
        /* LoopSeq 2 */
        for (unsigned char i_24 = 0; i_24 < 20; i_24 += 2) 
        {
            arr_78 [i_23] = ((/* implicit */unsigned char) min((arr_76 [i_23] [i_24] [i_23]), (((/* implicit */int) ((unsigned short) arr_76 [i_24] [i_23] [i_23])))));
            var_54 += ((/* implicit */signed char) var_9);
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_25 = 3; i_25 < 17; i_25 += 2) 
            {
                var_55 = ((/* implicit */unsigned short) (-2147483647 - 1));
                var_56 = ((arr_76 [i_25 + 2] [i_25 + 3] [i_25]) / (arr_76 [i_25 + 2] [i_25 + 2] [i_25]));
            }
            /* vectorizable */
            for (unsigned long long int i_26 = 0; i_26 < 20; i_26 += 3) 
            {
                arr_85 [i_24] [8ULL] [8ULL] = ((/* implicit */unsigned short) ((arr_79 [i_23] [i_23] [i_23] [(short)5]) == (((unsigned int) arr_76 [i_26] [i_24] [i_23]))));
                var_57 = ((/* implicit */short) 2256402023U);
                var_58 = ((/* implicit */unsigned long long int) ((int) (unsigned char)246));
                var_59 = -1094819447;
            }
            /* vectorizable */
            for (long long int i_27 = 0; i_27 < 20; i_27 += 3) 
            {
                var_60 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_4))));
                /* LoopSeq 1 */
                for (unsigned char i_28 = 0; i_28 < 20; i_28 += 1) 
                {
                    var_61 -= var_8;
                    /* LoopSeq 1 */
                    for (unsigned int i_29 = 0; i_29 < 20; i_29 += 2) 
                    {
                        var_62 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_76 [i_24] [i_27] [i_29])) ? (arr_88 [i_27] [i_24] [i_27]) : (arr_88 [i_23] [i_24] [i_27])));
                        var_63 = ((/* implicit */signed char) var_3);
                        var_64 -= ((/* implicit */_Bool) arr_92 [i_23] [i_24] [i_24] [i_28]);
                        var_65 = ((/* implicit */signed char) arr_91 [i_28] [i_27] [i_28] [i_27] [i_27] [i_23]);
                        arr_95 [i_29] [16] [i_27] [i_23] [i_27] [i_23] [i_23] = ((/* implicit */_Bool) arr_92 [i_23] [i_27] [i_28] [(unsigned char)2]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_30 = 3; i_30 < 17; i_30 += 3) 
                    {
                        var_66 ^= ((/* implicit */signed char) var_3);
                        var_67 = ((((/* implicit */_Bool) arr_93 [i_27] [i_30 + 1] [i_30 + 1] [i_30 + 1] [i_30 - 1])) ? (arr_96 [i_30] [i_30 - 3] [14ULL] [i_30 + 3] [i_30 - 1] [i_30 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                    }
                }
                var_68 = ((/* implicit */signed char) var_0);
            }
        }
        /* vectorizable */
        for (unsigned char i_31 = 1; i_31 < 18; i_31 += 2) 
        {
            var_69 -= ((/* implicit */long long int) arr_84 [i_31]);
            var_70 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_79 [i_23] [(short)6] [i_23] [i_23])) : (var_3))) % (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) arr_89 [i_23])) : (((/* implicit */int) var_0)))))));
            var_71 = ((/* implicit */signed char) (+(arr_76 [i_31 - 1] [(signed char)18] [i_31])));
            var_72 = ((/* implicit */int) arr_80 [i_23] [i_23] [i_31 + 1]);
            var_73 = ((/* implicit */unsigned long long int) ((arr_80 [i_31] [i_31] [i_23]) * (arr_80 [i_31 + 1] [15] [i_23])));
        }
    }
    var_74 = ((/* implicit */int) min((var_74), (((/* implicit */int) var_6))));
}
