/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143148
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)16082)), (((unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) var_0))), (-1428822192)))) : (max(((~(var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) -1428822200)))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(18350707150605349338ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_1])))) : (min((((/* implicit */unsigned int) arr_6 [i_1 - 3] [i_1])), (((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1])))))))));
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [(unsigned char)12] [(unsigned char)12])) : (((/* implicit */int) arr_6 [(signed char)0] [(signed char)0])))))))))))));
            var_15 = ((/* implicit */long long int) min((min((((/* implicit */signed char) (_Bool)0)), ((signed char)21))), ((signed char)-21)));
        }
        for (int i_3 = 3; i_3 < 15; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (long long int i_5 = 2; i_5 < 12; i_5 += 4) 
                {
                    {
                        var_16 |= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3] [i_3 - 3])) ? (arr_15 [i_4] [i_4] [(signed char)1] [i_4]) : (((/* implicit */unsigned long long int) -403031320114857103LL)))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11)))))));
                    }
                } 
            } 
            arr_18 [i_1] [i_3 - 1] [i_1] = ((/* implicit */_Bool) var_3);
            /* LoopNest 3 */
            for (unsigned char i_6 = 2; i_6 < 13; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((long long int) var_0));
                            var_19 = ((/* implicit */signed char) arr_12 [i_1] [i_6 + 2] [i_3] [i_1]);
                            var_20 ^= ((/* implicit */signed char) 96036923104202306ULL);
                            var_21 -= ((/* implicit */short) ((unsigned long long int) (!((_Bool)0))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */int) ((_Bool) ((unsigned int) min((((/* implicit */long long int) var_3)), (var_4)))));
            var_23 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_2)) ? (arr_15 [i_1 + 1] [i_1 - 1] [i_3] [i_3 + 1]) : (arr_15 [i_1 - 1] [i_1] [i_1] [i_3 - 1]))));
        }
        var_24 = ((/* implicit */unsigned int) (~(min(((-(var_6))), (((/* implicit */long long int) (_Bool)1))))));
        var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_17 [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1])))) ^ ((((_Bool)1) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
        /* LoopSeq 2 */
        for (int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_10 = 1; i_10 < 14; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    for (unsigned short i_12 = 3; i_12 < 15; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((4203555653U), (((/* implicit */unsigned int) var_10))))) <= ((+(arr_19 [i_1] [i_11] [i_10 - 1] [i_1])))))), ((~(((((/* implicit */_Bool) var_4)) ? (arr_26 [i_11]) : (16680972467123862834ULL)))))));
                            var_27 = ((/* implicit */unsigned int) var_5);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
                {
                    for (short i_14 = 3; i_14 < 12; i_14 += 2) 
                    {
                        {
                            var_28 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)23703)) ? (((/* implicit */int) (short)-29039)) : (var_7)))), (max((var_6), (((/* implicit */long long int) arr_40 [i_1 - 2] [i_1 + 2] [i_1 - 3] [i_13] [i_1 - 2] [i_1 - 1]))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)0)))) ^ ((((_Bool)1) ? (16776829853580840167ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))))));
                            var_30 *= ((/* implicit */unsigned long long int) ((signed char) max((var_7), (((/* implicit */int) (_Bool)1)))));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((4518272965078274053LL), (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) (unsigned short)35129)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_11 [i_13] [i_13] [i_1])) : (max((((/* implicit */int) ((((/* implicit */int) (unsigned char)111)) > (((/* implicit */int) var_0))))), ((+(((/* implicit */int) (unsigned short)14192)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
                {
                    for (long long int i_16 = 2; i_16 < 12; i_16 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_0))))))));
                            arr_47 [i_1 - 3] [i_1] = ((/* implicit */_Bool) 1291101870975171241ULL);
                            var_33 = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) min((((((var_4) + (9223372036854775807LL))) << (((((/* implicit */int) arr_43 [i_1] [i_9] [i_10 + 2] [i_10 + 2] [i_1])) - (90))))), (((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_1] [i_9] [i_10 - 1] [i_15] [i_1])) ^ (((/* implicit */int) arr_43 [i_1] [2LL] [i_10] [(unsigned short)9] [i_1])))))))) : (((/* implicit */unsigned long long int) min((((((var_4) + (9223372036854775807LL))) << (((((((((/* implicit */int) arr_43 [i_1] [i_9] [i_10 + 2] [i_10 + 2] [i_1])) - (90))) + (90))) - (12))))), (((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_1] [i_9] [i_10 - 1] [i_15] [i_1])) ^ (((/* implicit */int) arr_43 [i_1] [2LL] [i_10] [(unsigned short)9] [i_1]))))))));
                            var_34 = ((/* implicit */unsigned long long int) ((signed char) max((4852035922843270469ULL), (((/* implicit */unsigned long long int) (unsigned short)64890)))));
                            var_35 *= arr_38 [i_10] [i_10];
                        }
                    } 
                } 
            }
            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)234)), (1765771606585688799ULL)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) arr_21 [i_9] [(short)8] [i_9])) ^ (-4739452683302262154LL))))))))));
            var_37 ^= ((/* implicit */unsigned long long int) max((((390022433U) >> (((max((((/* implicit */long long int) (signed char)-69)), (-4739452683302262154LL))) + (85LL))))), (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_40 [i_9] [i_1 - 3] [i_1 + 1] [i_9] [i_9] [(unsigned short)12])))) * (((/* implicit */int) (!(((/* implicit */_Bool) 6535054519764085322ULL))))))))));
            arr_48 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)20422)))))));
        }
        for (unsigned long long int i_17 = 4; i_17 < 14; i_17 += 4) 
        {
            var_38 = ((/* implicit */unsigned char) max((((long long int) arr_33 [i_1])), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1]))) ^ (var_8))))));
            /* LoopSeq 1 */
            for (signed char i_18 = 0; i_18 < 16; i_18 += 4) 
            {
                var_39 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)64890)) : (((((/* implicit */_Bool) arr_28 [i_1 - 3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))) <= (((/* implicit */int) var_10))));
                var_40 = ((unsigned short) ((short) arr_23 [i_1] [i_17 + 2] [i_17] [i_1]));
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 16; i_19 += 2) 
                {
                    for (unsigned short i_20 = 0; i_20 < 16; i_20 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_36 [i_19] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_17] [i_18] [i_19]))) : (var_6))))) * (((((/* implicit */int) arr_24 [i_1 - 1] [i_18])) | (((/* implicit */int) arr_24 [i_19] [i_19]))))));
                            var_42 = arr_30 [11ULL] [i_20] [i_20] [i_20];
                            var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_24 [i_1 - 3] [i_17 - 2]), (((/* implicit */unsigned short) var_9))))) <= (((/* implicit */int) max((arr_24 [i_1 + 1] [i_18]), (arr_24 [i_18] [i_18]))))));
                        }
                    } 
                } 
            }
        }
    }
    for (unsigned char i_21 = 3; i_21 < 19; i_21 += 2) 
    {
        var_44 = ((/* implicit */signed char) ((unsigned long long int) ((short) arr_59 [i_21 - 3])));
        var_45 = ((/* implicit */unsigned int) max(((~(var_11))), (arr_59 [i_21 + 1])));
    }
    /* vectorizable */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        arr_63 [i_22] = ((/* implicit */unsigned int) arr_19 [i_22] [i_22] [(_Bool)1] [i_22]);
        var_46 = ((/* implicit */signed char) ((unsigned long long int) 11838412444700607123ULL));
    }
    var_47 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (signed char i_23 = 1; i_23 < 22; i_23 += 1) 
    {
        var_48 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_64 [i_23 - 1])))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_23 + 2])) && (((/* implicit */_Bool) arr_64 [i_23 + 3])))))));
        /* LoopSeq 1 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            var_49 &= ((/* implicit */unsigned long long int) var_1);
            /* LoopNest 2 */
            for (unsigned long long int i_25 = 0; i_25 < 25; i_25 += 1) 
            {
                for (unsigned long long int i_26 = 0; i_26 < 25; i_26 += 1) 
                {
                    {
                        var_50 = ((/* implicit */unsigned long long int) min((var_6), (((((/* implicit */_Bool) ((((/* implicit */int) arr_74 [i_23] [i_24] [i_24])) << (((((((/* implicit */int) (short)-28506)) + (28531))) - (9)))))) ? (((((/* implicit */_Bool) arr_71 [i_24])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_51 &= ((/* implicit */int) (unsigned short)22014);
                        /* LoopSeq 4 */
                        for (unsigned long long int i_27 = 3; i_27 < 23; i_27 += 4) 
                        {
                            arr_80 [i_27] [i_26] [i_27 + 1] = ((/* implicit */unsigned long long int) var_10);
                            var_52 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_68 [i_24])) & (((/* implicit */int) (signed char)-118))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_28 = 1; i_28 < 24; i_28 += 1) 
                        {
                            var_53 = ((arr_76 [i_23 - 1] [i_23 + 2] [i_23 + 3] [i_23 + 3] [i_23 + 3] [i_23 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8)))));
                            arr_84 [i_26] = ((/* implicit */signed char) -4518272965078274068LL);
                            var_54 = ((/* implicit */signed char) (_Bool)1);
                            var_55 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (var_3)))));
                        }
                        /* vectorizable */
                        for (long long int i_29 = 2; i_29 < 22; i_29 += 1) 
                        {
                            var_56 = ((/* implicit */unsigned int) var_2);
                            var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)23373)) ? (-696301652) : (((/* implicit */int) (unsigned char)15))));
                            var_58 = ((/* implicit */signed char) (_Bool)1);
                        }
                        for (unsigned long long int i_30 = 0; i_30 < 25; i_30 += 4) 
                        {
                            var_59 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) << (((var_7) - (1024416449)))));
                            var_60 = var_8;
                            var_61 ^= ((/* implicit */short) arr_73 [i_30] [i_23 - 1] [i_30] [i_24]);
                            var_62 = ((/* implicit */signed char) max((var_62), (arr_83 [i_23] [i_25] [i_23] [i_23] [i_30] [i_30] [i_30])));
                            var_63 = ((/* implicit */short) max((var_63), (((/* implicit */short) ((arr_72 [i_25] [i_25] [i_24] [i_23 + 2]) && (((/* implicit */_Bool) ((unsigned char) arr_77 [i_30] [i_26] [i_26] [i_25] [i_24] [i_23 + 1] [i_30]))))))));
                        }
                        var_64 = ((/* implicit */signed char) max((var_64), (((/* implicit */signed char) max((var_6), (((/* implicit */long long int) (signed char)-66)))))));
                    }
                } 
            } 
            arr_91 [i_24] [i_23] [i_24] = ((/* implicit */short) min((((arr_69 [i_24]) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_78 [i_24] [(unsigned short)10] [10] [12LL] [i_24])), (var_3)))) : (min((1669914220128711447ULL), (arr_82 [i_24] [i_24] [i_24] [i_24] [i_24]))))), (((/* implicit */unsigned long long int) var_7))));
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_31 = 1; i_31 < 13; i_31 += 4) 
    {
        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
        {
            {
                var_65 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 16776829853580840182ULL)))) ? (((/* implicit */int) (unsigned short)46197)) : ((-(((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)27258)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_33 = 0; i_33 < 16; i_33 += 2) 
                {
                    for (unsigned char i_34 = 0; i_34 < 16; i_34 += 2) 
                    {
                        {
                            var_66 = ((/* implicit */unsigned long long int) ((_Bool) (((~(27691193))) & (((/* implicit */int) var_9)))));
                            var_67 -= ((/* implicit */long long int) (_Bool)1);
                        }
                    } 
                } 
            }
        } 
    } 
}
