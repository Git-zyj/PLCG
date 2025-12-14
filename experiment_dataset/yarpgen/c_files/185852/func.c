/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185852
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_11 -= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) 837827651)) ? (162784532515062251ULL) : (162784532515062251ULL))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (var_10)));
    }
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 4; i_3 < 11; i_3 += 1) 
            {
                arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2]))) * (arr_4 [i_1])))));
                arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_2);
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((short) var_4));
            }
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((max((var_8), (((/* implicit */unsigned long long int) var_2)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4])))));
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    var_13 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (+(arr_0 [i_2])))))));
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) min((((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned short)32640))))))), (max((arr_4 [i_5]), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((arr_6 [i_2] [i_2]) - (9160929877401560372ULL)))))))))))));
                    var_15 = ((/* implicit */unsigned char) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4]))) : (var_7))))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_4))));
                }
                arr_21 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(162784532515062261ULL)));
                var_17 = ((/* implicit */signed char) (+((~(var_0)))));
            }
            var_18 |= ((/* implicit */signed char) (((-(162784532515062251ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(arr_4 [i_2]))))))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_24 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_6])))))) * (((((/* implicit */_Bool) var_2)) ? (18283959541194489354ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
            arr_25 [i_1] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) max((arr_8 [i_1] [i_1] [i_1]), (arr_9 [i_1] [i_1] [i_1] [i_1]))))))));
            arr_26 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((unsigned char) arr_1 [i_1 - 1])))));
        }
        /* vectorizable */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_19 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (16851639968828422459ULL) : (162784532515062261ULL))))));
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                arr_33 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_0 [i_8])));
                /* LoopNest 2 */
                for (unsigned char i_9 = 1; i_9 < 12; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) 18283959541194489355ULL))));
                            arr_38 [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) var_9)))));
                            var_21 = ((/* implicit */unsigned short) var_10);
                            arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (3609451680163158821LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_37 [i_8]))))) : (var_0)));
                        }
                    } 
                } 
            }
            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_7 - 1] [i_7 - 1])) ? (arr_7 [i_1 - 1] [i_7 - 1] [i_7 - 1]) : (arr_7 [i_1 + 1] [i_7 - 1] [i_7 - 1])));
            arr_40 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)36430))));
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (-(((unsigned long long int) arr_3 [i_1])))))));
                arr_45 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_1);
            }
        }
        arr_46 [i_1] [i_1] = ((/* implicit */signed char) (!(arr_35 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
        arr_47 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((max((((/* implicit */unsigned long long int) arr_35 [i_1] [i_1] [i_1] [i_1])), (var_7))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10594)) ? (((/* implicit */int) (unsigned short)29105)) : (((/* implicit */int) (unsigned short)40640))))) : (((18283959541194489364ULL) * (((/* implicit */unsigned long long int) arr_29 [i_1] [i_1] [i_1]))))))));
    }
    for (long long int i_12 = 1; i_12 < 16; i_12 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((long long int) min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) ((signed char) var_9))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_13 = 0; i_13 < 18; i_13 += 1) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) + (var_0)))) ? (((((/* implicit */_Bool) arr_49 [i_12])) ? (arr_52 [i_12] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))))) : (((/* implicit */unsigned long long int) arr_49 [i_12]))));
            arr_53 [i_12] [i_12] = ((((/* implicit */_Bool) arr_50 [i_12 - 1])) ? ((+(arr_51 [i_12] [i_12]))) : (((/* implicit */unsigned long long int) arr_49 [i_12 + 2])));
            var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)147))));
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 1; i_14 < 16; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_15])) << (((/* implicit */int) ((((/* implicit */int) (unsigned short)12288)) > (((/* implicit */int) arr_57 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))))));
                        var_28 = ((/* implicit */int) ((arr_58 [i_12 + 2] [i_13] [i_12 + 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        var_29 += (unsigned char)2;
                    }
                } 
            } 
        }
        for (signed char i_16 = 0; i_16 < 18; i_16 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_17 = 3; i_17 < 15; i_17 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_18 = 0; i_18 < 18; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) (unsigned short)36430);
                            var_31 &= ((/* implicit */long long int) arr_65 [i_12] [i_12]);
                            arr_69 [i_17] [i_17] = ((/* implicit */signed char) var_6);
                        }
                    } 
                } 
                var_32 |= ((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) var_5)))));
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)10584)) ? (162784532515062265ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
            for (signed char i_20 = 3; i_20 < 16; i_20 += 2) 
            {
                var_34 = ((/* implicit */signed char) max(((~(((unsigned long long int) 18283959541194489348ULL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) 11577714084382341335ULL))) : ((+(((/* implicit */int) var_4)))))))));
                var_35 = ((/* implicit */unsigned int) (-((-(max((var_8), (arr_58 [i_20] [i_20] [i_20])))))));
                var_36 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_66 [i_12] [i_12] [i_12] [i_12] [i_20 - 3])) ? (((/* implicit */int) arr_66 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1])) : (((/* implicit */int) (unsigned short)28666)))), (((/* implicit */int) min((arr_66 [i_12] [i_12 - 1] [i_12] [i_12] [i_12 - 1]), (arr_66 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 2] [i_12 + 2]))))));
                var_37 = ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_64 [i_12] [i_12] [i_20])))) | (((/* implicit */int) var_1))))) ? (((arr_55 [i_20] [i_20 + 1] [i_20 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))) : (max((var_8), (((/* implicit */unsigned long long int) (unsigned short)36443)))))) : (((((/* implicit */_Bool) (-(var_8)))) ? (max((((/* implicit */unsigned long long int) arr_60 [i_12] [i_12])), (arr_52 [i_12] [i_12] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_12] [i_12])) && (((/* implicit */_Bool) arr_58 [i_12] [i_12] [i_12])))))))));
            }
            for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 1) 
            {
                var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) var_0))));
                var_39 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)10594)) - (((/* implicit */int) (unsigned short)17)))), (((((/* implicit */int) arr_74 [i_12] [i_12 - 1] [i_12 + 1])) | (((/* implicit */int) arr_74 [i_12] [i_12] [i_12]))))));
            }
            arr_77 [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_76 [i_12 + 2] [i_12 + 2] [i_12] [i_12])) : (((/* implicit */int) arr_76 [i_12 + 1] [i_12 + 1] [i_12] [i_12])))), (((((/* implicit */int) var_6)) | (((/* implicit */int) arr_76 [i_12 - 1] [i_12 - 1] [i_12] [i_12]))))));
            var_40 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_55 [i_12] [i_12 + 2] [i_12 + 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((((var_7) & (194913271346567043ULL))), (min((var_10), (((/* implicit */unsigned long long int) arr_61 [i_16]))))))));
            arr_78 [i_12] [i_12] [i_12] = min((((long long int) arr_51 [i_12 + 2] [i_16])), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_73 [i_16] [i_16] [i_16])) <= (67108832ULL)))));
            var_41 += ((/* implicit */unsigned long long int) arr_61 [i_12]);
        }
    }
    var_42 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (var_7)))));
    var_43 = var_9;
    var_44 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_3)), (5319339117696140375ULL)));
    var_45 &= ((/* implicit */unsigned char) var_6);
}
