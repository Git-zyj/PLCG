/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182002
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
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_7 [(signed char)17] [(unsigned char)3] [i_2])), (9688151572232208914ULL))), (((((/* implicit */unsigned long long int) arr_6 [i_1])) - (9688151572232208914ULL)))))) ? (min((min((var_4), (((/* implicit */unsigned int) (unsigned short)2)))), (((2035923452U) - (var_14))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 350134557U)) ? (6141429270261843228ULL) : (((/* implicit */unsigned long long int) 2035923452U))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_3 [i_1])))))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_12 [i_1] = ((/* implicit */short) ((min((1720524342U), (((/* implicit */unsigned int) 2147483647)))) < (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))), (((((/* implicit */_Bool) (short)-1865)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) var_19)))))))));
                        var_21 += ((/* implicit */unsigned char) min((min((var_1), (((/* implicit */long long int) var_18)))), (arr_4 [i_2])));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            arr_16 [i_0 - 2] [(unsigned char)11] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1] [i_1]);
                            arr_17 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) min((var_13), (((/* implicit */short) arr_1 [0U]))));
                        }
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) var_13);
                            arr_20 [i_1] = ((/* implicit */long long int) (unsigned char)198);
                            arr_21 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) var_16)), (var_6)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 17; i_6 += 1) 
                        {
                            var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (6917491270877416169LL) : (((((/* implicit */_Bool) (short)-32249)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (2500864951489923330LL)))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((long long int) 7111616964833036319LL)))));
                            arr_24 [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [14LL]);
                        }
                        for (unsigned char i_7 = 1; i_7 < 16; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) 3054230102U)) ? (12305314803447708388ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))), (min((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) 504048793)), (var_6))))))))));
                            var_26 = ((/* implicit */_Bool) ((unsigned long long int) (signed char)-41));
                            arr_29 [i_7] [(unsigned short)11] [i_1] [i_1] [i_1] [(unsigned short)13] = ((/* implicit */unsigned short) (short)-7945);
                        }
                    }
                    for (long long int i_8 = 2; i_8 < 15; i_8 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned short) var_17);
                            var_28 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [(unsigned short)5] [i_1] [i_8] [i_8 + 2] [i_8 - 2] [i_8]))) ^ (8284805U));
                            var_29 = ((/* implicit */signed char) (+(1073741824U)));
                            arr_37 [i_1] = ((/* implicit */unsigned int) -830596036431304961LL);
                            arr_38 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) 6141429270261843228ULL));
                        }
                        for (signed char i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            arr_43 [i_1] [i_8] [i_8] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-3694)))))));
                            arr_44 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_1] = min(((((_Bool)0) ? (((/* implicit */long long int) ((var_9) << (((((/* implicit */int) var_12)) - (63)))))) : (min((((/* implicit */long long int) var_0)), (-6917491270877416157LL))))), (((/* implicit */long long int) var_15)));
                            arr_45 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((min((var_10), (((/* implicit */unsigned int) var_3)))) >> (min((2035923452U), (((/* implicit */unsigned int) (_Bool)1))))));
                            var_30 = ((((/* implicit */_Bool) 7619010742207898043ULL)) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 63189536U)) ? (1467006503) : (((/* implicit */int) arr_35 [i_0] [i_0] [i_1] [i_2] [i_8 + 1] [i_10]))))) & (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [17ULL] [17ULL]))) != (arr_0 [i_8 + 1]))))));
                            var_31 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (9808521712254842607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) || (((/* implicit */_Bool) arr_8 [i_8 + 1] [i_10] [i_10] [i_10])))) ? ((+((-(((/* implicit */int) arr_41 [i_0] [i_10] [i_2] [i_8 - 1] [i_10])))))) : (((/* implicit */int) min((arr_22 [i_0 - 1] [i_8 + 2] [i_0 - 1]), (((/* implicit */unsigned short) var_17)))))));
                        }
                        for (unsigned long long int i_11 = 3; i_11 < 16; i_11 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned char) var_0);
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))))) / ((-(var_6)))))) ? (arr_0 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) arr_15 [i_0 - 2] [i_2] [i_2] [i_2] [i_8] [i_8 + 1] [i_11 + 1]))))))));
                            arr_48 [i_11 + 2] [i_1] [2LL] [i_1] [i_11] = min((((/* implicit */long long int) (_Bool)0)), (-4029614032569558547LL));
                            var_34 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(1467006503)))), (((((/* implicit */_Bool) ((int) var_6))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)40), (((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0] [i_1]))))))))));
                            var_35 = (i_1 % 2 == zero) ? ((+(((var_6) << (((/* implicit */int) arr_42 [i_1])))))) : ((+(((var_6) << (((((/* implicit */int) arr_42 [i_1])) + (98)))))));
                        }
                        arr_49 [i_1] [11LL] [(unsigned char)2] [i_1] = ((/* implicit */int) var_12);
                        var_36 = ((/* implicit */long long int) min((min((((/* implicit */int) (signed char)-14)), (arr_8 [3U] [i_8 + 2] [i_8] [i_8]))), ((-(min((((/* implicit */int) arr_5 [i_1] [i_1] [i_2])), (492482205)))))));
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_0 + 1])))) ? (min((((/* implicit */unsigned int) var_18)), (arr_0 [i_0 - 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) * (arr_0 [i_0 - 1])))));
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 3944164509U))))) + (((((/* implicit */_Bool) 4111722261U)) ? (((/* implicit */int) arr_46 [i_8] [i_8] [i_8 + 1] [i_8 + 3] [i_8 - 2])) : (arr_13 [i_8 - 2] [i_8 - 2] [i_1] [i_1] [i_8] [i_2] [i_1])))));
                    }
                }
            } 
        } 
    } 
    var_39 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_3))))))));
}
