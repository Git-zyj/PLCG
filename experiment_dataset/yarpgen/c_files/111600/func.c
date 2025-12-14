/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111600
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
    var_13 = ((/* implicit */unsigned long long int) var_11);
    var_14 = ((/* implicit */_Bool) var_3);
    var_15 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */int) min((max((((((/* implicit */unsigned long long int) arr_1 [i_1])) | (281470681743360ULL))), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])))), (18446744073709551615ULL)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 4; i_2 < 19; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        arr_10 [i_1] [i_1] [10ULL] [(unsigned short)1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_9 [(unsigned char)1] [i_1] [i_1] [i_0])) | (((/* implicit */int) (unsigned char)0)))) % (((/* implicit */int) (unsigned char)177))));
                        arr_11 [i_1] [5U] = ((/* implicit */signed char) 0ULL);
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((long long int) arr_6 [i_1] [i_2 - 4] [i_0] [i_3])))));
                        var_17 = ((/* implicit */short) (-(14ULL)));
                    }
                    arr_12 [i_1] = ((/* implicit */unsigned char) ((unsigned short) 24ULL));
                }
                for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 3) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            var_18 = ((((/* implicit */_Bool) arr_14 [i_4] [i_6] [i_4 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [(signed char)8] [i_1] [i_4 - 3]))) : (arr_18 [i_0] [i_1] [i_4 - 3]));
                            var_19 |= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)0))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            arr_24 [i_1] [(unsigned short)11] [i_1] [i_1] [i_1] = ((((/* implicit */int) (short)-16685)) <= (((/* implicit */int) (unsigned char)255)));
                            arr_25 [i_0] [i_1] [i_1] [18] [i_7] = ((/* implicit */long long int) arr_13 [i_7]);
                            arr_26 [i_1] [(unsigned char)19] [(signed char)18] [i_1] [i_1] = ((/* implicit */unsigned char) (+(8510187199268534201LL)));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((_Bool) arr_22 [i_4 - 3] [i_4] [i_4 - 3] [i_4 - 2] [(unsigned short)14])))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            var_21 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_4 - 3] [i_4 + 1]))));
                            var_22 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                        }
                        arr_30 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_21 [i_0] [i_0]) - (((/* implicit */int) (signed char)87))))) ? (arr_18 [i_0] [i_1] [i_4 - 2]) : (arr_28 [i_4 - 2] [i_4 - 3] [i_4 - 2] [i_4 - 2] [i_4])));
                    }
                    for (unsigned short i_9 = 1; i_9 < 17; i_9 += 2) /* same iter space */
                    {
                        arr_33 [17ULL] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0U)) / (18446744073709551608ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) (signed char)48))) : (18446744073709551608ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)8)) | (((/* implicit */int) var_0)))))));
                        var_23 *= ((/* implicit */unsigned char) max(((~(arr_8 [(unsigned char)3] [i_9 + 3] [i_9 - 1]))), (((((/* implicit */_Bool) arr_8 [i_4] [i_9 + 3] [i_9 + 2])) ? (arr_8 [i_1] [i_9 + 2] [i_9]) : (arr_8 [(_Bool)1] [i_9 + 1] [i_9 + 2])))));
                        arr_34 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0]) * (((/* implicit */unsigned long long int) arr_1 [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max((var_5), (((/* implicit */long long int) arr_13 [i_0]))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) var_10))), (((((/* implicit */int) arr_0 [(unsigned char)15] [i_0])) - (var_10)))))) : (max((((/* implicit */unsigned long long int) ((unsigned short) arr_19 [i_9] [i_4] [i_1] [12ULL] [i_1] [i_0]))), (min((arr_8 [i_0] [(unsigned char)18] [i_9 + 1]), (1094922036486521980ULL))))));
                        arr_35 [i_1] [i_1] [i_1] [i_4] [i_9 - 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_31 [i_0] [i_0] [i_1] [i_1] [i_0] [i_9 + 1]))));
                        arr_36 [i_0] [i_0] [i_1] [i_4] [i_9] [i_9] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (var_11) : (((/* implicit */int) var_2)));
                    }
                    for (unsigned short i_10 = 1; i_10 < 17; i_10 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((unsigned short) var_3)))));
                            arr_41 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-25))) - (arr_23 [i_0] [i_10 + 3] [i_4 - 2] [i_10])));
                            arr_42 [i_1] [i_1] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_38 [i_10] [i_0] [i_10] [i_10]))));
                        }
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                        {
                            arr_45 [i_12] [4ULL] [i_1] [i_1] [(signed char)8] [i_0] = ((/* implicit */int) ((unsigned char) arr_18 [i_10 + 2] [i_4 + 1] [i_4]));
                            var_25 ^= ((/* implicit */long long int) ((unsigned char) arr_28 [(_Bool)1] [i_4 - 2] [i_4 - 3] [i_4 - 2] [i_10 + 2]));
                        }
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (~(((/* implicit */int) ((arr_15 [i_0] [i_4 - 2] [i_4] [i_0]) <= (arr_15 [i_0] [i_4 - 2] [i_4] [i_0])))))))));
                        var_27 = ((/* implicit */long long int) ((short) arr_37 [(unsigned char)13] [i_1] [i_4] [i_10 - 1] [i_4]));
                    }
                    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        var_28 += ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18420)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))) > (-573799223)));
                        arr_48 [i_0] [i_0] [i_1] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (max((((/* implicit */unsigned long long int) arr_6 [i_4 - 1] [i_4 - 1] [i_1] [i_13])), (18446744073709551612ULL))));
                        arr_49 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_13]))) > (0ULL))) ? (((/* implicit */unsigned long long int) arr_18 [i_4 - 3] [i_4 - 3] [i_4 + 1])) : (((((/* implicit */_Bool) arr_19 [i_13] [i_13] [11LL] [i_4] [i_1] [i_0])) ? (17351822037223029611ULL) : (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_4 + 1] [i_4 - 1] [i_1] [i_4 - 1])))) : (max((((((/* implicit */_Bool) (unsigned char)136)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) (-(arr_6 [i_4] [i_1] [i_1] [i_1]))))))));
                    }
                    arr_50 [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) arr_0 [i_4] [i_4]);
                    var_29 = ((/* implicit */short) arr_0 [0] [i_4 + 1]);
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (min(((-(15015075980693210693ULL))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (arr_23 [i_1] [i_4] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))))), (((/* implicit */long long int) ((var_11) ^ (((/* implicit */int) arr_40 [i_1] [i_4] [i_0]))))))))))));
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        for (unsigned long long int i_15 = 1; i_15 < 19; i_15 += 4) 
                        {
                            {
                                var_31 += ((/* implicit */unsigned char) arr_54 [i_14]);
                                var_32 = var_2;
                                var_33 *= ((/* implicit */_Bool) (-(1854988275527107936LL)));
                                var_34 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) : (arr_52 [i_0] [i_4 - 2] [i_15]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_0] [7ULL] [i_14] [i_15])) / (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_15 - 1]))))) ? (((/* implicit */int) arr_47 [i_4] [i_4 + 1] [i_4 - 2] [i_4 - 3] [i_15 - 1])) : (((/* implicit */int) var_1)))))));
                                arr_57 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_4 + 1] [(unsigned short)16] [(unsigned short)16] [i_4] [(signed char)0] [i_4 - 3])))))) + (((unsigned long long int) arr_39 [i_4 + 1] [i_4 - 3] [i_15 - 1] [15]))));
                            }
                        } 
                    } 
                }
                var_35 += ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]);
                var_36 = ((/* implicit */long long int) var_6);
            }
        } 
    } 
}
