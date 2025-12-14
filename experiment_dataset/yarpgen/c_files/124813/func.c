/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124813
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
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)167)))), (((/* implicit */int) ((7787587736315221072ULL) <= (((/* implicit */unsigned long long int) -6388377499804545020LL))))))))));
    var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)63)) ? (var_15) : (((((/* implicit */_Bool) 34351349760LL)) ? (((/* implicit */long long int) var_7)) : (6388377499804544999LL)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) ((((-34351349743LL) + (9223372036854775807LL))) >> (((arr_2 [i_0] [i_0]) - (3964855400997114548ULL)))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-1)))) ? (((((/* implicit */unsigned long long int) -34351349755LL)) % (arr_2 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1567)) >> (((((/* implicit */int) (signed char)-79)) + (91))))))));
        arr_5 [i_0] = (-(arr_3 [i_0]));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_10 [i_0] [9ULL] = ((/* implicit */unsigned long long int) (short)22382);
            var_20 = ((/* implicit */_Bool) (-(((-6388377499804544995LL) - (((/* implicit */long long int) 3748955031U))))));
            arr_11 [i_0] = ((/* implicit */unsigned short) ((arr_8 [i_0] [i_0] [i_1]) ^ (arr_8 [i_0] [i_1] [i_1])));
        }
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_15 [i_2] = ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1643))) : (-34351349775LL));
        arr_16 [i_2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) (short)-22394))));
        arr_17 [i_2] [i_2] = ((/* implicit */unsigned short) (signed char)64);
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_20 [i_3] = ((/* implicit */unsigned char) (+(arr_18 [(_Bool)1] [i_3])));
        arr_21 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3] [i_3])) ? (arr_19 [i_3] [i_3]) : (arr_18 [i_3] [i_3])));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    var_21 = ((/* implicit */int) ((arr_24 [i_3] [i_4] [i_5] [i_5]) | (((/* implicit */long long int) ((((/* implicit */_Bool) -494734178)) ? (281626126) : (2147483646))))));
                    /* LoopSeq 2 */
                    for (short i_6 = 1; i_6 < 18; i_6 += 2) 
                    {
                        var_22 = ((((/* implicit */_Bool) (signed char)-120)) ? (arr_22 [i_6 + 1] [i_6 + 1] [i_6 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_3])) ? (0) : (((/* implicit */int) arr_25 [i_3] [i_4] [i_5] [i_6]))))));
                        var_23 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_3] [i_4] [i_5] [i_6]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2147483642)) && (((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */int) (_Bool)1)));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_33 [i_3] [i_4] [i_5] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4501))) : (0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65))) : (((((/* implicit */_Bool) arr_24 [5LL] [i_4] [i_5] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_3] [i_4] [i_5] [i_7]))) : (arr_27 [i_3] [i_4] [i_4] [i_3] [i_7] [9])))));
                            arr_34 [i_3] [i_4] [i_5] [i_7] [i_8] = 5162806638242966556ULL;
                            arr_35 [i_3] [i_4] [i_5] [i_7] [i_8] = ((/* implicit */signed char) (-(((((/* implicit */int) (short)22397)) * (((/* implicit */int) (short)-22375))))));
                            arr_36 [i_3] [i_4] [i_4] [(short)1] [(signed char)8] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_4] [i_5] [i_7] [i_8])) ? (((((/* implicit */int) arr_30 [i_3] [(_Bool)1] [i_5] [i_7] [i_8])) / (((/* implicit */int) (unsigned short)65529)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-22397)) && (arr_30 [i_3] [i_4] [i_5] [15ULL] [i_4]))))));
                        }
                        for (unsigned short i_9 = 1; i_9 < 18; i_9 += 1) 
                        {
                            arr_40 [i_9] [i_4] [i_9] [i_7] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))));
                            arr_41 [i_9] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 1] [i_9] [i_9 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_5])) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) (short)-32758))))) : (((((/* implicit */_Bool) arr_32 [16LL] [16LL] [16LL] [(_Bool)1] [i_7] [i_9] [16LL])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_39 [i_3] [i_3] [15ULL] [i_7] [i_9])))));
                            arr_42 [i_3] [i_3] [0LL] [i_7] [i_9] = ((/* implicit */signed char) ((arr_19 [i_9 - 1] [i_9 - 1]) / ((+(arr_37 [i_3] [i_4] [i_5] [i_3] [i_7] [i_9])))));
                        }
                        arr_43 [i_4] = ((/* implicit */unsigned char) 3254727463961610592LL);
                        var_24 = ((/* implicit */short) ((((2147483647) <= (((/* implicit */int) (signed char)107)))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)-7630)) & (503218140))))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_10 = 2; i_10 < 21; i_10 += 4) 
    {
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_45 [i_10 + 1] [i_10 - 1]), (((/* implicit */unsigned long long int) 1730035744))))) ? (((((/* implicit */_Bool) arr_45 [i_10 - 1] [i_10 + 1])) ? (6597912739899884497LL) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_10 - 2] [i_10 - 1]))))) : ((-(-4940472331817970867LL)))));
        arr_48 [(unsigned char)11] [11U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_10 + 1] [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_10 - 2] [i_10 - 1]))) : (18446744073709551593ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_10] [i_10]))))) >> (((/* implicit */int) (!((_Bool)1))))))) : (arr_45 [i_10] [15LL])));
        var_26 = ((/* implicit */long long int) max((-2147483640), ((-(max((((/* implicit */int) (signed char)117)), (461643227)))))));
        arr_49 [i_10] = 5ULL;
    }
}
