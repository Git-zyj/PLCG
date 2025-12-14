/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144047
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_10 = ((/* implicit */unsigned char) max((((min((var_1), (((/* implicit */unsigned int) var_8)))) / (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_2] [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned int) max((min((arr_1 [i_2]), (arr_1 [i_0]))), ((_Bool)1))))));
                    arr_7 [i_0] [(short)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (short)31896)), (((((/* implicit */_Bool) (short)31908)) ? (((/* implicit */int) arr_6 [i_2] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_9))))))) ? (max((((/* implicit */unsigned long long int) var_7)), (6095828794798500638ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48574)))));
                    var_11 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_4))))) : ((+(12403590962022320746ULL)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_12 = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) var_7))))) ? (((12403590962022320746ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */unsigned long long int) 2323713712U)))) : (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) var_4)), (1764079767U)))))));
                                var_13 = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] [i_4]);
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    var_14 = ((/* implicit */unsigned short) arr_4 [i_1]);
                    arr_16 [i_5] [5LL] [i_0] = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_1] [i_0]);
                    var_15 = (+(11019277754167870830ULL));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */int) var_4);
                        arr_19 [i_5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (var_3)))) ? (var_3) : (arr_4 [i_1])));
                    }
                }
                var_17 = max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_1)) : (6043153111687230870ULL))), (((arr_4 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        arr_22 [i_7] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_20 [i_7]))))));
        /* LoopSeq 3 */
        for (int i_8 = 3; i_8 < 13; i_8 += 3) 
        {
            arr_26 [i_7] [i_7] [i_8] = ((/* implicit */_Bool) arr_25 [i_8]);
            var_19 *= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16961)) || (((/* implicit */_Bool) 2323713727U))))), (2139963115)));
            arr_27 [i_8] [i_8] = ((/* implicit */_Bool) max((max((max((((/* implicit */unsigned int) (_Bool)1)), (var_1))), (((/* implicit */unsigned int) ((int) var_5))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_24 [i_8] [i_8 + 1] [i_7])))))));
        }
        for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_10 = 3; i_10 < 14; i_10 += 4) 
            {
                for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    for (short i_12 = 3; i_12 < 13; i_12 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) max((arr_29 [i_7] [i_9]), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_29 [i_11] [i_12])))));
                            var_21 = ((/* implicit */signed char) arr_36 [i_7] [i_9] [i_10] [i_11]);
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) / ((((_Bool)1) ? ((-(((/* implicit */int) var_4)))) : (((((/* implicit */int) var_4)) & (((/* implicit */int) arr_34 [i_7] [i_7] [i_7]))))))));
                            arr_40 [i_10] [i_11] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (short)3682)) : (((/* implicit */int) (unsigned char)45))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(2530887528U)))) ^ ((+(18042228446783810263ULL)))));
            var_24 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)59)) >> (((/* implicit */int) (_Bool)1))));
        }
        for (short i_13 = 3; i_13 < 13; i_13 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                {
                    var_25 = ((/* implicit */signed char) min((((((/* implicit */int) arr_46 [i_15] [i_14] [i_13])) ^ (((/* implicit */int) arr_43 [i_13 - 2])))), ((~(((/* implicit */int) (short)9550))))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min((((/* implicit */unsigned int) 8191)), ((+((+(var_1))))))))));
                }
                for (short i_16 = 2; i_16 < 14; i_16 += 3) 
                {
                    arr_52 [i_13] = ((/* implicit */unsigned long long int) ((short) arr_24 [i_7] [i_7] [i_14]));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (arr_45 [i_7] [i_7] [i_13] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63571))))) << (((877875880) - (877875869)))))) | ((((~(-5486397569428220861LL))) ^ (((/* implicit */long long int) 1971253583U))))));
                    arr_53 [i_13] [(short)8] [i_14] [i_14] [i_14] = ((/* implicit */int) var_5);
                }
                arr_54 [i_13] [i_13 + 2] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_13 + 2] [i_13 - 2] [i_13 + 1])) + (((/* implicit */int) arr_34 [i_13 + 1] [i_13 - 3] [i_13 - 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)125)) >> (((((/* implicit */int) var_6)) - (81)))))))) : (18446744073709551615ULL)));
                var_28 = ((/* implicit */_Bool) var_0);
                arr_55 [i_7] [i_13 - 3] [i_7] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) / (max((1971253589U), (3846195586U)))));
            }
            var_29 = ((/* implicit */_Bool) var_5);
        }
    }
    var_30 = ((/* implicit */short) (-(((((var_2) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) / (((/* implicit */int) var_9))))));
    /* LoopSeq 3 */
    for (unsigned short i_17 = 1; i_17 < 19; i_17 += 3) 
    {
        var_31 = ((/* implicit */long long int) var_1);
        var_32 = ((/* implicit */unsigned short) ((15573540038132048343ULL) - (2228755406468870695ULL)));
        var_33 = ((/* implicit */int) max((((signed char) ((2332332118U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113)))))), (((/* implicit */signed char) (_Bool)1))));
    }
    for (unsigned int i_18 = 0; i_18 < 21; i_18 += 3) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_59 [(short)12])))) ? (((((/* implicit */_Bool) arr_59 [16ULL])) ? (arr_59 [(unsigned char)2]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))))))));
        var_35 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_60 [i_18]))) % (arr_59 [i_18])))), (min((((/* implicit */unsigned long long int) (unsigned char)227)), (var_3)))));
        arr_62 [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (arr_59 [i_18])))) && (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_59 [i_18]))))));
    }
    for (unsigned int i_19 = 0; i_19 < 21; i_19 += 3) /* same iter space */
    {
        arr_65 [i_19] = ((/* implicit */unsigned long long int) ((long long int) min((arr_60 [i_19]), (((/* implicit */signed char) arr_63 [i_19])))));
        arr_66 [i_19] = ((/* implicit */unsigned short) (short)-8981);
        arr_67 [i_19] [i_19] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (min((arr_61 [i_19] [18U]), (((/* implicit */unsigned long long int) (unsigned short)65535))))));
    }
}
