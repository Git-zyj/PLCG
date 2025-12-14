/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153313
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3] [(unsigned short)9])) >> (((arr_7 [(signed char)0] [(signed char)0] [2U]) + (1773370040713034028LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)117)) == (((/* implicit */int) arr_12 [i_0] [i_1])))))) : (min((((/* implicit */unsigned int) (unsigned short)62836)), (1896445547U))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2398521740U)) ? (((((/* implicit */int) (unsigned short)13318)) % (((/* implicit */int) (short)19909)))) : (((/* implicit */int) min(((short)-21932), (((/* implicit */short) (signed char)-58)))))))))))));
                                arr_15 [i_0 + 4] [i_0 + 4] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned int) arr_13 [i_0])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4 + 1] [i_0 + 4]))) | (arr_2 [i_0 + 4])))));
                                arr_16 [i_0] [(unsigned char)0] [(unsigned char)0] [i_3] [13] = ((/* implicit */signed char) max((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0])) && (((/* implicit */_Bool) (unsigned short)686))))), ((unsigned char)219)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), (max((((arr_5 [i_0] [i_0 + 1] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_2])) : (((/* implicit */int) (short)-7004)))), (((/* implicit */int) max((arr_5 [i_0] [i_0 + 3] [i_2]), (arr_5 [i_5] [i_0 - 2] [i_2]))))))));
                                var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0])) ? (((((/* implicit */int) arr_5 [i_0 - 3] [i_0 + 3] [i_0 - 2])) ^ (((/* implicit */int) (unsigned short)44267)))) : (((/* implicit */int) (_Bool)1))));
                                var_17 += ((/* implicit */signed char) ((unsigned int) arr_8 [i_2] [i_6]));
                                var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [(short)10])) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) ((unsigned short) (unsigned short)52218)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) arr_3 [i_5])) ? (1896445520U) : (((/* implicit */unsigned int) ((int) 4138100415U)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)21931)))))));
                }
            } 
        } 
        var_20 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) min(((signed char)127), ((signed char)8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (arr_3 [i_0]))))) : (min((4153559956U), (((/* implicit */unsigned int) var_6)))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (unsigned char)219)) : (-1622392254))), (-761432956))))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)202)), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [(unsigned short)6])) : (11233239988923837019ULL))))))))));
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            for (int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(((337005099) + (((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1])))))))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((10041127732672731272ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57508))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        var_24 &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_9] [i_9])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
        var_25 += ((/* implicit */short) (+(arr_9 [i_9] [i_9] [i_9] [i_9])));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                {
                    var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_9] [i_10] [i_9])) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) (_Bool)0))))) ? ((-(((/* implicit */int) arr_17 [i_9] [i_9] [i_10] [6])))) : (((/* implicit */int) (short)-17566))));
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((arr_23 [i_9] [i_9]) * (((arr_10 [i_9] [(short)13] [(unsigned short)10] [i_11]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) : (3840013406U))))))));
                    var_28 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)17))));
                }
            } 
        } 
        var_29 -= ((/* implicit */unsigned int) (_Bool)1);
    }
    for (int i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (short i_14 = 2; i_14 < 24; i_14 += 4) 
            {
                for (signed char i_15 = 1; i_15 < 24; i_15 += 4) 
                {
                    {
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_14 - 1])) ? (((/* implicit */int) (unsigned short)250)) : (arr_39 [i_14 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))) % (2901322070U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (arr_43 [i_14 - 2]))) : (min((max((((/* implicit */unsigned long long int) (short)-8111)), (arr_46 [i_14] [i_12]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)39500)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (short)-9423))))))))))));
                        arr_48 [i_12] [i_12] [i_12] [i_15] [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) (short)-19254)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                for (short i_17 = 0; i_17 < 25; i_17 += 4) 
                {
                    for (short i_18 = 3; i_18 < 21; i_18 += 1) 
                    {
                        {
                            arr_57 [i_17] [i_17] [i_16] [i_17] &= ((/* implicit */signed char) arr_47 [i_17] [i_13] [i_16] [i_17] [i_18 - 2] [i_12]);
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (+(min((arr_53 [i_18 + 4] [i_13] [i_13] [(_Bool)1] [(_Bool)1] [i_13]), (((/* implicit */unsigned long long int) arr_56 [i_18 + 4] [i_18 + 4] [i_18 + 4] [i_18 + 4] [14] [i_16])))))))));
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)2)), ((unsigned char)17)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_42 [i_18 - 1] [i_18 + 3]))))) : (((((((/* implicit */int) arr_56 [i_16] [(unsigned short)4] [i_16] [i_16] [(unsigned short)4] [i_16])) & (arr_41 [i_12] [i_16] [i_12]))) | (((/* implicit */int) min((((/* implicit */signed char) arr_40 [i_12])), ((signed char)127)))))))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_19 = 0; i_19 < 25; i_19 += 4) /* same iter space */
        {
            var_33 &= ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_44 [(_Bool)1]), (arr_44 [i_12]))))));
            arr_62 [i_12] [i_19] = ((/* implicit */unsigned short) 9191054307307842852LL);
            arr_63 [i_19] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((-742793691) % (((/* implicit */int) min((((/* implicit */short) arr_47 [(short)19] [i_12] [i_12] [i_19] [i_12] [i_19])), (arr_54 [i_12] [i_12]))))))), (((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */unsigned long long int) 1073552652327224588LL)) : (11511044144789103225ULL)))));
        }
        for (short i_20 = 0; i_20 < 25; i_20 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 25; i_21 += 2) 
            {
                for (unsigned int i_22 = 0; i_22 < 25; i_22 += 4) 
                {
                    {
                        arr_71 [i_21] [i_21] [i_21] [i_21] [i_22] [i_22] &= ((/* implicit */unsigned char) arr_67 [i_12] [i_12]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_23 = 1; i_23 < 24; i_23 += 4) 
                        {
                            var_34 = ((/* implicit */short) ((int) arr_64 [i_12]));
                            arr_74 [i_12] [i_12] [i_21] [i_12] [i_20] [i_12] [i_12] = (+(((/* implicit */int) arr_54 [i_12] [i_23 - 1])));
                        }
                        for (int i_24 = 0; i_24 < 25; i_24 += 1) /* same iter space */
                        {
                            arr_77 [i_12] [i_12] [i_21] [i_22] [(_Bool)1] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3655155360U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1370440263U)));
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((unsigned char) arr_41 [i_21] [i_20] [i_12])))));
                        }
                        for (int i_25 = 0; i_25 < 25; i_25 += 1) /* same iter space */
                        {
                            arr_80 [i_20] [i_20] [i_20] [(_Bool)1] [(unsigned char)16] [i_22] [i_20] &= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned int) var_12)) == (min((2785579098U), (((/* implicit */unsigned int) arr_47 [i_12] [(unsigned short)3] [i_25] [i_25] [i_25] [(unsigned short)3]))))))), (((((/* implicit */int) arr_49 [i_12] [(signed char)0] [i_12] [(unsigned char)10])) % (((/* implicit */int) arr_49 [i_12] [i_20] [i_22] [i_25]))))));
                            arr_81 [i_21] [i_12] [i_21] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_56 [i_12] [i_20] [i_20] [i_22] [11U] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_12] [i_12] [(unsigned short)0] [i_21]))) : (((((/* implicit */_Bool) arr_56 [i_12] [i_22] [(short)6] [i_20] [i_20] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_46 [i_12] [i_12]))))), (((/* implicit */unsigned long long int) max((-8343758694082974478LL), (((/* implicit */long long int) (~(var_1)))))))));
                            var_36 &= ((max((((unsigned int) (signed char)-6)), (((/* implicit */unsigned int) arr_65 [i_22] [i_25])))) << (((arr_39 [i_12]) - (1188257936))));
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_12] [i_12] [i_21] [i_22] [(unsigned short)5])) ? (((/* implicit */int) arr_79 [i_12] [i_20] [i_21] [i_20] [i_25])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_72 [i_12] [i_20] [i_21] [i_22] [i_20])) & (arr_38 [(_Bool)1] [i_20])))) : (((((/* implicit */_Bool) (signed char)-60)) ? (1505313174U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7)))))));
                            var_38 ^= ((/* implicit */_Bool) min(((-(1807222439))), (((/* implicit */int) max((((/* implicit */unsigned short) ((short) 1523539976U))), ((unsigned short)8027))))));
                        }
                        var_39 &= ((/* implicit */signed char) min((((long long int) ((((/* implicit */int) (short)-18199)) / (((/* implicit */int) (signed char)-114))))), (((/* implicit */long long int) (((~(133343539U))) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_26 = 1; i_26 < 23; i_26 += 2) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned long long int) ((unsigned int) arr_58 [i_12]));
                arr_84 [i_26] [16ULL] [i_12] = ((/* implicit */signed char) (((+(arr_43 [i_12]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_61 [i_12]) == (arr_41 [i_12] [i_12] [i_12])))))));
            }
            for (unsigned long long int i_27 = 1; i_27 < 23; i_27 += 2) /* same iter space */
            {
                var_41 += ((/* implicit */unsigned int) (unsigned short)39548);
                /* LoopNest 2 */
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    for (signed char i_29 = 0; i_29 < 25; i_29 += 1) 
                    {
                        {
                            arr_94 [i_20] [i_20] [i_20] [i_20] [i_29] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) 215959394U)) | (17006500277983125610ULL)));
                            var_42 &= ((/* implicit */unsigned long long int) ((signed char) max((arr_88 [i_12] [i_12] [i_20] [i_28] [i_27 - 1] [i_27]), (arr_88 [i_20] [i_20] [i_20] [i_20] [i_27 + 1] [i_12]))));
                        }
                    } 
                } 
                arr_95 [i_12] [i_20] [i_20] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_65 [i_20] [i_20]), (((/* implicit */int) (unsigned short)10084))))) ? (((/* implicit */unsigned long long int) arr_89 [i_12] [i_20] [i_20] [i_27] [i_20] [i_27])) : (min((arr_53 [i_27] [i_20] [i_20] [i_20] [i_20] [i_12]), (((/* implicit */unsigned long long int) -1467591134))))))) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_61 [i_20])) : (var_5))), (((/* implicit */unsigned long long int) (~(1327256645U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (574343510U))))));
                var_43 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_88 [i_27] [i_27] [i_12] [i_27 + 1] [(short)4] [i_27 + 2])))))));
            }
        }
        arr_96 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_12] [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_73 [i_12] [(short)14] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_73 [i_12] [i_12] [0U] [i_12] [0U]))))) || ((!(((/* implicit */_Bool) arr_73 [i_12] [i_12] [i_12] [i_12] [i_12]))))));
        var_44 = ((/* implicit */int) ((9405633749863655808ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13335)))));
        var_45 = ((/* implicit */unsigned int) min((var_45), (min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_68 [i_12] [i_12] [i_12] [i_12])) ? (-1467591134) : (((/* implicit */int) arr_72 [i_12] [i_12] [i_12] [i_12] [(short)13])))) == (((/* implicit */int) ((signed char) (_Bool)1)))))), (((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((((/* implicit */_Bool) arr_89 [i_12] [i_12] [i_12] [(signed char)18] [2] [i_12])) ? (3003703462U) : (((/* implicit */unsigned int) 1467591133)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (747029931))))))))));
        var_46 ^= max((((((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_12] [i_12])) / (((/* implicit */int) arr_83 [8U]))))) + (3323858975U))), (arr_69 [i_12] [(_Bool)1]));
    }
    /* LoopSeq 3 */
    for (unsigned int i_30 = 0; i_30 < 17; i_30 += 2) 
    {
        arr_99 [i_30] = ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) 4161623770U)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) arr_78 [i_30] [i_30] [i_30] [i_30] [i_30])))) == (((/* implicit */int) arr_73 [i_30] [i_30] [i_30] [i_30] [i_30])))))));
        var_47 = ((/* implicit */int) max((var_47), ((~(((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) <= (((((/* implicit */_Bool) 1768026614U)) ? (((/* implicit */int) arr_47 [i_30] [i_30] [i_30] [i_30] [i_30] [i_30])) : (373240707))))))))));
    }
    for (int i_31 = 0; i_31 < 23; i_31 += 3) 
    {
        var_48 -= ((/* implicit */short) (!(((/* implicit */_Bool) 133343545U))));
        arr_103 [i_31] = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) arr_68 [i_31] [i_31] [i_31] [i_31])), (2587187386U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32352)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)926)))))));
        arr_104 [i_31] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)15154)), (((((/* implicit */_Bool) (unsigned short)41902)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (1254152695U)))));
    }
    /* vectorizable */
    for (signed char i_32 = 0; i_32 < 17; i_32 += 4) 
    {
        arr_108 [i_32] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39525))) / (1024999644U)))) ? (arr_90 [i_32] [i_32] [i_32]) : (((/* implicit */long long int) ((arr_65 [i_32] [i_32]) / (((/* implicit */int) (short)10558)))))));
        var_49 = ((/* implicit */int) arr_56 [i_32] [i_32] [i_32] [(unsigned short)22] [i_32] [i_32]);
        var_50 = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 2771427346U)) : (3650313212948424670ULL))) % (((/* implicit */unsigned long long int) arr_105 [i_32]))));
        arr_109 [i_32] = ((((/* implicit */_Bool) 1872369420U)) ? (((/* implicit */int) (short)-15151)) : (((/* implicit */int) (_Bool)1)));
    }
    var_51 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1034480683)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1436625709U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) <= (((/* implicit */unsigned int) (~(max((((/* implicit */int) (signed char)-123)), (var_9))))))));
}
