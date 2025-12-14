/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180992
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (short)768))));
        var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
    }
    for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            arr_9 [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 1]))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_9))))))) ? (((/* implicit */int) ((var_4) != (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)142)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52561))))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)54)), (max((((/* implicit */unsigned short) (short)5470)), (arr_4 [i_1 - 1]))))))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((((/* implicit */int) arr_4 [i_1 - 1])) ^ (((/* implicit */int) (unsigned char)130)))))))));
        }
        /* vectorizable */
        for (long long int i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            var_21 = ((/* implicit */short) ((arr_5 [i_3]) != (arr_6 [i_3])));
            arr_12 [i_1] [i_1] [i_3 + 2] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (unsigned short)56556)) << (((((/* implicit */int) (unsigned short)1022)) - (1010))))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_17))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 1) 
        {
            var_23 += ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1 + 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_4] [i_1]))))) : (((unsigned long long int) 1180145875U))));
            var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2260065088388744992LL)) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) (unsigned char)248))));
        }
        for (unsigned short i_5 = 1; i_5 < 18; i_5 += 2) 
        {
            arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) ((((((((/* implicit */long long int) arr_6 [(short)13])) ^ (((((/* implicit */_Bool) arr_5 [i_5])) ? (-5840175252600153352LL) : (((/* implicit */long long int) var_16)))))) + (9223372036854775807LL))) << (((29360128U) - (29360128U)))));
            var_25 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_5]))))) ? (min((4467570830351532032LL), (((/* implicit */long long int) 33546240U)))) : (4503599625273344LL));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 17; i_6 += 1) 
            {
                var_26 = ((/* implicit */short) (~(-3527675020498805921LL)));
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) var_8)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-16385))))) : (((unsigned int) arr_21 [i_1] [i_1] [i_1])))))));
            }
        }
        arr_22 [i_1] [i_1] &= ((/* implicit */unsigned int) var_9);
        arr_23 [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 2]))));
    }
    /* LoopSeq 2 */
    for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        arr_28 [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((-8796093022208LL) % (((/* implicit */long long int) 134215680U)))) + (9223372036854775807LL))) << (((max((-2260065088388744986LL), (((/* implicit */long long int) (unsigned short)38621)))) - (38621LL))))))));
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            var_28 = ((/* implicit */unsigned short) (-(arr_13 [i_8] [i_7])));
            arr_32 [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_31 [i_8] [i_7] [i_7])))) : (((((((/* implicit */_Bool) var_12)) ? (arr_24 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (short)-8630))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (33554430U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_7] [i_7] [i_8]))))))))));
        }
        arr_33 [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [6U]))) != (max((((/* implicit */long long int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) 4344263773141035013LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18483))) : (-4344263773141035017LL)))))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                {
                    arr_38 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_7] [i_9])))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        arr_41 [i_7] [i_7] [i_10] [i_7] = ((((/* implicit */_Bool) 4211011182U)) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (max((var_4), (((/* implicit */long long int) (unsigned char)142)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_34 [i_9])) : (var_5))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [3U] [i_7] [i_11]))) ^ (var_12)))))))));
                        arr_42 [i_7] = ((/* implicit */unsigned int) -4344263773141035023LL);
                        var_29 = arr_30 [i_7];
                        arr_43 [i_7] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_31 [i_11] [i_7] [i_7])), (arr_10 [i_10] [i_10])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 4; i_12 < 14; i_12 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1024))) : (83956111U)))) && (((/* implicit */_Bool) arr_4 [i_12 + 2]))));
                            arr_50 [i_7] [i_7] = ((/* implicit */long long int) arr_7 [i_10] [i_10]);
                            var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) 83956098U)) ? (83956111U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)17279)))))));
                        }
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) 3470592811U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-18503))) / (83956111U))) : (((unsigned int) 8795019280384LL))));
                        var_33 = ((/* implicit */short) -7243948466055702163LL);
                    }
                    for (unsigned short i_14 = 1; i_14 < 14; i_14 += 3) 
                    {
                        arr_54 [i_7] [15U] [i_7] [i_14] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) (signed char)55))))) ? (((/* implicit */long long int) ((4211011181U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9])))))) : (min((var_5), (((/* implicit */long long int) 83956091U))))))) ? (min((((((/* implicit */_Bool) arr_11 [i_10])) ? (var_5) : (((/* implicit */long long int) 4261412836U)))), (arr_10 [i_7] [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) var_17))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 1) 
                        {
                            arr_57 [i_15] [i_7] [i_10] [i_9] [i_7] [i_7] = ((/* implicit */long long int) ((short) var_8));
                            arr_58 [i_7] = ((/* implicit */unsigned int) ((long long int) ((4211011195U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)480))))));
                            var_34 += ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [18LL] [i_10]))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        }
                        for (short i_16 = 2; i_16 < 13; i_16 += 4) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (arr_16 [i_14] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18033))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_10] [i_16]))))))));
                            var_36 = ((/* implicit */long long int) 4265607160U);
                            var_37 -= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 83956121U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64998))) : (var_2))))))) << (((((/* implicit */int) ((signed char) arr_25 [i_9]))) - (17)))));
                        }
                        /* vectorizable */
                        for (short i_17 = 2; i_17 < 13; i_17 += 4) /* same iter space */
                        {
                            arr_64 [i_7] = ((/* implicit */short) 7243948466055702168LL);
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_61 [i_14 + 1] [i_17 + 3])) ? (((/* implicit */int) arr_61 [i_14 + 2] [i_17 + 3])) : (((/* implicit */int) arr_61 [i_14 - 1] [i_17 + 1]))));
                            var_39 = ((/* implicit */long long int) arr_59 [i_17 + 1] [i_14 + 2] [i_17 - 2] [i_14 + 2] [i_14 + 1] [i_14 - 1] [i_14 - 1]);
                        }
                        var_40 = ((/* implicit */short) arr_14 [i_7] [i_7]);
                    }
                    for (unsigned int i_18 = 4; i_18 < 14; i_18 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) (short)-10194);
                        arr_67 [i_7] [i_7] [i_10] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((unsigned char) 29360128U))) : (((/* implicit */int) (unsigned char)132))));
                    }
                    arr_68 [i_7] [i_7] [i_9] [i_7] = ((/* implicit */short) ((long long int) max((min((((/* implicit */long long int) var_0)), (var_7))), (var_5))));
                }
            } 
        } 
        var_42 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)133)) ? (-3150121541775200775LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74)))))), (((unsigned long long int) (short)-1857))));
    }
    for (short i_19 = 0; i_19 < 17; i_19 += 4) 
    {
        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)188)), (-3500192748554008105LL)))) != (min((((/* implicit */unsigned long long int) arr_21 [i_19] [i_19] [i_19])), (var_2)))))) : (((/* implicit */int) arr_8 [i_19] [i_19])))))));
        arr_73 [i_19] &= ((/* implicit */long long int) (short)10185);
    }
}
