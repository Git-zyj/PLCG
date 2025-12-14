/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177447
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
    var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_9))))))));
    var_16 = ((/* implicit */unsigned int) ((unsigned long long int) min((4080425341482291821LL), (((/* implicit */long long int) var_5)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [(signed char)9])) || (((/* implicit */_Bool) arr_1 [i_0] [i_1]))))), (max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1])))));
                        arr_9 [i_3] [10U] [i_1] [10U] [i_0] = (-(((/* implicit */int) min((var_5), ((!(((/* implicit */_Bool) arr_8 [5LL]))))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((int) arr_0 [i_0])))));
        }
        arr_10 [(unsigned short)5] [(unsigned short)5] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 4; i_4 < 8; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) arr_0 [2U])) ? (arr_1 [(_Bool)1] [i_4 + 1]) : (arr_12 [i_0] [i_0] [i_0]))), (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_0] [i_4 - 3] [(unsigned char)7] [i_5])), (arr_13 [i_4 - 2])))))))));
                    arr_15 [i_0] [i_0] [10ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_5 [i_0] [i_4] [i_0] [i_0])) ? (arr_14 [i_0] [3] [i_5] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 - 4])))))))) ? (min((((((/* implicit */_Bool) arr_3 [i_0] [i_4])) ? (arr_1 [(signed char)3] [(signed char)3]) : (arr_1 [i_5] [(short)3]))), (((/* implicit */int) max((((/* implicit */short) var_12)), (arr_11 [i_0])))))) : (((/* implicit */int) min((min((arr_0 [(short)3]), (((/* implicit */unsigned short) arr_4 [(unsigned char)8] [i_4] [i_4 + 1] [i_4 + 1])))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_5] [7ULL] [i_0] [i_0])) && (((/* implicit */_Bool) arr_7 [1] [1] [(signed char)1] [(short)4] [i_5] [i_5]))))))))));
                    var_20 = (-(((((((/* implicit */_Bool) arr_3 [(short)6] [i_4])) || (((/* implicit */_Bool) arr_12 [i_0] [(short)0] [i_0])))) ? (((/* implicit */unsigned long long int) ((arr_3 [(signed char)5] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */int) arr_2 [(signed char)7] [(signed char)7]);
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((arr_18 [i_6]) % (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2608501008U)))))))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_6])) & (((/* implicit */int) arr_11 [i_6])))))));
        var_24 *= ((/* implicit */unsigned char) arr_18 [i_6]);
        /* LoopNest 2 */
        for (unsigned int i_7 = 2; i_7 < 11; i_7 += 2) 
        {
            for (int i_8 = 1; i_8 < 10; i_8 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [6LL] [i_7 - 1] [8ULL] [i_6])))))));
                    arr_24 [i_6] [1U] [i_8] |= ((/* implicit */unsigned int) ((arr_7 [6LL] [(signed char)3] [i_7 - 1] [i_8 - 1] [6LL] [i_8 + 1]) > (arr_7 [i_8] [i_8 + 2] [i_7 - 1] [i_7 - 2] [i_7 - 1] [(signed char)9])));
                    arr_25 [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_6] [i_6] [i_8 + 2] [i_7 - 1]))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_9 = 3; i_9 < 11; i_9 += 3) 
        {
            arr_28 [9LL] = ((/* implicit */long long int) ((unsigned int) arr_5 [i_6] [i_9 - 1] [i_9 + 1] [i_9 - 1]));
            /* LoopNest 2 */
            for (short i_10 = 3; i_10 < 11; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    {
                        var_26 = ((/* implicit */signed char) arr_29 [i_9 - 2] [i_9] [i_9 + 1] [i_11]);
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            arr_35 [i_6] [i_9] [i_10] [i_11] [i_6] [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_10 + 1]))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_9 - 3] [i_9 - 2] [i_10 - 3] [i_10 - 3])) ? (((/* implicit */int) arr_31 [i_9 - 3] [i_9 - 1] [i_10 - 1] [i_10 - 3])) : (((/* implicit */int) arr_31 [i_9 - 1] [i_9 + 1] [i_10 + 1] [i_10 + 1]))));
                            var_28 = ((/* implicit */long long int) arr_31 [2ULL] [i_9] [i_10 - 2] [i_11]);
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            arr_38 [i_6] [i_13] [i_13] = ((/* implicit */unsigned char) (-(arr_29 [i_6] [i_6] [i_6] [i_6])));
            var_29 ^= ((/* implicit */unsigned long long int) (-(arr_27 [i_6] [i_13])));
            arr_39 [1ULL] [1ULL] = (-(arr_12 [i_6] [i_13] [i_13]));
            arr_40 [0] [i_13] = ((/* implicit */unsigned long long int) arr_5 [8ULL] [i_6] [i_6] [i_6]);
        }
        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            var_30 = ((/* implicit */short) arr_27 [i_6] [i_14]);
            arr_43 [i_14] = ((/* implicit */signed char) ((unsigned int) ((arr_14 [i_6] [i_14] [(short)10] [(signed char)11]) / (((/* implicit */unsigned int) arr_41 [i_6] [(unsigned char)0])))));
        }
    }
    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */long long int) min((((/* implicit */int) min((((short) arr_1 [8U] [3LL])), (((/* implicit */short) arr_31 [i_15] [(unsigned char)5] [i_15] [i_15]))))), (((((/* implicit */_Bool) arr_30 [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_15] [i_15] [i_15])) && (((/* implicit */_Bool) arr_7 [i_15] [i_15] [i_15] [i_15] [i_15] [(unsigned short)3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_15])))))))));
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_5 [i_15] [i_15] [i_15] [(unsigned short)4])))))))));
    }
    for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 3) 
    {
        arr_50 [i_16] = ((/* implicit */int) arr_49 [i_16] [i_16]);
        arr_51 [i_16] [21ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(arr_48 [(short)22])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_48 [i_16])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_49 [8U] [i_16])) ^ (((/* implicit */int) arr_49 [i_16] [i_16]))))) : (((unsigned int) arr_47 [i_16] [i_16]))))) : (arr_47 [i_16] [i_16])));
    }
}
