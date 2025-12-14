/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142044
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned short)30554)))), (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))))))))) + ((((~(var_8))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_2))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 3) /* same iter space */
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_3 = 4; i_3 < 15; i_3 += 2) 
                {
                    var_12 = ((/* implicit */signed char) arr_6 [i_3] [i_2 + 3] [i_1] [i_0]);
                    var_13 = ((/* implicit */short) arr_4 [i_2 + 3] [i_1] [i_0]);
                }
                for (short i_4 = 1; i_4 < 16; i_4 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned int) 4198164935130076444LL);
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 6542454653626738700LL)) ? (((/* implicit */int) arr_4 [14U] [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_2] [i_2 + 1] [i_2 + 1])))) * (((/* implicit */int) ((((/* implicit */long long int) 2147483647)) <= ((-9223372036854775807LL - 1LL))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */long long int) arr_3 [i_0] [(unsigned char)13]);
                        var_17 = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_0] [i_4] [i_4 - 1]);
                    }
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) -1875889864)) : (658805463U)))) ? ((+(((/* implicit */int) (signed char)-61)))) : (((/* implicit */int) (short)240))));
                }
                for (short i_6 = 1; i_6 < 16; i_6 += 1) /* same iter space */
                {
                    var_19 -= ((/* implicit */long long int) ((((/* implicit */long long int) arr_7 [i_0] [i_1] [(unsigned short)12])) != (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30554)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(unsigned short)11] [(unsigned short)11] [i_6 + 2] [i_6 + 2] [i_6 - 1]))) : (arr_13 [i_0] [(unsigned char)7])))), (((((/* implicit */_Bool) arr_5 [i_0] [(signed char)10] [i_2 - 2] [(signed char)14])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-72))) : (2161727821137838080LL)))))));
                    var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(arr_7 [i_0] [i_0] [7U])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)-240)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) : (min((35519240U), (((/* implicit */unsigned int) arr_3 [i_0] [i_1])))))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_14 [i_2 - 2] [i_6 + 1] [i_6 + 2] [i_6] [14] [i_6 - 1])), ((+(((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_2] [i_6] [i_6 + 1])))))))));
                }
                for (unsigned int i_7 = 1; i_7 < 15; i_7 += 3) 
                {
                    var_21 |= ((/* implicit */signed char) (-(((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) arr_10 [i_1] [i_2 + 2] [i_2] [i_7]))))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_17 [i_1] [(unsigned char)12] [i_2] [6U] [i_1] [i_1]))));
                    var_23 = ((/* implicit */long long int) arr_7 [i_1] [i_0] [i_7]);
                    /* LoopSeq 3 */
                    for (int i_8 = 2; i_8 < 15; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((4198164935130076456LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)121)))));
                        var_25 = ((/* implicit */short) 4026531840U);
                        var_26 = ((/* implicit */long long int) max((var_26), (((arr_21 [i_8 + 1] [i_8] [(unsigned char)17] [i_8 - 1] [i_8]) >> ((((~(arr_21 [i_8 + 2] [i_8] [(unsigned char)10] [i_8] [i_8]))) + (5301011715686458035LL)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 4; i_9 < 17; i_9 += 3) 
                    {
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_13 [i_0] [(short)1]))));
                        var_28 |= ((((/* implicit */_Bool) (signed char)-124)) ? (3636161826U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_9] [i_7] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) : (arr_13 [i_1] [i_1])))) ? (((/* implicit */int) ((arr_20 [i_0] [i_1] [i_1] [i_2] [i_7 + 1] [i_9 - 4]) >= (((/* implicit */int) arr_3 [i_0] [i_2 + 2]))))) : (((/* implicit */int) arr_16 [i_1] [14] [i_7] [i_7] [i_9 - 4] [i_9]))));
                    }
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)206)) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [6U])))))));
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((arr_21 [i_7 + 1] [i_2 + 1] [i_2 - 1] [6U] [i_2 - 1]) / (arr_21 [i_7 + 1] [i_2 + 1] [i_2 + 3] [i_2 + 1] [i_2 + 1]))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_22 [i_0])) ? (((/* implicit */int) (unsigned char)142)) : (arr_23 [i_1] [i_1]))) >= (((((/* implicit */_Bool) arr_27 [i_11] [i_7] [i_7] [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 1] [i_7 + 1] [i_7] [i_11])))))))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_2 - 1] [i_7])) & (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 1] [i_7 + 3]))));
                    }
                }
                var_34 = ((/* implicit */int) arr_26 [i_2] [i_0] [i_1] [i_0] [i_0]);
                var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_17 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) 65535U)))) <= (((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */long long int) 2254711955U)) : (arr_2 [i_0]))))))) & (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [10LL] [i_1] [(signed char)4] [(signed char)4])), (arr_1 [i_0]))))) % (arr_19 [i_2] [i_2 + 3] [i_2 - 2] [i_0] [i_2 + 2])))));
            }
            /* vectorizable */
            for (unsigned int i_12 = 2; i_12 < 15; i_12 += 3) /* same iter space */
            {
                arr_32 [i_1] [(unsigned char)2] [i_1] &= ((/* implicit */unsigned long long int) ((-9223372036854775778LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                var_36 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)26327)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (14137874922863000912ULL)))));
                var_37 = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_12] [(unsigned char)0] [i_12] [i_12] [(short)1] [i_12 + 3]))));
            }
            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) min((-967131606744172995LL), (((/* implicit */long long int) min((((/* implicit */int) arr_10 [i_1] [6LL] [6LL] [i_1])), (((((((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) + (2147483647))) << (((((((/* implicit */int) (signed char)-121)) + (126))) - (5)))))))))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_13 = 2; i_13 < 17; i_13 += 3) /* same iter space */
        {
            arr_37 [i_0] [i_0] = ((/* implicit */signed char) min(((+((-(((/* implicit */int) arr_29 [i_13] [i_13] [i_13] [i_0] [i_13] [i_13])))))), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_13 + 1] [i_0] [i_13])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_13 - 1] [(signed char)9]))))));
            var_39 = ((/* implicit */unsigned short) (~(arr_34 [i_13 + 1])));
            var_40 = ((/* implicit */short) ((((((/* implicit */_Bool) ((arr_7 [i_13 - 1] [i_0] [(signed char)3]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))) * (0U)))) : (6744127991537922594ULL))) != (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [i_13 + 1]))))), (((((/* implicit */_Bool) arr_25 [7U] [i_0] [i_13 + 1] [i_13] [i_13] [i_13])) ? (arr_13 [i_0] [i_13]) : (((/* implicit */unsigned int) arr_23 [i_0] [i_0])))))))));
            arr_38 [i_0] [i_0] = ((/* implicit */short) (~(min((((((/* implicit */_Bool) arr_18 [i_0] [i_13 + 1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [4] [i_13] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_13] [i_13] [(signed char)1] [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */long long int) 1550178653)) > (arr_2 [i_0]))))))));
        }
        for (unsigned char i_14 = 2; i_14 < 17; i_14 += 3) /* same iter space */
        {
            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-121)) ^ (((/* implicit */int) arr_4 [i_0] [i_14] [i_0]))));
            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4198164935130076459LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_17 [i_0] [i_14 - 1] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_0]) < (arr_17 [i_0] [i_14 - 1] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_0]))))) : (min((arr_17 [i_0] [i_14 - 1] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_0]), (arr_17 [i_0] [i_14 - 1] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_0])))));
        }
        var_43 ^= ((/* implicit */int) min((((/* implicit */long long int) min((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_36 [i_0]))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_0] [(unsigned char)10] [(unsigned char)10] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (min((5395754004822161599LL), (((/* implicit */long long int) (unsigned char)130))))))));
        var_44 &= ((/* implicit */short) min((((arr_17 [2ULL] [i_0] [i_0] [i_0] [i_0] [i_0]) - (arr_17 [6ULL] [6ULL] [14U] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)125))) : (arr_2 [16LL])))))))));
    }
}
