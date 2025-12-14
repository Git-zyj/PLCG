/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166086
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
    for (int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_1] [i_2] [i_3] [i_4 - 1] [0LL] [i_4] = ((((/* implicit */int) (unsigned char)133)) == (((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2])) ? (((/* implicit */int) (short)-13387)) : (-965179998))) & ((-(((/* implicit */int) (signed char)55)))))));
                                arr_17 [i_4 - 1] [i_4] [i_4] [7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 965179998)) ? (((/* implicit */int) arr_8 [i_4] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_7 [i_3])))) != (((/* implicit */int) var_12))));
                                arr_18 [i_4] = ((/* implicit */short) (+(max((((/* implicit */unsigned int) (-(965179997)))), (((((/* implicit */_Bool) -9026355969384008206LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13387))) : (var_13)))))));
                            }
                        } 
                    } 
                    var_18 &= ((/* implicit */_Bool) max((((/* implicit */long long int) (short)-13387)), (((long long int) ((-791598261) / (-965179995))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(((((/* implicit */_Bool) max((-1792918967806210564LL), (((/* implicit */long long int) arr_7 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-26916)) <= (arr_12 [i_0] [(unsigned char)1] [(unsigned char)1]))))) : (min((1021160033U), (((/* implicit */unsigned int) 965180007)))))))))));
                        var_20 = ((/* implicit */signed char) var_0);
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_1] [i_1])) / (791598278)))), (max((9026355969384008218LL), (((/* implicit */long long int) 0U))))))) || (((/* implicit */_Bool) max((arr_14 [9] [9] [i_2] [i_5] [i_5]), (((/* implicit */long long int) min(((unsigned short)9153), ((unsigned short)12611))))))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        for (signed char i_7 = 1; i_7 < 13; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            arr_37 [i_6] [(unsigned char)7] [i_8] [i_9] [i_9] [i_9] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_30 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]))));
                            var_22 ^= ((/* implicit */unsigned long long int) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) | (-7385185083188533054LL))) + (9223372036854775807LL))) << (((((arr_29 [(unsigned short)7] [6LL] [i_9] [10]) | (8465966869293712776ULL))) - (18302606706246075786ULL)))));
                        }
                        var_23 = ((/* implicit */_Bool) (short)-13385);
                        arr_38 [i_6] [i_7] [i_7] [i_9] = ((/* implicit */int) ((4897208632182226516ULL) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_6] [i_7])))))));
                        arr_39 [13] [i_7] [i_8] [i_9] = ((((/* implicit */_Bool) max((arr_14 [(unsigned short)6] [(unsigned short)6] [11LL] [(unsigned short)6] [(unsigned short)8]), (((/* implicit */long long int) arr_32 [i_6] [i_7] [i_7 + 1] [i_9] [i_9]))))) ? (((((/* implicit */_Bool) arr_6 [(short)4] [i_7 + 1] [i_7] [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8064))) : (arr_6 [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]))) : (min((max((4808778628418371626LL), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) arr_26 [i_7])))));
                    }
                    for (short i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        arr_43 [(unsigned char)3] [5ULL] [13] [i_6] [13] [i_6] = ((/* implicit */unsigned char) (short)26895);
                        arr_44 [i_6] [i_6] [7LL] [i_8] [i_11] = ((/* implicit */unsigned long long int) (~(max((9223372036854775807LL), (((/* implicit */long long int) (+(965180004))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) 
                        {
                            var_24 &= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_42 [i_8])) ? (((/* implicit */int) (short)3666)) : (((/* implicit */int) (short)-31614)))));
                            arr_50 [i_6] [i_7] [i_13] [i_13] = ((/* implicit */unsigned char) ((arr_3 [i_7 - 1] [i_7 + 1]) == (((/* implicit */unsigned int) ((int) var_14)))));
                            var_25 ^= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_49 [i_6] [i_7 + 1] [i_8] [0ULL] [i_13])) | (((/* implicit */int) arr_47 [(unsigned char)4])))));
                        }
                        for (int i_14 = 0; i_14 < 14; i_14 += 1) 
                        {
                            arr_54 [(_Bool)1] [(unsigned char)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)3679)) : (1878680259)))) ? (((/* implicit */int) ((unsigned char) (unsigned char)157))) : (((/* implicit */int) (short)-3671))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_6] [i_8] [i_8] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_14]))) : (0U)))) ? (1204796309U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))));
                            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_48 [i_12]))));
                            arr_55 [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_45 [i_7 - 1] [i_7 + 1])) / (((/* implicit */int) arr_45 [i_7 + 1] [i_7 - 1]))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_52 [(unsigned char)7] [(unsigned char)7] [13U] [(unsigned char)7] [i_14])))))));
                        }
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_7 - 1] [i_7 + 1])) ? (140737488355326ULL) : (((/* implicit */unsigned long long int) arr_3 [i_7 - 1] [i_7 + 1]))));
                    }
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        var_30 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(-524288)))))) ? (((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((arr_20 [i_8]) | (((/* implicit */unsigned long long int) 2862634205099248529LL)))) : (((/* implicit */unsigned long long int) max((4294967271U), (1845898182U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-3679), ((short)26897)))))));
                        var_31 = ((/* implicit */long long int) (-((-(arr_24 [i_7 + 1])))));
                    }
                    arr_59 [i_6] [i_7] [i_8] = ((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_24 [(short)5]), (140737488355357ULL)))) ? (arr_42 [i_7 + 1]) : ((-(((/* implicit */int) arr_27 [i_6]))))))) <= (min((((/* implicit */long long int) ((((/* implicit */_Bool) -1749385995)) || (((/* implicit */_Bool) arr_31 [i_6] [(unsigned short)7] [i_8] [i_8]))))), (((-2862634205099248529LL) * (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6]))))))));
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)103)) - (102)))))) ? (((((/* implicit */_Bool) 26755484U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30))) : (18446603336221196290ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65530), ((unsigned short)27239))))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 715183913)) ? (((/* implicit */int) (unsigned short)56532)) : (((/* implicit */int) arr_13 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))))))))));
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)30))))) : (((18446603336221196289ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)140)))))))));
}
