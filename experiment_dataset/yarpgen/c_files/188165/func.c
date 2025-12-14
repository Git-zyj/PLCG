/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188165
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) (short)32767)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-32758)))))))))));
    var_12 -= (((+(((int) 17592186044415ULL)))) & (var_8));
    var_13 = ((/* implicit */short) (unsigned char)179);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((16761639957481822938ULL) + (((/* implicit */unsigned long long int) var_3))))) ? ((-(((/* implicit */int) (short)32737)))) : (-1730126376)));
        arr_2 [i_0] [(short)14] &= ((((/* implicit */_Bool) ((long long int) 18446726481523507200ULL))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)32756)) ? (((/* implicit */int) arr_0 [(short)2] [i_0])) : (((/* implicit */int) arr_0 [8] [i_0]))))))) : (((long long int) (_Bool)1)));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_6 [i_1] |= ((/* implicit */long long int) var_10);
        arr_7 [i_1] = ((/* implicit */_Bool) ((((((18446726481523507201ULL) << (((((/* implicit */int) (signed char)-64)) + (68))))) & ((~(5165273667096148813ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1]))) < (12644766248986861785ULL)))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_2] [i_3] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) arr_11 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_11 [i_3] [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            {
                                arr_20 [i_1] [(unsigned char)2] [i_4] [i_5] = ((/* implicit */short) 8264165889813730502LL);
                                var_15 -= ((/* implicit */long long int) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) var_10);
            arr_27 [i_6] [6LL] [i_7] = ((/* implicit */signed char) var_9);
            var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (short)18998))))))) ? ((+(((/* implicit */int) arr_0 [i_7] [i_7])))) : ((~(((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */int) (_Bool)1)) : (847058442)))))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            arr_30 [i_6] [12ULL] [i_6] &= arr_28 [i_6] [i_8];
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5806)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60348))) : (1685104116227728678ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8] [i_6] [10ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8]))) : (arr_22 [i_6]))))));
        }
        var_19 *= ((/* implicit */unsigned int) ((int) ((arr_0 [12LL] [i_6]) ? (((/* implicit */int) arr_0 [(unsigned char)8] [i_6])) : (((/* implicit */int) arr_0 [(short)20] [i_6])))));
        var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (((((/* implicit */_Bool) (short)-3004)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_6] [i_6]))) : (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 324896864)) ? (((/* implicit */int) arr_26 [i_6] [i_6] [i_6])) : (((/* implicit */int) (signed char)43)))))))) ? (0) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) 1821977303U)))))))));
        var_21 -= arr_29 [i_6] [i_6];
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                {
                    var_22 -= (((!(((/* implicit */_Bool) arr_22 [i_6])))) ? (((((/* implicit */long long int) arr_22 [i_9])) | (3001528089622286467LL))) : (((/* implicit */long long int) (-(arr_22 [i_9])))));
                    arr_36 [i_6] [i_9] [i_10] [(_Bool)1] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_6] [i_6] [0ULL])) ? (18446726481523507221ULL) : (((/* implicit */unsigned long long int) arr_24 [i_6] [(_Bool)1] [i_10]))))) ? (((/* implicit */unsigned long long int) arr_28 [i_6] [i_10])) : (((((/* implicit */_Bool) arr_24 [i_10] [i_9] [i_6])) ? (arr_34 [i_6] [i_9] [9U]) : (((/* implicit */unsigned long long int) arr_28 [i_9] [(unsigned short)5]))))));
                    var_23 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) != (((((/* implicit */_Bool) 17592186044415ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58846))) : (var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 847058426))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) 8883746832963997971LL))))))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_29 [i_10] [i_9]))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 1) 
                        {
                            {
                                arr_41 [i_9] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65510)) ? (min((arr_38 [i_9] [i_9] [i_10] [i_11] [i_12] [i_6]), (((/* implicit */long long int) var_6)))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_22 [i_6])) - (arr_35 [i_11] [i_9] [i_10])))) ? (arr_31 [i_9]) : (arr_35 [(_Bool)1] [i_9] [i_10])))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (arr_32 [i_11]) : (((/* implicit */int) ((short) 2761766394U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_13 = 0; i_13 < 25; i_13 += 2) 
    {
        arr_44 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4887030047462683504LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11903))) : (16761639957481822911ULL)))) ? (((/* implicit */unsigned long long int) ((int) (unsigned short)33))) : (1685104116227728678ULL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_43 [i_13])) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 573875780U)) ? (((/* implicit */int) arr_42 [i_13] [21])) : (((/* implicit */int) arr_43 [20]))))))));
        var_26 = ((/* implicit */long long int) ((short) 6653227521283750600ULL));
    }
    var_27 &= ((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))));
}
