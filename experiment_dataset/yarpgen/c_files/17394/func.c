/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17394
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
    var_11 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) (+((-(arr_1 [i_0] [i_0])))))) ? ((-(3817332655224764647ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0 - 4])) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_3 [i_0] [i_0 - 3] [i_1])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1] [i_0] [i_1] [i_1]))))) ? (((long long int) arr_8 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 4] [i_0 - 4] [i_0 - 4])))));
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((arr_4 [i_0 + 1]) % (((/* implicit */unsigned long long int) 1816525466U)));
                }
                for (signed char i_3 = 2; i_3 < 9; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 2; i_4 < 12; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_0] [i_0])) ? (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))) >= (arr_3 [i_0 - 3] [(_Bool)1] [i_3]))) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [(_Bool)1]))))) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_18 [i_4] [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 2])) == (arr_13 [i_0] [i_1] [i_5])))) << (((arr_7 [i_0] [i_0]) - (619057892)))))));
                                arr_19 [i_0] [i_1] [i_1] [i_0] [i_1] = ((((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_12 [i_5] [i_5] [i_3 + 1] [i_0 - 2])) : (((/* implicit */int) arr_12 [i_3 + 3] [i_3 + 2] [i_3 + 1] [i_0 - 2])))) ^ (((/* implicit */int) ((307778136U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-8490)))))));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_17 [i_0])) >= (((/* implicit */int) arr_12 [i_1] [(unsigned char)11] [i_4 + 1] [i_5])))))))) ^ ((~(arr_16 [i_0] [i_4 + 1] [i_0] [i_4 + 1] [(unsigned char)5] [2U])))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) ((unsigned int) (~((~(arr_18 [i_0] [i_0] [11ULL] [i_0] [i_0]))))));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_11 [i_0]))));
                    var_16 ^= ((/* implicit */unsigned long long int) (+((+(((((/* implicit */_Bool) (unsigned char)7)) ? (2478441834U) : (((/* implicit */unsigned int) 957957847))))))));
                }
                /* LoopSeq 2 */
                for (int i_6 = 1; i_6 < 11; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 3; i_7 < 12; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) ((long long int) ((arr_16 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_7]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2478441822U)))))))));
                        var_18 += ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) min((1817552358U), (3348143947U)))), (14629411418484786968ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_7 - 1] [i_7 - 3] [i_6])))));
                    }
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        arr_27 [i_0] [i_6 + 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) ((3987189160U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6 + 1])))))) * (((/* implicit */int) ((((/* implicit */long long int) 307778143U)) < (arr_23 [i_0 - 3] [i_1] [i_6] [i_1]))))))), ((+(arr_22 [i_6] [i_6] [i_6 + 1] [i_8])))));
                        var_19 = ((/* implicit */unsigned int) min((((unsigned long long int) 2918331569U)), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_0] [2ULL] [i_6]))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_23 [i_0] [11ULL] [i_0] [11ULL]))) : ((~(arr_4 [i_0])))))));
                        arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((arr_2 [i_0 - 3] [i_6 - 1] [i_0]), (((/* implicit */long long int) arr_18 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_1] [i_6 + 1])))) >> ((((~(((/* implicit */int) arr_17 [i_6 - 1])))) + (77)))));
                    }
                    arr_29 [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((3817332655224764647ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_1])) >= (max((arr_20 [i_6] [i_0 - 3] [i_0 - 3]), (((/* implicit */unsigned long long int) 3987189144U))))))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    arr_32 [i_0] [i_0] [i_9] = ((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 2]);
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((short) arr_22 [i_0] [i_0] [i_1] [i_9]))), (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_22 [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0 + 1])) : (arr_4 [i_0 + 1])))));
                }
                /* LoopSeq 1 */
                for (int i_10 = 1; i_10 < 11; i_10 += 4) 
                {
                    arr_35 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned short)30194);
                    arr_36 [i_0] [i_1] [i_10] [i_0] = ((/* implicit */long long int) min((min((arr_13 [i_0 + 2] [i_0 + 1] [i_0 - 3]), ((+(arr_4 [i_0]))))), (((/* implicit */unsigned long long int) (+(arr_1 [i_0] [i_10 - 1]))))));
                    var_21 += ((unsigned long long int) (!(((((/* implicit */_Bool) arr_17 [i_0 - 2])) || (((/* implicit */_Bool) arr_0 [i_10] [i_1]))))));
                    var_22 = ((/* implicit */short) (-(((unsigned int) ((((/* implicit */long long int) arr_18 [i_0] [i_1] [i_10 + 1] [4ULL] [i_10])) - (arr_3 [i_0] [i_1] [i_1]))))));
                }
                var_23 = ((/* implicit */short) ((max(((~(arr_2 [(unsigned char)0] [i_1] [i_0]))), (arr_3 [i_0 - 2] [i_0 - 1] [i_0]))) * (((arr_23 [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 2]) / ((-(arr_25 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_11 = 2; i_11 < 10; i_11 += 4) /* same iter space */
    {
        var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))) >= (arr_39 [i_11] [i_11])))) & (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            for (long long int i_13 = 3; i_13 < 11; i_13 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_1 [i_13] [i_13])) ? (arr_11 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_11])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 1; i_14 < 11; i_14 += 2) 
                    {
                        arr_47 [i_11] [i_11] [i_13] [i_13] [i_14 + 1] = ((/* implicit */unsigned long long int) ((arr_43 [i_11] [7LL] [i_13]) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_11 + 2] [i_14 + 1] [i_11 - 2] [(unsigned short)3])))));
                        var_27 = ((/* implicit */unsigned int) ((arr_20 [i_11 + 1] [i_13 - 2] [i_14 + 1]) | (arr_20 [i_11 + 3] [i_13 - 2] [i_14 + 1])));
                    }
                    for (unsigned int i_15 = 3; i_15 < 10; i_15 += 3) 
                    {
                        var_28 &= ((/* implicit */unsigned int) (!(arr_45 [i_11 - 2] [i_13 - 1])));
                        var_29 = (-(arr_33 [i_11 - 2] [i_13 - 2] [i_15] [i_15 - 3]));
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 14629411418484786967ULL))) ? (((arr_26 [i_15] [i_13] [i_13] [i_11] [i_13]) ^ (arr_20 [i_13] [i_13] [i_13]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_11 + 1]))))))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_16 = 2; i_16 < 10; i_16 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 3) 
        {
            for (int i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                for (unsigned long long int i_19 = 1; i_19 < 11; i_19 += 4) 
                {
                    {
                        var_31 = ((/* implicit */long long int) (+((-(arr_33 [i_19 + 2] [i_19 + 2] [i_19] [i_19])))));
                        var_32 = ((/* implicit */unsigned int) (((~((-(arr_13 [i_16] [i_16] [i_16]))))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_45 [i_16] [i_16])) >= (((/* implicit */int) arr_50 [i_16]))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_20 = 0; i_20 < 13; i_20 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (((~(3817332655224764655ULL))) / ((+(arr_34 [i_16]))))))));
            arr_62 [i_16] [i_16] [i_16] = ((/* implicit */int) (+((+(((((/* implicit */unsigned int) arr_61 [i_16])) % (1817552358U)))))));
            var_34 = ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */_Bool) 14629411418484786968ULL)) && (((/* implicit */_Bool) arr_17 [i_16])))) ? (((arr_13 [8U] [i_20] [i_16]) >> (((arr_34 [i_16]) - (15990607889011833181ULL))))) : (min((((/* implicit */unsigned long long int) arr_3 [i_16 + 1] [i_16 + 1] [i_16 + 1])), (arr_58 [i_20] [i_16] [i_20] [i_16] [i_16]))))));
            arr_63 [i_16] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_8 [i_16] [i_16 + 3] [i_16 + 3] [i_16 + 2]))) < (((/* implicit */int) ((((/* implicit */_Bool) -7833085588048546941LL)) && (((/* implicit */_Bool) 1816525482U)))))));
        }
        for (int i_21 = 0; i_21 < 13; i_21 += 1) /* same iter space */
        {
            var_35 += ((/* implicit */_Bool) arr_31 [i_16] [i_16] [i_16] [i_21]);
            var_36 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 3817332655224764654ULL))))))) < (min((arr_23 [i_16 + 1] [9LL] [i_21] [i_21]), (((/* implicit */long long int) 4294967272U))))));
            var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)32765)))))));
            var_38 ^= 4485749984485065093ULL;
        }
        var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_25 [i_16 + 3] [i_16 + 3] [i_16 + 3] [i_16 + 3] [i_16 + 3] [i_16 + 1]), (((/* implicit */long long int) ((unsigned short) 3U))))))));
        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_16] [i_16]))) & (1429254254U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_14 [i_16] [i_16] [i_16]) | (((/* implicit */unsigned long long int) arr_60 [i_16]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 8139919182609222533LL)), (10893119323237562580ULL)))))))) : (((2083730278U) << (((/* implicit */int) ((((/* implicit */_Bool) 2478441825U)) || (((/* implicit */_Bool) 2584062598U))))))))))));
        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 334242123U)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned char)148)) << (((307778150U) - (307778130U)))))))) : (14629411418484786967ULL)));
    }
    var_42 = ((/* implicit */int) max((var_7), (((/* implicit */unsigned long long int) var_5))));
}
