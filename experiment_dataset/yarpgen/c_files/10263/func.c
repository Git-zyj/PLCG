/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10263
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
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_9)), ((~(((((/* implicit */unsigned long long int) 1219791477)) / (var_18)))))));
    var_21 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_22 &= ((/* implicit */unsigned int) ((450823163753799047LL) / (-2899851991885291759LL)));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) var_9);
                var_23 = ((/* implicit */signed char) var_17);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_11))))))), (((((/* implicit */int) arr_9 [i_2])) >> (((((/* implicit */int) arr_9 [i_2])) - (12108)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            arr_12 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8800016495412595296ULL))));
            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 + 1])) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3]))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_7 = 2; i_7 < 24; i_7 += 2) 
                    {
                        arr_25 [3] [i_5] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) > (((unsigned long long int) var_18)))) && (((/* implicit */_Bool) ((unsigned int) (unsigned short)32345)))));
                        arr_26 [i_5] [18LL] = arr_23 [i_6] [i_6] [i_5] [24] [(unsigned short)21] [i_2] [i_2];
                    }
                    for (long long int i_8 = 2; i_8 < 24; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_14)), (var_11))) + (((/* implicit */unsigned int) var_15))))) < (var_2)));
                        arr_29 [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -450823163753799048LL))));
                        arr_30 [i_2] [i_2] [14U] [i_5] [i_5] [i_8] [i_8] = ((((((/* implicit */_Bool) (signed char)0)) ? (14680064) : (((/* implicit */int) (unsigned short)14210)))) / (((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2] [i_4] [i_2])) / (((/* implicit */int) var_0))))) ? (min((((/* implicit */int) arr_16 [i_4] [i_5] [i_5])), (arr_13 [i_4]))) : (max((arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */int) var_5)))))));
                    }
                    for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        var_27 = ((/* implicit */_Bool) var_17);
                        arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_19)), (-450823163753799047LL)));
                        arr_34 [i_9] [i_5] [i_5] [i_5] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((var_17) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_4] [i_4] [i_4]))))))) * (((((/* implicit */long long int) var_11)) / (var_8)))))) ? (((/* implicit */int) ((unsigned short) (+(var_12))))) : (((/* implicit */int) ((unsigned short) arr_28 [i_6 + 1] [(unsigned char)4] [i_6] [i_6 + 1])))));
                        arr_35 [i_5] [i_6] [i_5] [i_2] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_14 [i_2] [i_2]))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        arr_39 [i_2] [i_2] [i_4] [i_5] [i_5] [i_10] = var_18;
                        arr_40 [i_6] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) var_1);
                        var_29 = ((/* implicit */_Bool) var_8);
                        arr_44 [5ULL] [i_5] [i_5] [i_6] [i_11] [i_5] = ((/* implicit */short) ((var_6) >> (((((/* implicit */int) var_4)) + (3411)))));
                    }
                    var_30 = ((/* implicit */unsigned char) ((var_18) > (min((var_2), (arr_24 [i_5] [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1])))));
                    arr_45 [i_5] [i_5] = ((/* implicit */unsigned char) (+(((int) arr_14 [3ULL] [i_6 + 1]))));
                }
                arr_46 [(unsigned char)23] [i_4] [i_5] = ((/* implicit */int) ((((unsigned long long int) (~(arr_43 [(signed char)14] [8LL] [i_4] [i_2] [i_2] [i_2] [i_2])))) + (((/* implicit */unsigned long long int) var_11))));
                arr_47 [i_2] [i_5] [i_5] = ((/* implicit */unsigned int) ((var_9) < (min((((/* implicit */unsigned int) arr_18 [i_5])), (var_6)))));
                arr_48 [i_5] [i_5] [i_5] = ((/* implicit */int) min((var_11), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_11))))))))));
            }
            for (int i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
            {
                arr_53 [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) min(((~(4194296U))), (((/* implicit */unsigned int) arr_50 [i_2] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_2] [i_12]) > (((/* implicit */unsigned long long int) var_11)))))) : ((-(var_6)))));
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((var_13) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 21; i_13 += 4) 
                {
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        {
                            arr_60 [i_2] [i_4] [18] [i_12] [i_13] [i_14] [(unsigned short)5] = ((/* implicit */short) arr_32 [i_2] [i_4] [12ULL] [(short)6] [i_2]);
                            var_32 += ((/* implicit */short) var_12);
                        }
                    } 
                } 
            }
            for (int i_15 = 0; i_15 < 25; i_15 += 3) /* same iter space */
            {
                var_33 = ((/* implicit */int) ((((((arr_20 [i_15]) >> (((((/* implicit */int) var_19)) - (207))))) < (((/* implicit */long long int) arr_23 [i_2] [i_2] [i_15] [(signed char)7] [i_15] [i_2] [i_4])))) ? (((((/* implicit */_Bool) arr_21 [i_15])) ? (((((/* implicit */_Bool) 15U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (((/* implicit */short) var_5)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_15] [i_4] [i_15])))))))));
                var_34 ^= ((/* implicit */int) ((((((/* implicit */int) var_1)) > (((((/* implicit */int) arr_42 [i_2] [i_4] [i_15] [i_15] [i_2])) >> (((((/* implicit */int) arr_50 [i_2] [i_2])) - (2228))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -450823163753799061LL)) ? (1091648029) : (1854605427)))) ? ((-(((/* implicit */int) arr_11 [15LL] [(short)20] [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_14)))))))) : (((unsigned int) arr_54 [i_15] [i_4] [i_2] [11] [i_2] [i_2]))));
            }
            arr_63 [i_2] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_1)))) && (arr_31 [i_4] [i_4] [i_4]))) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_4] [i_2] [(unsigned short)22] [i_2] [i_4]))) < ((~(var_9)))))));
            var_35 = ((/* implicit */unsigned short) arr_43 [i_2] [i_2] [i_2] [i_2] [i_4] [i_4] [i_2]);
            arr_64 [18ULL] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (var_3)))) ? (min((((/* implicit */long long int) 3652601022U)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_2] [i_2] [i_2] [i_4] [16] [i_4] [16])))));
            arr_65 [i_2] [i_2] = ((/* implicit */short) (-(var_18)));
        }
        arr_66 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-9)) && (((/* implicit */_Bool) (unsigned char)15)))))) / ((+(var_6)))));
    }
    /* vectorizable */
    for (short i_16 = 0; i_16 < 25; i_16 += 2) /* same iter space */
    {
        arr_69 [i_16] = ((/* implicit */long long int) var_1);
        var_36 = ((/* implicit */unsigned long long int) var_14);
    }
}
