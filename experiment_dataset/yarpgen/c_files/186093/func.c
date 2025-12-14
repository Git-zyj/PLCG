/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186093
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] &= ((/* implicit */int) (((-(((((/* implicit */_Bool) 2291070396U)) ? (2291070395U) : (arr_1 [i_1]))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 - 1] [i_2 - 2] [i_2 + 2]))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_2 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_6 [i_2 - 3] [i_2 - 1] [i_2 - 1] [i_1]))) ? ((~(((/* implicit */int) (short)17392)))) : (((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    arr_18 [i_5] [i_4] [(signed char)7] [(signed char)7] = ((/* implicit */unsigned long long int) ((((max((((/* implicit */unsigned int) arr_6 [i_5] [i_4] [i_3] [i_3])), (arr_14 [i_3] [i_3] [i_5]))) >> (((18446744073709551607ULL) - (18446744073709551582ULL))))) != ((~(((2291070394U) >> (((/* implicit */int) (short)7))))))));
                    arr_19 [i_5] [3U] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (17354137696141713881ULL) : (((/* implicit */unsigned long long int) (+(989602835))))));
                    arr_20 [i_3] [0ULL] [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-30062)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)-9)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79))) : (arr_16 [i_3] [i_3] [i_4] [5ULL]))))) != (((unsigned long long int) max((((/* implicit */int) var_11)), (arr_12 [i_3] [i_3] [3U]))))));
                }
                for (short i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        for (int i_8 = 1; i_8 < 12; i_8 += 4) 
                        {
                            {
                                arr_33 [i_3] [i_4] [i_6] [i_7] [i_8] [i_3] = ((/* implicit */unsigned int) var_10);
                                arr_34 [i_6] [i_8 + 1] [i_6] [i_7] [i_8] = (-(var_12));
                                arr_35 [i_3] [3U] [i_4] [i_4] [i_3] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) 367080093U)) ? (((/* implicit */unsigned long long int) 2291070401U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) == (17354137696141713879ULL))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) - (4503599626846208ULL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            {
                                arr_41 [i_10] [i_9] [i_6] [i_4] [i_3] = ((/* implicit */int) ((min((7179467462804690654ULL), (((/* implicit */unsigned long long int) 2003896919U)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((844640499) | (((/* implicit */int) var_2))))) ? (((/* implicit */int) (short)23452)) : (((/* implicit */int) ((signed char) 9223372036854775807ULL))))))));
                                arr_42 [i_4] [i_4] [i_4] [i_4] [i_4] [i_10] = ((/* implicit */unsigned long long int) (+(((arr_12 [i_3] [i_4] [i_9]) / (((/* implicit */int) var_11))))));
                                arr_43 [6ULL] [i_6] = ((((/* implicit */_Bool) (~(min((10521587864244081279ULL), (((/* implicit */unsigned long long int) var_11))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) 3049488017U)) == (4503599626846222ULL)))), ((+(arr_27 [i_3] [i_10])))))) : (((((/* implicit */_Bool) 2291070411U)) ? (755956807U) : (2291070387U))));
                            }
                        } 
                    } 
                    arr_44 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((int) 508567373592957685ULL));
                    arr_45 [i_3] [i_4] [11U] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) 2291070419U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3] [i_6])) ? (((/* implicit */unsigned long long int) 2291070386U)) : (arr_37 [i_3])))) ? (min((((/* implicit */unsigned int) var_8)), (3707144105U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106)))))));
                }
                for (int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    arr_48 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2003896871U)) ? (arr_0 [(signed char)10]) : (var_0)))) == (((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_39 [i_3] [i_4] [i_11])))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_14 [i_3] [i_4] [i_11]))))))));
                    arr_49 [i_11] [i_11] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) 8349121193847452790ULL))))))));
                }
                arr_50 [i_3] [i_4] = ((/* implicit */int) (short)1376);
                arr_51 [10ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22))) & (arr_39 [i_3] [i_4] [i_4])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-19318))))) : (((((/* implicit */_Bool) arr_39 [i_3] [i_3] [i_3])) ? (((unsigned long long int) (signed char)106)) : (arr_4 [i_4] [i_3] [i_3])))));
                arr_52 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15ULL)))))) : (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (11468499894797402936ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) ? ((~(arr_23 [i_3] [i_3] [i_4]))) : (((14595946639909581007ULL) >> (((((-2147483639) - (-2147483615))) + (73))))));
                arr_53 [i_4] = ((/* implicit */unsigned int) (signed char)-92);
            }
        } 
    } 
}
