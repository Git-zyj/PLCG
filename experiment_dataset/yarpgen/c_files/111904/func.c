/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111904
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
    var_12 *= ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2382144113U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)30))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1912823173U)) ? (((/* implicit */unsigned long long int) 2382144111U)) : (12582912ULL)))) ? ((+(var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */unsigned int) (-((-(((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_3]))));
                        var_14 = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_2]);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2382144104U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (1912823177U))))));
                        var_16 += ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)38)), (1912823173U)));
                        arr_11 [i_0] [i_1] [i_2] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (signed char)84))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)35032)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_5])))) : (((/* implicit */int) arr_3 [i_0]))));
                        arr_14 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (+(arr_8 [i_0])));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            arr_17 [i_0] [i_0] [i_2] [i_5] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-27071))));
                            arr_18 [i_0] [i_2] [i_0] [i_6] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                        }
                        for (unsigned char i_7 = 3; i_7 < 16; i_7 += 3) 
                        {
                            arr_23 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (signed char)100);
                            arr_24 [i_0] [i_1] [i_2] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_5] [i_7])) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) arr_0 [i_0]))));
                            arr_25 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                        }
                    }
                    arr_26 [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (7003712927041452517ULL)))) ? (((((/* implicit */_Bool) ((1912823191U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)73)), (arr_12 [i_0] [i_1] [i_0])))) : (7003712927041452529ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_2 [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])))))))))));
                    var_18 -= ((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (short i_8 = 4; i_8 < 14; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((((((/* implicit */int) (signed char)-85)) < (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((~(11443031146668099105ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8 - 1] [i_8 - 2] [i_8 + 1] [i_8]))))) ^ (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (signed char)-18)))), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))))))));
                                arr_34 [i_8] [i_0] [i_2] [i_2] [i_0] [i_2] [i_9] = min((((/* implicit */long long int) min(((unsigned char)196), ((unsigned char)235)))), (min((((/* implicit */long long int) arr_13 [i_0] [i_1] [i_0] [i_1])), (((((/* implicit */_Bool) (short)-14600)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                            }
                        } 
                    } 
                }
                arr_35 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (signed char)95);
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 3; i_11 < 15; i_11 += 2) 
                    {
                        var_20 += ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221))) & (10847433633316088493ULL)))) ? ((-(arr_12 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)250))))))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_22 = ((/* implicit */short) (unsigned char)218);
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 18; i_13 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_13] [i_12]);
                            var_24 = ((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned char)10))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)68)) && (((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_1])))))) : (arr_2 [i_0] [i_0])));
                            var_26 = ((/* implicit */unsigned char) arr_3 [i_0]);
                        }
                        arr_46 [i_0] [i_0] [i_1] [i_12] = ((/* implicit */signed char) (-(((/* implicit */int) arr_20 [i_1] [i_1] [i_0] [i_12] [i_0] [i_1] [i_0]))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        var_27 = arr_22 [i_0] [i_1] [i_1] [i_1] [i_1] [i_10] [i_14];
                        arr_49 [i_0] [i_1] [i_10] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_10] [i_0] [i_10] [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221)))))));
                    }
                    var_28 -= ((/* implicit */short) 860376889);
                    arr_50 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(7170165423664027438ULL)));
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)120)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        for (signed char i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            {
                                var_30 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)202))));
                                var_31 *= ((/* implicit */short) arr_43 [i_0] [i_1] [i_1] [i_15]);
                                arr_55 [i_0] [i_1] [i_10] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))));
                                arr_56 [i_0] = (-(16337106695011230118ULL));
                            }
                        } 
                    } 
                }
                for (signed char i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
                {
                    var_32 *= ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) arr_36 [i_0] [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) arr_52 [i_0] [i_1] [i_0] [i_0]))));
                    var_34 = ((/* implicit */long long int) (+(min((((/* implicit */int) ((arr_32 [i_0] [i_17] [i_1] [i_1] [i_1] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146)))))), ((-(((/* implicit */int) arr_57 [i_0] [i_0] [i_0]))))))));
                }
                for (signed char i_18 = 0; i_18 < 18; i_18 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_63 [i_19] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-((-(max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)186))))))));
                        arr_64 [i_0] [i_1] [i_0] [i_0] [i_19] [i_19] = ((/* implicit */unsigned char) 3065905290U);
                        var_35 = arr_61 [i_0] [i_1] [i_18] [i_19] [i_19];
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (unsigned char)241)))) + (2147483647))) << (((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_19])) + (31371))) - (16))))))));
                        arr_65 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
                    }
                    for (signed char i_20 = 2; i_20 < 16; i_20 += 1) 
                    {
                        arr_69 [i_20] [i_20] [i_18] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_18] [i_18]))) / ((-(((((/* implicit */_Bool) (unsigned short)0)) ? (arr_41 [i_20 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_18] [i_1] [i_0])))))))));
                        arr_70 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_57 [i_0] [i_1] [i_18]);
                        var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((-(arr_51 [i_0] [i_0] [i_18] [i_0]))))))));
                    }
                    var_38 *= ((/* implicit */signed char) (~((-(arr_41 [i_0] [i_0])))));
                    arr_71 [i_0] [i_0] [i_18] [i_18] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_30 [i_0] [i_0] [i_1] [i_1] [i_0] [i_18])), (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_18] [i_0])) ? (((/* implicit */unsigned long long int) arr_39 [i_0] [i_1])) : (7599310440393463123ULL)))))));
                }
                for (unsigned char i_21 = 0; i_21 < 18; i_21 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_22 = 0; i_22 < 18; i_22 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_52 [i_1] [i_1] [i_21] [i_22])))))));
                        /* LoopSeq 1 */
                        for (long long int i_23 = 0; i_23 < 18; i_23 += 1) 
                        {
                            arr_81 [i_0] [i_22] [i_0] [i_1] [i_22] [i_21] = ((/* implicit */unsigned short) (~(arr_2 [i_0] [i_0])));
                            var_40 = ((/* implicit */unsigned int) arr_8 [i_0]);
                            arr_82 [i_0] [i_0] [i_1] [i_21] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_59 [i_0] [i_1] [i_1])))) ? ((+(4503599358935040ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_0] [i_1] [i_1])) ? (520172411498638998LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))))))));
                        }
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_25 = 2; i_25 < 16; i_25 += 2) 
                        {
                            var_41 ^= ((/* implicit */short) var_11);
                            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) (unsigned char)158))));
                            var_43 = ((/* implicit */signed char) (-((~(arr_51 [i_25 - 1] [i_0] [i_0] [i_25 + 2])))));
                            arr_88 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)152);
                        }
                        /* vectorizable */
                        for (unsigned short i_26 = 0; i_26 < 18; i_26 += 2) 
                        {
                            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_0] [i_1] [i_0] [i_24])) ? (((/* implicit */int) arr_37 [i_0] [i_0] [i_24] [i_26])) : (((/* implicit */int) (short)22581))));
                            arr_91 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)9))));
                            var_45 = ((/* implicit */signed char) (+((-(789255981066759347LL)))));
                            arr_92 [i_0] [i_0] [i_21] [i_24] [i_24] [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-14119)) ? (((/* implicit */int) arr_57 [i_0] [i_1] [i_26])) : (((/* implicit */int) arr_62 [i_0] [i_26]))))) / ((-(arr_86 [i_0] [i_1] [i_21] [i_24] [i_0])))));
                            var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) -9223372036854775803LL))));
                        }
                        /* vectorizable */
                        for (unsigned char i_27 = 0; i_27 < 18; i_27 += 3) 
                        {
                            var_47 &= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-4903))));
                            var_48 -= ((/* implicit */_Bool) 288160007407534080LL);
                        }
                        var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) (-((~((~(((/* implicit */int) (unsigned char)241)))))))))));
                        arr_95 [i_0] [i_1] [i_0] [i_24] = ((/* implicit */unsigned int) max(((((~(18446744073709551615ULL))) < (((/* implicit */unsigned long long int) arr_73 [i_0] [i_0] [i_1] [i_24])))), ((!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_0] [i_1] [i_24])), (9223372036854775802LL))))))));
                        var_50 = ((/* implicit */unsigned int) (short)4910);
                    }
                    arr_96 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((((/* implicit */int) arr_37 [i_0] [i_0] [i_21] [i_0])) <= (((/* implicit */int) (unsigned char)51)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (-9223372036854775781LL))), (((/* implicit */long long int) (+(arr_80 [i_0] [i_21] [i_0] [i_1] [i_0] [i_0] [i_0]))))));
                    arr_97 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_75 [i_0] [i_1] [i_0]);
                }
                var_51 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)149)) ^ (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
