/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143916
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) (-(var_13)));
        var_15 = ((/* implicit */int) (+(var_0)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) -1)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_10 [i_2] [(_Bool)1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1] [i_2])) >> (((/* implicit */int) var_11))));
            var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_9 [(signed char)18] [16U]))));
            var_18 = ((/* implicit */short) ((int) ((((/* implicit */long long int) 741712174)) < (arr_9 [i_1] [i_2]))));
        }
        for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            arr_15 [18ULL] = ((/* implicit */short) ((((/* implicit */_Bool) 15502404776497937157ULL)) ? (((((/* implicit */int) (unsigned short)54471)) + (((/* implicit */int) var_7)))) : (arr_14 [i_1] [i_3] [i_3])));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 4; i_4 < 15; i_4 += 2) 
            {
                arr_20 [i_4 - 3] &= ((/* implicit */long long int) ((((/* implicit */int) (!(var_11)))) != ((+(((/* implicit */int) arr_7 [i_1] [i_3]))))));
                arr_21 [i_1] = ((((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [i_1])), (arr_11 [i_3] [8U])))))) ? ((+(((arr_9 [i_1] [i_4]) - (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_3] [i_3]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (-(arr_9 [i_1] [i_4])))))));
            }
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                var_19 = ((/* implicit */unsigned int) (((((_Bool)0) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) arr_6 [i_3])))) ^ (((((/* implicit */int) ((((/* implicit */unsigned long long int) 1357140915009949386LL)) < (arr_23 [4LL] [i_5] [i_5] [i_5])))) | (((/* implicit */int) arr_11 [i_1] [i_3]))))));
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_20 *= ((int) (-(1023LL)));
                        arr_30 [i_1] [i_5] [6] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_26 [i_5] [i_6] [i_5] [i_5]);
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) 741712174))));
                        var_22 = ((/* implicit */long long int) min((((((/* implicit */_Bool) -1964843690392469962LL)) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_11)))))), (((/* implicit */int) ((((/* implicit */int) (signed char)-25)) != (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_11 [i_1] [i_3])))))))));
                        var_23 |= ((/* implicit */signed char) ((((arr_25 [i_7 - 1] [i_7 - 1] [i_7 - 1] [(signed char)10] [i_7 - 1]) | (arr_25 [i_7 - 1] [i_7] [i_7 - 1] [(signed char)10] [i_7 - 1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) <= (arr_25 [i_7 - 1] [i_7 - 1] [i_7 - 1] [8U] [i_7 - 1])))))));
                    }
                    var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */unsigned long long int) ((1964843690392469961LL) >> (((/* implicit */int) var_7))))) != (max((((/* implicit */unsigned long long int) arr_5 [i_3])), (arr_23 [i_1] [6LL] [i_5] [i_6])))))));
                    arr_31 [i_6] [i_3] [i_3] [i_6] [i_5] = ((/* implicit */signed char) (+(arr_26 [i_1] [2LL] [i_5] [i_5])));
                    arr_32 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_14 [17LL] [i_3] [i_3])) + (9223372036854775807LL)))) != (((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_5] [i_6])) ? (arr_25 [i_1] [i_3] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_5])))))));
                }
                for (unsigned short i_8 = 1; i_8 < 16; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) (+(max((arr_14 [i_1] [i_1] [i_1]), (((/* implicit */int) var_11))))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57365)) ? ((+(((((/* implicit */_Bool) 741712174)) ? (-4025879396071607566LL) : (((/* implicit */long long int) 59800539)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57365))) < (1964843690392469961LL)))))));
                        var_27 = ((/* implicit */_Bool) var_13);
                    }
                    for (int i_10 = 1; i_10 < 18; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((3170798385U) * (((/* implicit */unsigned int) 741712170)))))))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned short)5588), (((/* implicit */unsigned short) arr_34 [i_1] [i_5] [(_Bool)1] [i_5] [(signed char)8]))))), (arr_40 [i_10 - 1] [i_5] [i_8] [i_5] [i_5] [i_1])))) ? (((/* implicit */int) ((signed char) (-(var_10))))) : ((~(((/* implicit */int) (_Bool)1))))));
                    }
                    var_30 = ((/* implicit */long long int) min((var_30), (arr_24 [i_8 - 1] [i_8 - 1] [12ULL] [i_8 - 1] [i_8 + 1] [i_8 + 2])));
                    arr_41 [i_1] [i_5] [i_1] [i_3] [i_5] [i_8] = (i_5 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_8])) ? (((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_39 [i_1] [i_1] [i_5] [i_5] [i_8])) + (30006))))) : (((/* implicit */int) ((((((/* implicit */int) arr_28 [i_5] [(_Bool)1] [i_5])) & (((/* implicit */int) var_5)))) != (((/* implicit */int) (!(var_4)))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_8])) ? (((((/* implicit */int) var_2)) >> (((((((/* implicit */int) arr_39 [i_1] [i_1] [i_5] [i_5] [i_8])) + (30006))) - (55089))))) : (((/* implicit */int) ((((((/* implicit */int) arr_28 [i_5] [(_Bool)1] [i_5])) & (((/* implicit */int) var_5)))) != (((/* implicit */int) (!(var_4))))))))));
                }
                for (unsigned long long int i_11 = 2; i_11 < 18; i_11 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        var_31 ^= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_11 - 1] [i_11 - 1])) && (((/* implicit */_Bool) arr_11 [i_1] [i_3])))));
                        var_32 = ((/* implicit */int) min((var_32), ((-((-(((((/* implicit */int) var_3)) * (((/* implicit */int) arr_39 [i_12] [i_11] [i_12] [i_3] [i_1]))))))))));
                    }
                    var_33 = ((/* implicit */short) var_2);
                    arr_47 [17] [i_3] [i_5] [17] [i_11 - 1] [i_11 - 1] = (((-(((/* implicit */int) arr_5 [i_1])))) - ((+(((((/* implicit */int) var_7)) - (var_13))))));
                }
                for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 3) 
                {
                    var_34 = ((/* implicit */unsigned short) (+(max(((-(var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)13394)) ? (((/* implicit */int) arr_50 [i_13] [i_3] [i_3] [i_1])) : (((/* implicit */int) var_6)))))))));
                    var_35 = var_13;
                    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) arr_45 [i_13 - 2] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 - 2] [i_13 - 1] [i_13 + 1])) ? (((/* implicit */int) arr_45 [i_13 - 1] [i_13 - 1] [i_13 - 2] [i_13 - 1] [i_13 - 2] [i_13 - 1] [i_13 - 2])) : (((/* implicit */int) var_5)))) : ((-(((/* implicit */int) arr_45 [i_13 + 1] [i_13 - 2] [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 - 1])))))))));
                }
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 19; i_14 += 1) 
                {
                    var_37 = ((/* implicit */signed char) ((var_0) < (((/* implicit */unsigned long long int) ((var_10) << (((((/* implicit */int) (short)32764)) - (32764))))))));
                    arr_53 [i_5] [1LL] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_9);
                }
            }
        }
        arr_54 [i_1] [(signed char)13] = ((/* implicit */unsigned short) (short)27078);
    }
    var_38 ^= ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
    var_39 += ((/* implicit */signed char) (+(max(((+(((/* implicit */int) (short)-21440)))), (((/* implicit */int) var_3))))));
    var_40 = ((/* implicit */_Bool) var_5);
}
