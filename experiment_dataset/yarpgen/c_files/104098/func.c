/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104098
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
    var_18 = ((/* implicit */unsigned char) -5206839491650743111LL);
    var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) max(((short)-3561), (((/* implicit */short) (unsigned char)241))))) ? (((((/* implicit */_Bool) (unsigned short)8237)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8552))) : (var_14))) : (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (short)8542))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8542)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) var_3))))), (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8552))) : (var_9)))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned char) (short)8573)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : ((+(((/* implicit */int) (unsigned short)63054))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((long long int) (signed char)-1)) != (((/* implicit */long long int) ((((/* implicit */int) (short)-16653)) - (((/* implicit */int) var_15)))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        var_23 = ((/* implicit */unsigned char) (short)18890);
        arr_8 [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_1 - 1]))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_2] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [i_2 - 2])) != (((/* implicit */int) arr_9 [i_2 - 2])))) ? (((/* implicit */int) ((short) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_2])) % (((/* implicit */int) (unsigned short)57299)))))) : ((+(((/* implicit */int) min((arr_10 [i_3]), (arr_10 [i_2]))))))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_2 + 3]) > (min((17352693580290224183ULL), (((/* implicit */unsigned long long int) arr_12 [i_2] [(short)7] [i_3])))))))) * (max((arr_11 [1ULL]), (((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_11 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3])))))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                arr_18 [i_2] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) max((arr_11 [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7590251210572375112LL)) ? (((/* implicit */int) arr_10 [i_2 + 1])) : (((((/* implicit */_Bool) arr_10 [i_4])) ? (-1218211279) : (((/* implicit */int) (short)-8553)))))))));
                arr_19 [i_2] [i_4] [i_2] = ((/* implicit */short) (-(((/* implicit */int) arr_10 [i_2 - 2]))));
            }
            for (long long int i_6 = 1; i_6 < 19; i_6 += 2) 
            {
                arr_22 [i_4] = ((/* implicit */unsigned char) arr_20 [i_4] [i_4] [i_6] [i_4]);
                var_25 = ((((/* implicit */_Bool) ((arr_16 [i_2 + 3] [4LL] [i_2 - 2] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_2 + 1] [i_6 + 1])))))) ? (min((((/* implicit */long long int) arr_14 [i_4] [i_2 + 4])), (((((/* implicit */_Bool) 3690433112037884022LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2 - 2]))) : (arr_15 [i_4]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2 - 2] [(short)11] [i_6 + 2])) ? (((/* implicit */int) arr_12 [i_2 - 2] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_12 [i_2 + 4] [i_2 + 4] [i_6 + 2]))))));
            }
            for (short i_7 = 4; i_7 < 20; i_7 += 4) 
            {
                arr_26 [i_2] [i_4] [i_2] = ((/* implicit */_Bool) (((+(arr_23 [i_7] [i_4] [i_7 - 2] [i_2 + 4]))) / (((((/* implicit */_Bool) max((((/* implicit */short) arr_20 [i_4] [i_4] [i_4] [4ULL])), ((short)-8573)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */short) arr_17 [(signed char)19] [(_Bool)1] [i_7])))))) : (min((((/* implicit */long long int) arr_24 [i_7])), (arr_15 [i_4])))))));
                var_26 = ((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_2 + 1])), (arr_12 [i_2] [i_4] [i_7])))), (((((/* implicit */int) ((_Bool) (unsigned short)63035))) * (((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_2])), (arr_12 [i_2] [20LL] [i_7]))))))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        {
                            arr_33 [i_2] [i_2 + 2] [i_4] [i_4] [i_2] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                            var_27 = ((/* implicit */signed char) min((((9932825315038741256ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2]))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-8556)) && ((_Bool)1))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_31 [i_2] [i_4] [i_4] [i_7] [i_8] [i_9] [(short)14])))) : (-1218211272))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_28 = ((/* implicit */short) (((~(((unsigned long long int) var_6)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_28 [i_2] [(unsigned short)7] [(short)5] [i_4])) : (((/* implicit */int) (short)8554))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_4])) ? (((/* implicit */int) (short)8552)) : (((/* implicit */int) arr_9 [i_2])))))))))));
                    arr_37 [i_4] [i_4] [i_7] [i_10] = ((/* implicit */short) min((max((arr_16 [i_2] [i_2] [i_2 + 4] [i_7 + 1]), (arr_16 [9LL] [i_2] [i_2 + 2] [i_7 + 1]))), (((/* implicit */long long int) arr_25 [i_2] [i_2] [i_2] [i_2]))));
                    arr_38 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_10 [i_2]))))))) && (((/* implicit */_Bool) arr_24 [i_2]))));
                }
            }
            var_29 = max((((/* implicit */unsigned long long int) ((10U) < ((+(2192764289U)))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_2] [i_4]))) / (4523176121185847202ULL))), (((/* implicit */unsigned long long int) ((signed char) arr_17 [i_2] [i_4] [i_4]))))));
        }
        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (short i_12 = 1; i_12 < 20; i_12 += 4) 
            {
                for (short i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    {
                        arr_48 [i_13] [i_13] [i_12] [i_11] [i_11] [i_2] = ((/* implicit */short) arr_28 [i_2] [i_11] [i_12] [i_11]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_14 = 1; i_14 < 19; i_14 += 2) 
                        {
                            arr_51 [i_14] [(unsigned char)0] [i_13] [i_13] [i_12 + 1] [i_11] [i_2 + 3] = ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2 - 1] [i_11] [i_14] [i_2]))) | (arr_39 [i_2] [i_2]))));
                            arr_52 [i_11] [i_12] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_14 - 1])) ? (((/* implicit */int) (unsigned short)2508)) : (((/* implicit */int) arr_50 [i_14 - 1]))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 21; i_15 += 2) 
                        {
                            arr_57 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_2 - 2] [i_12 - 1])) ? (((/* implicit */int) arr_43 [i_2 + 3] [i_12 - 1])) : (((/* implicit */int) arr_43 [i_2 - 1] [i_12 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_2 + 4] [i_12 - 1])) ? (((/* implicit */int) arr_43 [i_2 - 2] [i_12 + 1])) : (((/* implicit */int) arr_43 [i_2 + 1] [i_12 - 1])))))));
                            arr_58 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_29 [i_2 + 1] [i_2 + 1] [i_13])) ? (((/* implicit */int) arr_29 [i_2 + 3] [i_12] [i_2])) : (((/* implicit */int) (short)-23266)))), ((~(((/* implicit */int) arr_29 [i_2 + 3] [i_2] [i_2]))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_16 = 2; i_16 < 20; i_16 += 1) 
            {
                arr_61 [i_16] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_42 [(_Bool)1] [i_16]))) >> (((/* implicit */int) ((short) arr_42 [i_2] [i_2])))));
                arr_62 [i_16] [i_11] [i_16] [i_11] = ((/* implicit */signed char) ((arr_45 [i_16 - 1]) / (((/* implicit */long long int) arr_59 [i_2] [i_16 - 2] [i_16]))));
            }
            arr_63 [(_Bool)1] [i_11] [(signed char)0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_55 [i_2 - 1]), (arr_55 [i_2 + 1])))) & (((((/* implicit */int) ((_Bool) 576460752169205760LL))) * ((+(((/* implicit */int) arr_21 [i_2]))))))));
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            arr_67 [i_17] [i_17] [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8589))))) < (max((((((/* implicit */_Bool) (short)-31849)) ? (((/* implicit */long long int) 2192764289U)) : (5377597678086865123LL))), (((/* implicit */long long int) arr_41 [(signed char)3] [i_17 - 1] [i_17 - 1]))))));
            var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) ((signed char) arr_14 [i_2] [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_2] [i_17] [i_2] [i_2] [i_17 - 1] [i_17 - 1]))) : ((+(-8079411644331864517LL))))) << ((((~(((int) arr_36 [i_2] [i_17])))) + (525)))));
            var_31 = ((/* implicit */_Bool) (short)8552);
        }
        /* LoopSeq 3 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            arr_71 [i_18] [i_18] [i_18] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2 + 2] [(short)19] [i_18] [i_18])) ? (((/* implicit */int) arr_21 [i_2])) : (((/* implicit */int) arr_24 [i_2]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31506)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_18] [i_18]))) : (arr_16 [i_2] [i_2] [i_18] [i_18])))))))));
            /* LoopNest 3 */
            for (short i_19 = 1; i_19 < 18; i_19 += 1) 
            {
                for (short i_20 = 1; i_20 < 18; i_20 += 4) 
                {
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        {
                            arr_80 [(unsigned char)14] [(unsigned char)14] [i_18] [i_19] [i_20] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_30 [i_18] [i_19 - 1])) < (((/* implicit */int) ((_Bool) -878391151)))))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 - 2] [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29198)) ? (4523176121185847188ULL) : (((/* implicit */unsigned long long int) -1218211281))))))))));
                            var_32 = ((/* implicit */unsigned short) min(((+(arr_69 [i_20 + 1]))), (((arr_25 [i_21] [i_21] [i_21 - 1] [i_20 - 1]) ? (arr_69 [i_20 - 1]) : (((/* implicit */int) arr_25 [i_21] [i_21] [i_21 - 1] [i_20 + 1]))))));
                            arr_81 [i_21] [i_18] [i_18] [i_18] [i_2 + 3] = ((/* implicit */short) (-(((((/* implicit */int) max((arr_40 [i_18]), (arr_36 [i_2] [i_18])))) << (((((/* implicit */int) ((unsigned short) arr_31 [i_2] [i_2] [i_18] [(short)16] [i_19] [(short)2] [i_21]))) - (59414)))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_22 = 1; i_22 < 19; i_22 += 1) 
        {
            var_33 = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), ((~(arr_45 [i_2]))))));
            var_34 = ((/* implicit */short) (((~(arr_76 [i_2 - 1] [i_22 + 2] [i_22]))) != (((/* implicit */unsigned long long int) ((long long int) arr_76 [i_2 + 1] [i_22 + 1] [i_22 + 2])))));
        }
        for (long long int i_23 = 0; i_23 < 21; i_23 += 2) 
        {
            arr_86 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) (unsigned char)13))) ? (min((arr_47 [i_2] [10ULL] [i_2] [i_2 + 4] [i_2] [i_2]), (4523176121185847223ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2102203012U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-8532))))))))) >= (((var_14) + (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)21120), (((/* implicit */unsigned short) arr_31 [i_23] [7ULL] [i_2] [i_2] [i_2] [i_2] [i_2]))))))))));
            var_35 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_2 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_85 [(unsigned char)19] [(unsigned char)19]))) : (arr_11 [12LL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_79 [i_2] [i_2] [i_23] [4LL] [i_23]), (((/* implicit */short) arr_54 [i_2] [i_23] [i_23] [i_23])))))) : (((((/* implicit */_Bool) arr_47 [i_2] [i_23] [i_23] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_39 [i_2] [i_2]))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) arr_20 [i_2] [i_2] [i_2 + 3] [i_23]))), (((arr_17 [i_2] [i_2] [i_23]) ? (((/* implicit */int) arr_55 [i_2])) : (((/* implicit */int) arr_79 [i_2] [i_2] [i_23] [i_23] [i_23])))))))));
        }
        var_36 = ((/* implicit */_Bool) ((long long int) max((min((((/* implicit */unsigned long long int) arr_14 [i_2] [i_2])), (arr_39 [i_2] [i_2]))), (((/* implicit */unsigned long long int) max(((unsigned char)215), (((/* implicit */unsigned char) var_6))))))));
    }
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        /* LoopNest 2 */
        for (short i_25 = 2; i_25 < 21; i_25 += 1) 
        {
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_27 = 0; i_27 < 22; i_27 += 2) 
                    {
                        for (long long int i_28 = 1; i_28 < 19; i_28 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_91 [i_28] [i_27] [i_26] [i_25])) ? (((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) arr_87 [i_25] [i_25])) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) arr_88 [i_24])) ? (((/* implicit */int) arr_87 [i_24] [i_25])) : (((/* implicit */int) arr_94 [i_24] [i_25 - 1] [i_26] [i_27] [i_28]))))))) ? (((((/* implicit */int) arr_95 [i_28 + 1] [i_25 + 1] [16LL])) | (((/* implicit */int) arr_95 [i_28 + 2] [i_25 - 2] [i_25])))) : (((var_1) ? (((/* implicit */int) (short)-30090)) : ((~(arr_92 [i_24] [i_27] [(unsigned char)18])))))));
                                var_38 = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                    arr_98 [i_24] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_89 [i_24] [(_Bool)1])), (arr_88 [i_24]))) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)42)) & (((/* implicit */int) (short)20536)))))))) || (arr_87 [i_24] [i_24])));
                }
            } 
        } 
        arr_99 [i_24] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (short)32021))))) | (((/* implicit */int) arr_93 [i_24] [i_24] [i_24] [i_24] [i_24])))), (((/* implicit */int) (short)-1))));
        arr_100 [i_24] = ((/* implicit */unsigned long long int) ((short) ((_Bool) arr_96 [i_24] [i_24] [i_24] [i_24] [(short)4])));
        var_39 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((arr_87 [i_24] [i_24]) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) arr_94 [13LL] [i_24] [i_24] [i_24] [(unsigned char)12]))))) ? ((-(((/* implicit */int) (unsigned char)132)))) : (((/* implicit */int) ((signed char) var_5)))))));
        var_40 = ((/* implicit */short) max((var_4), (((/* implicit */unsigned long long int) max((arr_92 [i_24] [i_24] [i_24]), (arr_92 [i_24] [i_24] [i_24]))))));
    }
}
