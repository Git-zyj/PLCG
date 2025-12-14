/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146381
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    var_10 ^= -2701895780976691870LL;
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_1] [i_1] = (+((~(((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                        var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)19639))));
                    }
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
                    {
                        arr_15 [i_1] [i_1] = var_4;
                        arr_16 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */short) (signed char)-48)), ((short)-19639)))), (max((arr_14 [i_1 - 2] [i_2 + 1]), (-3252007059989316614LL)))));
                        arr_17 [i_4] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19636)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) (short)-8755))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(signed char)8] [i_2] [i_2 + 1] [i_2] [i_2] [i_1 - 2]))) : ((~(var_6)))))) ? (((/* implicit */int) (short)4096)) : (((/* implicit */int) (short)-19661))));
                    }
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
                    {
                        var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((var_7), (((/* implicit */unsigned long long int) arr_3 [i_1])))), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1 - 1]))))) : (((min((((/* implicit */unsigned long long int) -507457802298844548LL)), (6109764302026533088ULL))) - ((+(144112989052600320ULL)))))));
                        var_13 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned char) var_9))), ((+(10325624700776794736ULL)))));
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_6 [i_0] [i_1 + 1] [(short)4])))) ? (((((/* implicit */_Bool) -2701895780976691870LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1 - 2] [i_2] [i_2] [i_2] [i_2 + 1]))) : (var_9))) : (((/* implicit */unsigned int) max((arr_6 [i_1] [i_1 - 1] [i_2]), (arr_6 [i_1] [i_1 + 1] [i_2])))))))));
                        var_15 = ((/* implicit */unsigned int) min((((max((((/* implicit */unsigned long long int) var_4)), (144112989052600320ULL))) / (max((var_7), (((/* implicit */unsigned long long int) (short)19660)))))), (((/* implicit */unsigned long long int) (unsigned short)2044))));
                    }
                }
                for (short i_6 = 2; i_6 < 10; i_6 += 3) 
                {
                    arr_22 [i_1] [i_1] [i_1] [i_6] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_6] [i_6 - 1] [i_6] [i_0]);
                    /* LoopSeq 4 */
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_8 = 1; i_8 < 9; i_8 += 3) 
                        {
                            arr_30 [i_1] [i_1] [i_6] [i_1] [i_8] [0] = (~(((/* implicit */int) var_0)));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_26 [4LL] [i_1 + 1] [8LL] [i_8] [i_6 - 2] [i_1 + 1] [8LL]))))) & (-507457802298844537LL)));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19660)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)97))) : (var_7)))) ? (((/* implicit */int) arr_10 [i_1])) : (((((/* implicit */_Bool) arr_20 [i_1] [6U])) ? (var_3) : (var_1))))))))));
                        }
                        for (short i_9 = 2; i_9 < 7; i_9 += 4) 
                        {
                            var_18 = ((/* implicit */long long int) min((((/* implicit */int) arr_21 [i_6] [i_1 - 1] [i_1])), ((+(((/* implicit */int) var_8))))));
                            arr_34 [i_1] [i_0] [i_1] [i_6] [9] [i_9] = ((/* implicit */signed char) var_1);
                        }
                        /* LoopSeq 4 */
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) (~(15453191207728218637ULL)));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (~(((/* implicit */int) min(((unsigned short)14), (((/* implicit */unsigned short) (unsigned char)96))))))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((-232680486847848774LL), (((/* implicit */long long int) arr_6 [i_11] [i_6 - 1] [i_6 - 1]))))) ? (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_42 [i_0] [i_1] [7LL] [i_1] [i_11] [i_7] [i_0])))), ((+(((/* implicit */int) (short)-19671))))))) : (max((((/* implicit */unsigned long long int) (short)-23096)), (10142435464853971283ULL)))));
                            arr_43 [i_0] [i_0] [i_6] [i_7] [i_1] = arr_7 [i_0] [i_7] [i_11];
                        }
                        for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((var_7), (((/* implicit */unsigned long long int) max((3221225472U), (((/* implicit */unsigned int) (unsigned char)98))))))))));
                            var_23 = ((/* implicit */unsigned char) max(((+(((arr_2 [i_1] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (arr_19 [i_0] [i_1 - 2] [i_6] [i_7])));
                            arr_47 [i_1] [i_6] [i_1] [i_7] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)106))) : (-7221883099017593239LL));
                            arr_48 [8ULL] [i_1] [i_1] [i_7] [i_12] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 536608768)) ? (((/* implicit */unsigned long long int) ((unsigned int) min((var_7), (((/* implicit */unsigned long long int) var_2)))))) : (max((((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))))), (((/* implicit */unsigned long long int) (unsigned short)62608))))));
                            var_24 = var_0;
                        }
                        for (unsigned long long int i_13 = 2; i_13 < 9; i_13 += 4) 
                        {
                            arr_51 [i_0] [i_1] [i_13] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65521))));
                            arr_52 [i_1] [i_1] = ((/* implicit */short) ((min((((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_6])) ? (((/* implicit */int) arr_21 [i_1] [i_6] [i_13 + 2])) : (((/* implicit */int) (short)23095)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_33 [i_1] [i_6] [i_13])))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) > (((15648924413994963331ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
                            arr_53 [i_0] [i_1 - 2] [i_1] [i_7] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max(((~(var_1))), (((((/* implicit */_Bool) 3252007059989316629LL)) ? (1618749020) : (((/* implicit */int) (short)-9))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_7] [i_13 - 2] [i_13 - 2] [i_13])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_6 - 2] [i_6] [1U] [i_13])) : (((/* implicit */int) max(((unsigned short)65527), (((/* implicit */unsigned short) arr_27 [i_0] [i_0] [i_0] [i_0] [3])))))))) : (max(((~(7221883099017593238LL))), (min((arr_2 [i_13 + 1] [i_0]), (((/* implicit */long long int) -798035264))))))));
                            arr_54 [i_0] [i_1] [i_6 - 1] [i_0] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65521)))))));
                        }
                    }
                    for (unsigned int i_14 = 2; i_14 < 9; i_14 += 3) 
                    {
                        arr_57 [i_1] [i_1] [i_14] = ((/* implicit */short) arr_18 [i_0] [i_1] [i_1] [i_14] [i_14 + 2] [i_1]);
                        arr_58 [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_46 [i_1 + 1] [i_6] [i_6 - 1] [i_6] [2LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 7498397473808707449ULL)))) : (min((var_9), (((/* implicit */unsigned int) var_5))))))));
                    }
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_16 = 0; i_16 < 11; i_16 += 3) 
                        {
                            var_25 = ((/* implicit */int) (unsigned char)32);
                            var_26 -= min((((/* implicit */int) var_2)), (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_0)))), ((-(((/* implicit */int) arr_46 [i_0] [i_0] [i_6] [i_15] [i_6 + 1])))))));
                            arr_65 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) (short)23094)), (arr_32 [(signed char)8] [i_0] [(signed char)8] [i_0] [i_0] [i_15] [i_16])))))))));
                            arr_66 [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_13 [i_6 - 1] [i_1 + 1] [i_6] [i_15])), (min((((/* implicit */long long int) var_2)), (arr_19 [i_0] [i_1] [i_6 - 2] [i_6 - 2])))));
                        }
                        for (long long int i_17 = 2; i_17 < 10; i_17 += 4) 
                        {
                            var_27 ^= min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))), (max((var_6), (((/* implicit */unsigned long long int) -738402247004581705LL)))));
                            var_28 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_17] [i_17 - 2] [i_6 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (~(((/* implicit */int) arr_68 [i_0] [i_0] [(unsigned short)0]))))))) : (254U));
                        }
                        /* LoopSeq 4 */
                        for (unsigned int i_18 = 3; i_18 < 10; i_18 += 3) 
                        {
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) max((var_3), (max((0), (((/* implicit */int) (short)12319))))))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) arr_23 [i_0] [i_18 - 1] [i_18]))))))))));
                            arr_71 [(unsigned char)1] [i_1] [i_1] = ((/* implicit */long long int) (unsigned short)62608);
                            var_30 = ((/* implicit */long long int) var_8);
                        }
                        for (unsigned int i_19 = 1; i_19 < 10; i_19 += 4) 
                        {
                            arr_76 [i_1] [i_1] [i_15] [i_15] [i_19] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 2082508733U)) : (var_7)))))));
                            var_31 = ((/* implicit */short) (~(1424659523307484215LL)));
                            var_32 = ((/* implicit */unsigned char) 20LL);
                        }
                        for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 4) 
                        {
                            arr_79 [i_20] [i_15] [i_1] [i_1] [10] [i_0] = ((/* implicit */signed char) (short)(-32767 - 1));
                            var_33 -= ((/* implicit */unsigned short) arr_0 [i_1 - 2]);
                        }
                        for (unsigned int i_21 = 2; i_21 < 10; i_21 += 2) 
                        {
                            arr_82 [i_0] [i_0] [i_1] [i_0] [i_1] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((+(3265701142716843932ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                            var_34 += ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */int) (short)23095)))) : (((/* implicit */int) arr_39 [i_1 - 2] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1]))));
                        }
                    }
                    for (long long int i_22 = 0; i_22 < 11; i_22 += 3) 
                    {
                        arr_86 [i_0] [i_0] [i_1] [i_22] = ((/* implicit */unsigned short) var_8);
                        arr_87 [i_0] [i_1] [i_1] [i_6] [i_22] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_84 [i_0] [i_0] [i_6] [i_22]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)-23109)), (var_4)))))))));
                        arr_88 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_0] [i_6 - 1] [i_1 + 1]))))), (max((((/* implicit */unsigned long long int) arr_23 [i_0] [i_6 + 1] [i_1 - 1])), (var_7)))));
                    }
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_23 = 1; i_23 < 8; i_23 += 1) 
                {
                    arr_92 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_21 [i_0] [i_1 + 1] [i_23]);
                    arr_93 [i_1] [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */int) arr_36 [i_0] [4LL] [i_0] [i_23 + 3] [i_23 + 3]);
                }
                var_35 = ((/* implicit */unsigned short) var_6);
                arr_94 [i_0] [i_1] = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [(unsigned char)7]);
            }
        } 
    } 
    var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 416545954)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (288230307432235008ULL))))) || (((/* implicit */_Bool) max(((short)448), (((/* implicit */short) var_0)))))));
    var_37 |= ((/* implicit */unsigned short) min(((-(((/* implicit */int) ((((/* implicit */_Bool) 1317716910U)) || (((/* implicit */_Bool) (signed char)18))))))), ((+(((((/* implicit */_Bool) (short)-23109)) ? (var_1) : (((/* implicit */int) var_8))))))));
    /* LoopNest 3 */
    for (unsigned int i_24 = 0; i_24 < 11; i_24 += 4) 
    {
        for (long long int i_25 = 2; i_25 < 10; i_25 += 3) 
        {
            for (short i_26 = 1; i_26 < 10; i_26 += 4) 
            {
                {
                    arr_102 [i_24] [i_25] [i_24] = ((/* implicit */unsigned short) (signed char)-37);
                    arr_103 [i_25] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_35 [i_24] [i_24] [i_26] [i_24] [i_26]))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-28367)) : (((/* implicit */int) (short)-2048))))), (min((0LL), (((/* implicit */long long int) 416545927)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20603)))))) ? (((var_3) & (((/* implicit */int) (short)-23099)))) : (((/* implicit */int) arr_46 [i_26] [i_26] [i_26 - 1] [i_26 - 1] [i_26 + 1])))))));
                    var_38 = ((/* implicit */signed char) (unsigned char)3);
                }
            } 
        } 
    } 
}
