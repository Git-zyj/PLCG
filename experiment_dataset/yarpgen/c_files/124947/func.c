/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124947
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) : (2606724617U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                    var_15 += ((/* implicit */short) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned short) var_8))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_3 = 3; i_3 < 12; i_3 += 2) 
        {
            arr_12 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)40318)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (unsigned char)158)) : (((((_Bool) 13091633708683812657ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            var_16 = ((/* implicit */_Bool) min((var_16), (((_Bool) ((_Bool) 8796092956672ULL)))));
            var_17 -= ((/* implicit */short) (-((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
        }
        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-7317))))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                var_20 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 3) 
                    {
                        {
                            var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((short) 3430012386U)))) ? (((/* implicit */int) ((unsigned char) 1665623819))) : (((/* implicit */int) ((unsigned short) arr_5 [i_0 - 1])))));
                            arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [5] = ((/* implicit */unsigned short) ((long long int) (signed char)-20));
                            var_22 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-12727))));
                            var_23 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2199023222784ULL)) ? (-1812099574) : (973708384)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    var_24 = ((/* implicit */short) (+((+(((/* implicit */int) (_Bool)1))))));
                    var_25 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21533)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0))))));
                    var_26 &= ((/* implicit */unsigned int) ((((_Bool) (_Bool)1)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)13900)) : (((/* implicit */int) var_6)))) : (((int) (_Bool)1))));
                    arr_28 [i_0] [i_4] [i_5] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_11 [i_0 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4)))) : ((~(((/* implicit */int) var_7))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))))) ? ((-(((/* implicit */int) (unsigned char)41)))) : ((+(((/* implicit */int) var_1)))))))));
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (short)18370)) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (short)20978))))))))));
                        var_29 = ((/* implicit */_Bool) ((short) (+(((/* implicit */int) var_10)))));
                    }
                    var_30 ^= ((/* implicit */unsigned short) ((short) (-((+(((/* implicit */int) arr_13 [(signed char)3] [i_9])))))));
                }
                var_31 &= ((/* implicit */int) ((short) (-(arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
            }
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        {
                            arr_42 [i_4] [i_13] [(_Bool)1] [i_4] [i_4] [i_11] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)231)))))));
                            var_32 = ((short) ((((/* implicit */_Bool) var_3)) ? (1251329621742460594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            arr_43 [i_11] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_24 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])))) : (((unsigned long long int) var_5))));
                            var_33 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_25 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]))))));
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)5481)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) var_8))))) : ((+(1251329621742460594ULL))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_35 = ((/* implicit */int) ((unsigned int) ((arr_46 [i_14]) ? (((/* implicit */int) ((unsigned char) arr_48 [i_14] [(unsigned short)11]))) : (((/* implicit */int) ((unsigned char) var_8))))));
            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_48 [i_14] [i_15]))) ? ((+(5264550314360650417ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)16949))))));
        }
        /* vectorizable */
        for (unsigned int i_16 = 3; i_16 < 19; i_16 += 3) 
        {
            var_37 -= ((/* implicit */unsigned short) ((long long int) ((_Bool) (signed char)-116)));
            var_38 = ((/* implicit */short) (-(var_12)));
        }
        for (short i_17 = 1; i_17 < 20; i_17 += 4) 
        {
            arr_57 [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(17195414451967091022ULL)))) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (unsigned short)21243)))))));
            var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_50 [i_17 + 1] [i_17 + 2]))))) ? (((/* implicit */int) ((short) (_Bool)0))) : (((/* implicit */int) ((unsigned short) arr_48 [i_14] [i_17 + 1])))));
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((((/* implicit */_Bool) (short)-27384)) ? (13182193759348901199ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            /* LoopNest 2 */
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
            {
                for (unsigned long long int i_19 = 2; i_19 < 18; i_19 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_20 = 0; i_20 < 22; i_20 += 3) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 13182193759348901199ULL))));
                            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_44 [(_Bool)1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42257)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) (_Bool)1)))))));
                        }
                        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_56 [i_14])) : (((/* implicit */int) arr_56 [i_17 + 2]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_63 [i_18] [i_18 - 1] [i_18 - 1] [i_18] [i_18 - 1])) : (((/* implicit */int) arr_63 [i_18] [i_18 - 1] [i_18] [i_18] [i_18 - 1])))) : ((-(((/* implicit */int) (short)-20978))))));
                        var_44 ^= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 18014398509481983ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14794))) : (11280797553143652052ULL))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (long long int i_21 = 1; i_21 < 21; i_21 += 1) 
        {
            var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((unsigned int) ((unsigned long long int) 12231340624273374988ULL))))));
            var_46 += ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_60 [i_21 + 1] [i_21 - 1] [i_21]))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_63 [(unsigned short)15] [i_21] [i_14] [i_21] [i_21 - 1])))) : ((-(16769024LL)))));
            var_47 -= ((/* implicit */signed char) (~((+(((/* implicit */int) ((_Bool) (unsigned short)23278)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_22 = 3; i_22 < 20; i_22 += 1) 
            {
                for (unsigned short i_23 = 0; i_23 < 22; i_23 += 2) 
                {
                    {
                        var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)0))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) ((short) (short)19000))))))));
                        var_49 &= ((/* implicit */int) ((unsigned char) 12231340624273374988ULL));
                        arr_72 [i_23] [i_23] &= ((/* implicit */short) ((unsigned char) ((unsigned short) (+((-9223372036854775807LL - 1LL))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_24 = 0; i_24 < 22; i_24 += 3) /* same iter space */
                        {
                            arr_76 [i_14] [i_21 - 1] [(_Bool)1] [i_14] [i_24] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_51 [i_14] [(_Bool)1]))));
                            arr_77 [i_14] [i_21 - 1] [i_22] [(unsigned char)16] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-22800)) ? (0ULL) : (0ULL)));
                            arr_78 [i_14] [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned short i_25 = 0; i_25 < 22; i_25 += 3) /* same iter space */
                        {
                            var_50 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (signed char)72)))));
                            arr_81 [i_14] [i_21 - 1] [i_22 - 1] [i_23] [i_14] = ((unsigned short) ((unsigned int) (_Bool)1));
                            var_51 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */int) ((unsigned short) (unsigned char)65))) : (((((/* implicit */_Bool) -773407690)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_61 [i_21 - 1] [i_21 + 1] [i_22 + 1]))))));
                            var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) (~(((((/* implicit */_Bool) -208401544)) ? (5264550314360650417ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14794))))))))));
                        }
                        for (unsigned short i_26 = 0; i_26 < 22; i_26 += 3) /* same iter space */
                        {
                            var_53 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_83 [i_14] [i_22 - 3] [i_22 - 3] [(unsigned char)9] [(unsigned char)9] [i_26] [(short)14])))));
                            var_54 &= ((/* implicit */short) (+((~(((((/* implicit */_Bool) arr_63 [i_14] [i_21] [i_22 + 2] [i_23] [i_26])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))))));
                        }
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
    {
        arr_89 [i_27] = ((/* implicit */unsigned short) ((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))));
        var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_50 [i_27] [i_27])) : (((/* implicit */int) arr_50 [i_27] [i_27]))));
        var_56 = ((/* implicit */int) (((_Bool)1) ? (-1505889310398888128LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    }
}
