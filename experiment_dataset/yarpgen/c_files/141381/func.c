/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141381
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        var_12 |= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (562932773552128LL) : (((/* implicit */long long int) arr_1 [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 4; i_2 < 14; i_2 += 2) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_0 [i_1] [i_1])))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_13 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 - 3] [i_4]))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 562932773552136LL)) ? (-562932773552129LL) : (562932773552128LL)))) ? (((/* implicit */unsigned long long int) (-(var_0)))) : (min((var_6), (((/* implicit */unsigned long long int) arr_9 [(unsigned char)8] [i_1] [i_2 - 3] [i_1])))))));
                    var_14 = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
                    arr_14 [i_1] [13U] [i_3] [i_4] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2 + 1])) ? (arr_4 [i_2 + 2] [i_2 + 1]) : (arr_4 [i_2 + 2] [i_2 + 1])))));
                    var_15 = ((/* implicit */unsigned char) arr_1 [i_1]);
                    arr_15 [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_2])) | (((/* implicit */int) arr_13 [i_4]))));
                }
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_16 -= ((/* implicit */short) ((max((-562932773552139LL), (((/* implicit */long long int) var_2)))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 + 2] [i_5] [i_6 + 1]))))))));
                        var_17 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 4294967295U)) : (-562932773552129LL))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((562932773552142LL) - (562932773552142LL)))))))) >= (var_5)));
                        arr_20 [i_1] [i_2] [i_1] [i_5] [i_6 + 1] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_1])) && (((/* implicit */_Bool) 17381271201844515475ULL)))), (arr_19 [i_2 - 1] [i_2] [i_2] [i_2] [i_2 - 2] [3U]))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) ((1846940838318984552LL) == (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_5]))))))))));
                        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2 - 4] [i_3] [i_5])) || (((/* implicit */_Bool) arr_9 [i_1] [i_3] [i_1] [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_2 - 4])))))))) : (((/* implicit */int) (signed char)-50))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [i_7] [i_5] [i_3] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) 1548904114U);
                        arr_26 [i_1] [i_2 - 2] [i_7] [i_5] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_7])) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65507))))) : ((~(-7535158707945300792LL)))));
                        var_19 = ((/* implicit */unsigned long long int) -1846940838318984553LL);
                        var_20 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) var_4)), (max((max((((/* implicit */long long int) arr_9 [i_7] [i_5] [i_2 - 4] [i_1])), (1846940838318984538LL))), (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_3] [i_5])))))))));
                        var_21 = ((/* implicit */long long int) max((var_21), (max((((((/* implicit */_Bool) arr_13 [i_3])) ? (((((/* implicit */_Bool) 1846940838318984539LL)) ? (562932773552142LL) : (1846940838318984546LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (var_5)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) / (-5531445857976102195LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 + 2] [i_5]))) : (arr_4 [i_1] [i_3]))))))));
                        var_23 |= ((/* implicit */signed char) (-((+(arr_4 [i_2 - 1] [i_2])))));
                        var_24 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) ((unsigned char) -7535158707945300792LL))) & (((/* implicit */int) arr_17 [i_1] [i_2 - 3] [i_2 - 3] [i_3] [i_8])))));
                    }
                    arr_29 [i_5] [i_3] [i_2] [i_1] = ((/* implicit */signed char) min(((+(((/* implicit */int) ((short) (_Bool)0))))), ((~((((_Bool)1) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) var_2))))))));
                    arr_30 [i_2 - 3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)1376)), (max((-763095357724664932LL), (((/* implicit */long long int) arr_5 [i_2 - 3] [i_5])))))))));
                }
                for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    var_25 = ((/* implicit */short) (+((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)32753))) : (-1846940838318984548LL)))));
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        arr_38 [i_2] [i_9] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_9] [i_9] [i_3] [i_2] [i_1] [i_1])) ? (17381271201844515492ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20362)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_1] [i_2] [i_2] [i_3] [(short)15] [i_10]))))) : (((long long int) 17381271201844515519ULL)))) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((var_8), (arr_4 [i_3] [i_2]))))))));
                        var_26 = ((/* implicit */short) (((+(arr_12 [i_2 - 2] [(unsigned char)11] [i_2 - 2] [i_9] [i_10] [i_2 - 2]))) & ((+(arr_12 [i_2 - 4] [i_2 + 2] [0] [i_10] [i_10] [i_9])))));
                    }
                    for (short i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32740)) ? ((+(((((/* implicit */int) (short)-13728)) | (((/* implicit */int) (unsigned short)45187)))))) : (((/* implicit */int) ((-1846940838318984549LL) >= (((/* implicit */long long int) ((arr_35 [i_9] [i_2] [i_9] [i_9] [i_9] [i_11]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))))));
                        arr_42 [i_1] [i_2 - 2] [i_9] [i_11] [i_11] = ((/* implicit */unsigned char) max((((max((1065472871865036103ULL), (((/* implicit */unsigned long long int) arr_7 [i_9] [(signed char)15])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_9] [i_2] [i_3] [i_3] [i_9] [i_11]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20358)) ? (((((/* implicit */int) (short)-1936)) & (((/* implicit */int) (unsigned short)25)))) : (((/* implicit */int) (unsigned char)59)))))));
                        arr_43 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((568917786414248875ULL) << (((((long long int) arr_5 [i_2 + 3] [i_1])) - (170LL)))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 562932773552128LL)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_34 [i_9] [i_9])))) || (((((/* implicit */_Bool) arr_11 [i_2 - 3] [10])) && (((/* implicit */_Bool) arr_11 [i_2 - 3] [i_2 - 3]))))));
                    }
                }
                arr_44 [i_1] [i_2 - 3] [i_2 - 3] [i_1] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_21 [i_2 - 2] [i_2 - 2] [i_3] [i_1] [i_1] [i_2])) ? (arr_21 [i_2 - 1] [i_2] [i_2] [i_2 + 1] [1LL] [i_1]) : (arr_21 [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_1] [i_3] [i_2 - 4]))));
            }
        }
        for (unsigned int i_12 = 1; i_12 < 14; i_12 += 3) /* same iter space */
        {
            var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */_Bool) 1065472871865036130ULL)) ? (((/* implicit */int) (unsigned short)20349)) : (((/* implicit */int) (_Bool)1))))));
            arr_48 [i_12] = ((/* implicit */_Bool) (~(((max((((/* implicit */long long int) arr_47 [i_1])), (3481235242223916663LL))) - (((/* implicit */long long int) (+(((/* implicit */int) (short)-1947)))))))));
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 15; i_13 += 2) 
            {
                for (unsigned char i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    for (short i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_49 [i_15] [i_12] [i_12] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1]))) : (var_8))) | (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)124)), (1498012752U))))))) : ((~(((((/* implicit */_Bool) 562932773552113LL)) ? (arr_6 [i_13] [i_14] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117)))))))));
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_47 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_12] [i_13] [i_14]))) : (var_8))))))))));
                        }
                    } 
                } 
            } 
            var_32 = ((max(((!((_Bool)1))), ((!(((/* implicit */_Bool) arr_28 [i_1] [1ULL])))))) && (((/* implicit */_Bool) arr_31 [i_1] [i_12 + 1] [i_12 + 3] [i_12])));
        }
        for (unsigned int i_16 = 1; i_16 < 14; i_16 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_17 = 0; i_17 < 17; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        arr_66 [i_16 - 1] [i_16] [i_18] [i_16 - 1] [i_1] [i_18] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_17] [i_16 + 1])) ? (((/* implicit */int) arr_35 [i_1] [i_16 + 2] [i_17] [i_17] [i_18] [14LL])) : (((/* implicit */int) arr_60 [i_17] [i_16 + 3] [i_1]))))) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-117)), (arr_2 [i_17]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : ((-(((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        var_33 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [(unsigned char)2] [i_17] [i_17] [i_1]))) / (arr_51 [i_17] [i_16])))));
                    }
                } 
            } 
            arr_67 [i_1] [i_16] = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_32 [i_16] [i_16 + 3] [i_16] [i_16 + 3]), (arr_32 [i_1] [i_16 - 1] [i_1] [i_16 + 2])))) - (((/* implicit */int) (signed char)-79))));
            arr_68 [i_1] [i_16 + 3] = ((/* implicit */unsigned char) arr_50 [i_1] [i_1] [i_16 - 1] [i_16 + 3]);
        }
        arr_69 [i_1] [i_1] = ((/* implicit */unsigned int) 1065472871865036140ULL);
    }
    var_34 = ((/* implicit */signed char) max((-7759549610433054532LL), (((/* implicit */long long int) (_Bool)1))));
    var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1484324535254686503LL))));
    var_36 = ((/* implicit */short) var_0);
    var_37 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 1846940838318984548LL)), (((((((/* implicit */_Bool) 14238725041615238053ULL)) ? (((/* implicit */unsigned long long int) var_3)) : (17381271201844515475ULL))) % (((/* implicit */unsigned long long int) max((var_5), (var_5))))))));
}
