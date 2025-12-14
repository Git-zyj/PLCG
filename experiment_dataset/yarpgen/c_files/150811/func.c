/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150811
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) max((arr_10 [i_0 + 1]), (arr_10 [i_0 + 1])))) : (((/* implicit */int) max((arr_9 [i_0 - 1] [(short)8] [i_0 + 1] [i_0 - 1]), ((short)10050))))));
                        var_11 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned char) arr_7 [i_0] [i_3])), (arr_3 [i_0] [i_1])))))));
                        arr_11 [i_0] [4ULL] [i_2] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned short) arr_4 [i_1] [i_1] [i_1]))) ? (max((13ULL), (((/* implicit */unsigned long long int) arr_9 [(_Bool)1] [i_1] [i_2] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)88), ((signed char)-90))))))), (((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) (signed char)15))))))));
                    }
                } 
            } 
        } 
        arr_12 [(unsigned char)1] &= ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 10; i_4 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */int) arr_8 [i_4] [i_4 + 1] [i_4] [i_4 + 2])) == (((/* implicit */int) (signed char)97)))))));
        arr_15 [i_4] = ((/* implicit */signed char) arr_4 [i_4] [i_4] [i_4]);
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    {
                        arr_24 [i_4] [i_4] [i_5] [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [(unsigned short)9]))));
                        var_13 *= ((/* implicit */long long int) arr_19 [i_6] [i_6]);
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_7])) ? (((/* implicit */int) arr_16 [i_4] [i_4 + 2])) : (arr_18 [i_4 + 2]))))));
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_19 [i_8] [i_4])))))));
                        }
                        arr_28 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_4 + 1])) ? (((((/* implicit */_Bool) arr_3 [i_5] [(short)9])) ? (((/* implicit */int) arr_20 [i_4] [i_5] [i_4])) : (((/* implicit */int) (unsigned char)11)))) : (((((/* implicit */_Bool) arr_23 [i_4] [i_7])) ? (((/* implicit */int) (short)-18)) : (arr_17 [i_4])))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_9 = 1; i_9 < 10; i_9 += 3) /* same iter space */
    {
        var_16 = arr_16 [i_9] [i_9];
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 4) 
        {
            arr_35 [i_9] [i_10 - 1] = ((/* implicit */_Bool) arr_13 [i_9 + 1]);
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (signed char)72)))))));
            arr_36 [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned long long int) var_6)) : (4ULL))) != (18ULL)));
            arr_37 [4U] [i_10] |= ((/* implicit */short) arr_7 [i_9 - 1] [i_9]);
        }
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_16 [i_9 + 2] [i_9]), (((/* implicit */short) arr_21 [i_9 - 1] [i_9] [i_9] [i_9] [i_9]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_9 - 1] [i_9] [i_9] [i_9] [i_9 - 1]))))) : (max((((/* implicit */unsigned long long int) arr_16 [i_9 - 1] [i_9])), (10660406136475990387ULL)))));
        /* LoopSeq 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-5402269170001312744LL)))) ? ((((_Bool)1) ? (5342372652127202747LL) : (-5224929719672872352LL))) : ((-(134217727LL)))))) ? (((((/* implicit */_Bool) -8792638830692935915LL)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (signed char)-80)))) : (((int) arr_30 [i_9 + 2] [i_9 - 1]))));
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                arr_43 [i_9] = max((((/* implicit */long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525))) & (var_3))))), (((arr_19 [i_9] [i_9]) ? (var_8) : (((/* implicit */long long int) (+(((/* implicit */int) arr_40 [i_11] [i_9]))))))));
                arr_44 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 6242062739777117544LL)) ? (4294967268U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25501)))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_0))));
            }
        }
        for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
        {
            var_21 -= ((/* implicit */short) max((((/* implicit */long long int) (signed char)23)), (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14642))) : (arr_34 [i_13]))), (((/* implicit */long long int) arr_30 [i_9] [i_9]))))));
            arr_48 [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) ((short) 2147483647))))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                for (unsigned int i_15 = 1; i_15 < 11; i_15 += 2) 
                {
                    {
                        arr_54 [i_9] [i_13] [i_9] [i_9] [i_9] |= ((signed char) ((_Bool) arr_7 [i_9 + 1] [i_15 - 1]));
                        var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((signed char) (!(var_5))))), (min((((/* implicit */unsigned long long int) arr_13 [i_14])), (max((arr_45 [0U] [i_13] [i_13]), (((/* implicit */unsigned long long int) arr_16 [i_14] [i_14]))))))));
                        arr_55 [i_9] [i_13] [i_13] [(signed char)6] [i_15] [i_15] = max((arr_9 [9] [i_13] [i_14] [i_15]), (((/* implicit */short) var_5)));
                        arr_56 [i_9] [i_13] [i_9] [6U] = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) 1557749343U)) || (((/* implicit */_Bool) 3296135193U)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((arr_40 [i_13] [7U]) && (((/* implicit */_Bool) var_3)))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            arr_59 [i_9] [i_16] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6361370353896083484LL)) ? (arr_45 [i_9] [i_9] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) : (max((((/* implicit */unsigned long long int) arr_34 [i_9])), (10859526729646975388ULL)))))) ? (min((min((7587217344062576224ULL), (((/* implicit */unsigned long long int) (unsigned short)23260)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42265)) ? (((/* implicit */int) var_4)) : (arr_17 [i_9])))))) : (max((min((12818181098882023208ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (signed char)121))))));
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */short) arr_46 [i_17]);
                            arr_68 [i_9] [i_9] [4] [i_18] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_38 [i_9])))))) ? (((((_Bool) 12818181098882023178ULL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_27 [i_9] [i_9] [i_9] [i_9] [i_9 + 1])) == (6584346425898133624ULL)))) : (((/* implicit */int) arr_22 [i_9])))) : (((/* implicit */int) arr_23 [i_18] [i_19]))));
                        }
                    } 
                } 
            } 
            arr_69 [i_9] [(_Bool)1] [i_16] |= ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */signed char) ((((/* implicit */_Bool) 1843034190U)) && (((/* implicit */_Bool) (unsigned short)23244))))), (((signed char) var_8)))));
        }
    }
    /* vectorizable */
    for (signed char i_20 = 1; i_20 < 10; i_20 += 3) /* same iter space */
    {
        arr_73 [i_20] = (+(arr_53 [i_20 + 2] [i_20 - 1] [2ULL] [2ULL] [i_20 + 2] [i_20]));
        arr_74 [i_20] = arr_31 [6];
        /* LoopSeq 2 */
        for (unsigned long long int i_21 = 2; i_21 < 11; i_21 += 4) /* same iter space */
        {
            var_24 -= ((/* implicit */short) arr_71 [i_20 + 2] [i_21]);
            var_25 -= ((/* implicit */_Bool) arr_58 [i_20 - 1] [i_20] [i_20]);
            /* LoopNest 3 */
            for (signed char i_22 = 0; i_22 < 12; i_22 += 2) 
            {
                for (int i_23 = 3; i_23 < 9; i_23 += 3) 
                {
                    for (int i_24 = 0; i_24 < 12; i_24 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_78 [i_20 + 2] [i_23 - 3]))));
                            var_27 = ((/* implicit */long long int) arr_63 [i_20] [i_20] [i_20] [i_20 + 1] [i_21 + 1]);
                            arr_87 [i_20] [i_20] [i_20] [i_20] |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_64 [i_21] [8ULL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-46))))));
                            arr_88 [i_20] = ((/* implicit */short) arr_57 [i_20 + 1]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_25 = 2; i_25 < 11; i_25 += 4) /* same iter space */
        {
            arr_91 [i_20] = arr_21 [2U] [i_20] [i_25] [i_25] [i_25];
            /* LoopSeq 2 */
            for (unsigned short i_26 = 0; i_26 < 12; i_26 += 3) 
            {
                arr_95 [i_20] [i_20] [(_Bool)1] [i_26] = ((/* implicit */_Bool) var_1);
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 12; i_27 += 2) 
                {
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */int) (~(((unsigned long long int) arr_25 [i_20] [4U] [4U] [4U] [i_26] [i_27] [(_Bool)1]))));
                            arr_101 [i_20] [i_25 - 2] [i_28] [i_27] [i_20] = ((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)-115))))));
                            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
                            arr_102 [i_28] = ((/* implicit */short) ((arr_57 [i_20 + 1]) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) arr_57 [i_20 + 2]))));
                            arr_103 [i_20] [i_20] [8ULL] [i_28] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_20] [i_20 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_20] [i_25]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_29 = 0; i_29 < 12; i_29 += 2) 
                {
                    for (unsigned int i_30 = 0; i_30 < 12; i_30 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_80 [i_20 + 2] [i_20] [i_20 - 1] [i_20] [i_25 - 1])) ? (((/* implicit */int) arr_20 [i_20 - 1] [i_25 - 2] [i_29])) : (((/* implicit */int) var_7)))))));
                            var_31 += ((/* implicit */signed char) ((unsigned long long int) arr_50 [i_20 - 1] [i_20 - 1]));
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) 6155840936099541193ULL)) ? (-8792638830692935932LL) : (((/* implicit */long long int) 64046795))));
                            var_33 -= ((/* implicit */signed char) ((6155840936099541170ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((2220156458U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119)))))))));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)28))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_98 [i_25 + 1] [(unsigned short)8] [(unsigned short)5] [i_29]))) : (((long long int) (unsigned char)249)))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [i_25]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_25] [i_20 - 1]))) : (((((/* implicit */_Bool) var_9)) ? (arr_107 [i_26] [i_26] [i_20] [i_20] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11888))))))))));
                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_66 [i_20 + 2] [i_25] [i_20 + 1])) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) arr_80 [i_20 - 1] [i_25] [i_20 - 1] [i_25 - 2] [i_25 - 2]))));
            }
            for (signed char i_31 = 0; i_31 < 12; i_31 += 1) 
            {
                arr_113 [i_20] [i_25] [i_31] &= ((/* implicit */unsigned long long int) arr_85 [i_20 + 1] [i_25 - 1] [i_31] [i_31] [i_31]);
                var_37 = ((/* implicit */signed char) (_Bool)1);
            }
        }
        /* LoopSeq 1 */
        for (short i_32 = 0; i_32 < 12; i_32 += 2) 
        {
            var_38 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-65))));
            arr_117 [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_42 [i_20] [i_32]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_111 [i_20] [i_32] [i_20 + 1]))) : (arr_31 [i_32])));
        }
    }
    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35544)) ? (var_9) : (max((7809805824896344091ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)38)), (var_9)))) ? (((((/* implicit */_Bool) 10859526729646975407ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5367))) : (11595046895521437916ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-836715623) : (((/* implicit */int) (unsigned short)11055)))))))));
    var_40 = ((/* implicit */short) (+(min((min((16435519729399388563ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (unsigned short)12147))))));
}
