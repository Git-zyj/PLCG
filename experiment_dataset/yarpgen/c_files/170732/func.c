/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170732
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
    var_10 |= min((((var_7) & ((-(12701163861782510169ULL))))), (var_7));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)1536))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */short) ((arr_1 [i_0] [i_0]) ^ (arr_1 [i_0] [i_1])));
            var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))));
            arr_7 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1] [i_1]))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
        {
            arr_12 [i_2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 18446744073709551609ULL)))) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : ((+(arr_11 [i_0] [i_2])))));
            var_13 = ((/* implicit */long long int) 6ULL);
        }
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
        {
            arr_17 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_0] [i_0]))) >= (arr_8 [(signed char)10] [i_3])));
            /* LoopSeq 1 */
            for (short i_4 = 1; i_4 < 15; i_4 += 3) 
            {
                arr_21 [i_4] [i_4] [i_4 - 1] = ((/* implicit */unsigned short) ((18446744073709551605ULL) > (((/* implicit */unsigned long long int) 2100839724))));
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) arr_2 [i_3] [i_3] [i_4 + 2]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */_Bool) (-(arr_27 [i_4 - 1] [(unsigned short)14] [i_4 - 1] [(unsigned short)14] [i_4 - 1] [i_4 + 1])));
                        arr_28 [i_0] [i_0] [i_4] [i_5] [i_6] = arr_23 [i_4 + 2] [i_4 - 1] [(unsigned char)6] [i_3] [(_Bool)0];
                        arr_29 [i_0] [i_0] [i_0] = (((!(((/* implicit */_Bool) arr_14 [11U] [11U] [i_6])))) ? (((/* implicit */unsigned long long int) 2769226439746049086LL)) : (((((/* implicit */_Bool) 2083173867800790790ULL)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_4 - 1])) : (11485442873927314074ULL))));
                        arr_30 [i_0] [(signed char)5] [(signed char)5] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_9 [i_6] [i_3]) == (5ULL)))) | (((/* implicit */int) arr_2 [i_4 - 1] [i_4 - 1] [i_3]))));
                    }
                    arr_31 [(unsigned short)0] = ((/* implicit */unsigned char) ((arr_25 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_3]) | (arr_25 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_0])));
                    var_16 = ((/* implicit */signed char) (+(arr_9 [i_0] [i_3])));
                    arr_32 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)64162))));
                }
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        arr_38 [i_7] [i_3] [i_3] [i_0] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_3] [i_4] [i_4] [i_4 - 1] [i_4] [i_7])) == (((/* implicit */int) arr_34 [i_4] [14U] [i_4] [14U] [i_4] [i_7]))));
                        arr_39 [i_0] [i_7] [i_7] [7LL] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((arr_25 [i_8] [i_4] [i_4 + 1] [i_3] [i_3]) >= (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_8])))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        arr_42 [(signed char)13] [i_3] [i_3] [i_3] [i_3] [i_7] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned int) arr_5 [1LL] [i_7])) > (arr_25 [i_0] [13ULL] [4U] [i_7] [i_9]))))));
                        arr_43 [i_0] [i_3] [i_4 + 2] [i_4] [i_7] [i_7] = ((/* implicit */_Bool) 16090131774821302219ULL);
                        arr_44 [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_0] [i_3] [(short)7] [i_7] [i_9])) ? (((unsigned long long int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -223174387))))))));
                        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_7] [i_4 + 2]))));
                    }
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [5LL] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_4] [i_4] [i_7] [i_4 + 2]))) : (arr_25 [(signed char)1] [i_3] [i_4 + 1] [i_3] [i_7])));
                    arr_45 [i_0] [i_0] [i_3] [i_0] [i_0] |= ((/* implicit */unsigned short) (!((_Bool)1)));
                }
                for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    arr_48 [i_10] [i_3] = arr_24 [i_0] [i_0] [i_3] [i_4] [i_3];
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_4 + 2])))))));
                    arr_49 [i_4] [i_10] [i_0] = ((/* implicit */_Bool) arr_2 [i_4 + 1] [i_4 + 2] [i_4 + 1]);
                    var_20 = ((/* implicit */long long int) arr_8 [i_0] [i_4 + 2]);
                    var_21 = ((/* implicit */unsigned int) (~(arr_22 [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 - 1])));
                }
            }
        }
        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_57 [i_0] [i_11] [i_0] [i_12] [16U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (11485442873927314071ULL) : (((/* implicit */unsigned long long int) arr_37 [i_0] [i_11] [i_0] [i_11] [12] [i_13]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_0] [i_0] [i_13] [i_0] [i_11] [i_11]))))) : ((~(((/* implicit */int) arr_50 [i_12] [14ULL] [i_0]))))));
                        arr_58 [(unsigned short)5] [i_12] [i_11] [(unsigned short)5] [(unsigned short)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned long long int) arr_56 [i_0] [i_0] [i_12] [i_12] [(unsigned short)3] [i_13])) : (6961301199782237549ULL)))) || ((!(((/* implicit */_Bool) arr_14 [1ULL] [(signed char)10] [(signed char)10]))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_41 [i_11] [i_11] [i_0] [i_0] [i_0]))));
        }
        arr_59 [i_0] [i_0] |= ((/* implicit */int) arr_20 [i_0] [6LL]);
        arr_60 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0] [(_Bool)0] [i_0]))));
    }
    for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) arr_4 [i_14] [i_14]);
        var_24 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(arr_54 [i_14] [i_14] [i_14] [i_14]))), ((~(6961301199782237547ULL)))))) ? (arr_16 [(unsigned char)8]) : (((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) arr_15 [i_14] [i_14] [i_14])), (10245980026081998845ULL)))))));
        var_25 *= ((/* implicit */unsigned short) arr_34 [i_14] [i_14] [i_14] [6ULL] [i_14] [i_14]);
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 12; i_15 += 4) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [2LL] [i_15]))))) ? (((6961301199782237569ULL) % (arr_16 [i_15]))) : (((/* implicit */unsigned long long int) (-(-331394522))))));
                    arr_67 [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_9 [i_15] [i_16]), (((/* implicit */unsigned long long int) arr_1 [i_14] [i_16]))))) ? ((+((+(arr_26 [i_16] [i_16] [i_16] [i_15] [i_14]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_34 [10U] [10U] [i_16] [6ULL] [i_16] [i_16])))))))));
                    arr_68 [i_14] [i_16] = ((/* implicit */unsigned long long int) arr_50 [i_14] [i_15] [i_16]);
                }
            } 
        } 
    }
}
