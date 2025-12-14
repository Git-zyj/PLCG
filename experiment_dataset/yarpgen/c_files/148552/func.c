/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148552
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = (~(arr_1 [i_0]));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 3; i_2 < 13; i_2 += 2) 
        {
            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1272851086U)) ? (1272851086U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 2])) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1]))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                var_14 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_5 [i_1])))))));
                var_15 = ((/* implicit */long long int) ((arr_10 [i_1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) >> (((((/* implicit */int) var_0)) + (13501)))));
                var_16 = ((/* implicit */unsigned char) ((unsigned int) arr_5 [i_3]));
            }
            var_17 = ((/* implicit */unsigned long long int) var_2);
        }
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_1] [(unsigned short)2] [i_1] [i_1]) >> (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_9 [(short)4] [12U] [i_1] [i_1]) : (arr_9 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((((-5920753326652372451LL) + (9223372036854775807LL))) >> (((3022116210U) - (3022116149U))))) > (((/* implicit */long long int) 3022116210U))))))));
    }
    /* LoopSeq 3 */
    for (short i_4 = 2; i_4 < 13; i_4 += 2) /* same iter space */
    {
        arr_13 [i_4] = ((/* implicit */long long int) 3022116217U);
        var_19 = ((/* implicit */long long int) ((unsigned long long int) arr_9 [i_4] [i_4 - 2] [i_4] [i_4 - 2]));
        var_20 = ((/* implicit */unsigned short) arr_7 [i_4]);
    }
    for (short i_5 = 2; i_5 < 13; i_5 += 2) /* same iter space */
    {
        arr_16 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) arr_8 [i_5] [i_5])))))) ? (((/* implicit */long long int) ((unsigned int) arr_12 [i_5 + 1]))) : (min((((arr_9 [i_5 - 2] [i_5 + 1] [i_5 - 2] [i_5 + 1]) >> (((716647462U) - (716647446U))))), (arr_9 [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 1])))));
        /* LoopSeq 3 */
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            arr_21 [i_5] = ((/* implicit */long long int) (~((~(((/* implicit */int) ((arr_10 [i_5] [i_5] [i_6] [i_5]) > (arr_15 [i_5 + 1]))))))));
            arr_22 [i_5] = ((/* implicit */int) ((_Bool) 2525618821U));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_21 -= ((/* implicit */long long int) ((unsigned short) 1272851086U));
            var_22 -= ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_7])) ? (var_11) : (((/* implicit */long long int) arr_23 [i_5])))))), (((/* implicit */long long int) arr_19 [i_5] [i_5 - 2] [i_7]))));
            var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5 - 2] [i_5 + 1])) ? (((/* implicit */long long int) var_10)) : (arr_7 [i_5]))) > (((/* implicit */long long int) min(((~(((/* implicit */int) arr_19 [i_5] [i_5 - 1] [i_7])))), (((/* implicit */int) arr_19 [i_5 - 2] [i_5 + 1] [i_5 + 1])))))));
            var_24 = ((/* implicit */int) (+(-3133643109570436700LL)));
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_29 [i_8] = ((/* implicit */unsigned short) arr_26 [i_5]);
            var_25 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_23 [i_5])) ? (arr_9 [i_5] [i_8] [i_5] [i_5]) : (((/* implicit */long long int) arr_14 [(unsigned char)8] [(unsigned char)8])))));
            var_26 = ((/* implicit */_Bool) ((((1272851078U) >> (((arr_17 [2LL]) - (466712672789382426LL))))) >> (((((long long int) arr_20 [i_5] [i_8] [2LL])) + (8456349145628114167LL)))));
        }
    }
    for (long long int i_9 = 3; i_9 < 13; i_9 += 1) 
    {
        var_27 += (~(2997025628U));
        /* LoopSeq 1 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            var_28 = ((/* implicit */short) (_Bool)1);
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                var_29 = ((long long int) ((((/* implicit */int) arr_35 [i_10 - 1] [i_9 + 1])) > (((/* implicit */int) arr_32 [i_9 + 2]))));
                var_30 ^= ((/* implicit */long long int) min((3022116221U), (268435455U)));
                /* LoopSeq 1 */
                for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    arr_45 [i_12] [i_11] [i_11] [i_12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                    arr_46 [i_9] [i_10 - 1] [i_12] [i_12] &= ((/* implicit */signed char) (~(((/* implicit */int) ((2922381023551354523ULL) > (((/* implicit */unsigned long long int) ((var_11) >> (((2147483647) - (2147483604)))))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(1272851087U)))) ? (((arr_40 [i_9] [i_9 + 3] [i_9 + 2] [i_10 - 1]) ? (((/* implicit */int) arr_40 [(unsigned short)9] [i_9 - 3] [i_9 - 3] [i_10 - 1])) : (((/* implicit */int) arr_40 [i_9] [i_9 + 3] [i_9 - 3] [i_10 - 1])))) : (((/* implicit */int) arr_40 [i_9 - 1] [i_9 - 2] [i_9 + 3] [i_10 - 1])))))));
                        var_32 = ((/* implicit */unsigned short) arr_37 [i_10 - 1] [i_9 - 1] [0LL]);
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) arr_30 [i_11]))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((_Bool) arr_43 [i_9 + 1] [i_9 - 2] [i_9 - 1] [i_10 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_43 [i_9] [i_9 + 3] [i_9 - 2] [i_10 - 1])) >> (((/* implicit */int) arr_43 [i_9] [i_9 + 2] [i_9 - 1] [i_10 - 1]))))) : (((unsigned int) arr_43 [i_9] [i_9 - 3] [i_9 - 2] [i_10 - 1])))))));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_38 [3LL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) (-(((((((/* implicit */int) arr_38 [i_14])) + (2147483647))) >> (((arr_31 [i_9]) - (1639894010U)))))))) : (((unsigned int) (~(((/* implicit */int) arr_48 [i_9] [i_9 + 3])))))));
                        arr_51 [i_9] [i_9] [i_11] [i_12] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_35 [i_12] [i_10])) : ((+(((/* implicit */int) arr_34 [i_9 + 3] [i_9 + 1]))))));
                        arr_52 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_36 [i_12] [i_11])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_9 - 1]))) > (arr_41 [i_9] [i_10] [i_9 + 2] [i_10 - 1])))) : (((/* implicit */int) var_8))));
                    }
                    for (long long int i_15 = 2; i_15 < 15; i_15 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) arr_35 [i_10] [i_15 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_55 [i_15] [i_10 - 1] [i_9 + 3] [i_15 - 1] [i_12] [i_12])))) : (((/* implicit */int) ((716647445U) > (((/* implicit */unsigned int) (+(((/* implicit */int) arr_48 [i_15] [i_11]))))))))));
                        var_37 -= ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(1272851074U)))), (arr_33 [i_9 - 3] [i_9 - 1])))) ? (var_9) : ((+(((/* implicit */int) (short)-2598)))));
                        var_38 += ((/* implicit */unsigned long long int) arr_47 [i_9] [i_15] [i_12] [i_12] [i_12]);
                    }
                    arr_56 [i_10] [i_11] [i_10] [i_10] [9U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_35 [i_11] [i_11]), (arr_35 [i_10 - 1] [i_11])))) ? (((/* implicit */int) arr_35 [i_12] [i_12])) : ((~(((/* implicit */int) var_2))))));
                }
                /* LoopSeq 4 */
                for (unsigned int i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    var_39 = ((/* implicit */_Bool) var_4);
                    var_40 = ((/* implicit */int) 4150224194U);
                }
                for (unsigned char i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9149132464809220293ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2614))) : (32767LL)));
                    var_42 = ((/* implicit */_Bool) ((long long int) ((unsigned long long int) ((arr_32 [i_9]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9 + 1] [i_10 - 1]))) : (var_3)))));
                    var_43 = ((/* implicit */long long int) min((min((arr_36 [i_9 + 2] [i_10 - 1]), (arr_36 [i_9 - 2] [i_10 - 1]))), (((/* implicit */int) ((signed char) arr_36 [i_9 - 1] [i_10 - 1])))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_44 = ((/* implicit */_Bool) var_0);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_45 = ((/* implicit */signed char) (((+(arr_50 [i_9] [i_10] [i_10] [i_18] [i_19] [i_9] [i_11]))) >> (((((var_11) >> (((((/* implicit */int) var_7)) - (38965))))) - (356442LL)))));
                        arr_65 [i_9 + 1] [i_9 + 1] [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) (+(arr_62 [i_9 - 2] [i_10 - 1] [i_10 - 1])));
                        var_46 = ((arr_44 [i_9]) >> (((((((/* implicit */_Bool) arr_48 [i_11] [i_18])) ? (arr_54 [i_9 - 2] [i_9 - 2] [i_11] [i_18] [i_19]) : (arr_64 [i_19] [i_18] [10LL] [i_11] [i_10 - 1] [i_9]))) - (2768253642U))));
                    }
                    for (unsigned int i_20 = 0; i_20 < 16; i_20 += 1) 
                    {
                        var_47 += ((((unsigned int) max((arr_41 [i_20] [i_18] [i_11] [i_10]), (((/* implicit */long long int) (short)-2598))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((short) 144743082U)))));
                        var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((unsigned int) 3578319824U))))) ? (arr_36 [i_11] [i_10 - 1]) : ((~(((/* implicit */int) ((1272851074U) > (arr_54 [i_18] [i_11] [i_20] [i_9] [i_20]))))))));
                        arr_68 [i_18] [i_18] [i_20] = ((/* implicit */long long int) var_5);
                    }
                    var_49 = ((/* implicit */long long int) var_1);
                }
                /* vectorizable */
                for (unsigned int i_21 = 0; i_21 < 16; i_21 += 2) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_22 = 0; i_22 < 16; i_22 += 4) 
                    {
                        arr_73 [i_9] [i_9 - 3] [i_9 - 3] [i_9] = ((/* implicit */_Bool) var_4);
                        arr_74 [i_10] [i_11] [i_21] [i_22] = ((/* implicit */unsigned long long int) ((_Bool) arr_59 [i_10 - 1] [i_9 - 3] [i_9] [i_9 + 3]));
                    }
                    for (signed char i_23 = 0; i_23 < 16; i_23 += 2) 
                    {
                        var_50 = ((/* implicit */long long int) min((var_50), (((long long int) arr_59 [i_9 + 1] [i_10] [i_9 - 3] [i_10 - 1]))));
                        var_51 = ((/* implicit */_Bool) ((unsigned int) arr_72 [i_10 - 1] [i_9 + 3] [i_9] [i_9 + 1] [i_9 + 2] [i_9]));
                        var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) arr_49 [i_9 + 3] [i_9 + 3] [i_9 + 1] [i_9] [i_9])))) : (((/* implicit */int) arr_61 [i_10 - 1] [i_9 + 2] [i_10 - 1] [i_21] [i_23] [i_11]))));
                    }
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                    {
                        var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (3022116242U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2614)))));
                        arr_81 [i_24] = ((/* implicit */_Bool) arr_41 [1U] [i_11] [i_21] [i_24]);
                        var_54 += ((/* implicit */_Bool) (+(arr_37 [i_9 - 3] [i_24 - 1] [i_10 - 1])));
                    }
                    for (long long int i_25 = 0; i_25 < 16; i_25 += 2) 
                    {
                        var_55 = var_10;
                        arr_84 [i_11] [i_10] [i_11] [i_11] [i_21] [i_21] [i_9 + 2] = ((/* implicit */unsigned int) ((signed char) arr_72 [i_9] [i_9 - 2] [i_9 - 2] [i_10 - 1] [i_9] [i_10]));
                        var_56 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_35 [i_10 - 1] [i_9 - 2]))));
                        arr_85 [i_21] [i_21] [i_21] [i_21] |= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_35 [i_9] [i_11])) > (arr_42 [i_21] [i_21] [i_21] [i_21]))));
                        arr_86 [i_9 - 1] [i_9 + 2] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)222)) >> (((3578319824U) - (3578319818U)))))));
                    }
                    var_57 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)0))));
                    var_58 = ((/* implicit */unsigned char) ((arr_69 [i_10 - 1] [i_9 - 3] [i_10 - 1]) > (arr_69 [i_9] [i_9 - 2] [i_10 - 1])));
                }
            }
            for (unsigned short i_26 = 0; i_26 < 16; i_26 += 2) 
            {
                var_59 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_75 [15LL] [i_9 - 3] [i_9 - 2] [i_10 - 1] [i_10])) > (((arr_75 [i_9] [i_9 + 2] [i_9 + 2] [i_10 - 1] [i_10]) ? (((/* implicit */int) (short)2598)) : (((/* implicit */int) arr_75 [i_9] [i_9 + 1] [i_9 - 2] [i_10 - 1] [i_26]))))));
                var_60 = ((/* implicit */long long int) (+(min((3022116221U), (((/* implicit */unsigned int) (short)2591))))));
                var_61 += ((/* implicit */long long int) var_3);
            }
            var_62 = ((/* implicit */long long int) ((3578319824U) > (3616026707U)));
        }
        arr_89 [i_9] [i_9] = ((/* implicit */long long int) (+(1272851085U)));
        var_63 &= ((/* implicit */unsigned short) (((_Bool)1) ? (30465504U) : (1272851085U)));
        var_64 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2344935276U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 895482961))));
    }
    var_65 &= ((/* implicit */unsigned int) ((((((_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_0)) + (13503)))))) : (var_3))) > (((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_2))))) : (((/* implicit */int) (_Bool)1)))))));
    var_66 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_5)), ((+(((((/* implicit */_Bool) (short)2614)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2599)))))))));
}
