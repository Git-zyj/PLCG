/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16815
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) != (var_9)));
                var_12 = ((/* implicit */short) ((arr_9 [i_1 + 1]) == (arr_9 [i_1 + 1])));
                arr_10 [i_1] [i_1 + 1] [i_2] = ((/* implicit */unsigned char) var_7);
            }
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                var_13 = ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 285947931)));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned char) arr_8 [i_1] [i_3] [i_1]);
                        var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_4]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_16 = (signed char)-105;
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((285947931) % (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) (short)-359)) + (362))))))));
                    }
                    for (long long int i_7 = 1; i_7 < 22; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) & (arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                        var_19 = ((/* implicit */int) arr_19 [i_0 - 1] [i_4] [i_7 - 1] [i_7 - 1]);
                        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)30))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)41079))));
                    arr_23 [i_3] [i_1 - 1] [i_0 - 1] [i_1] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 1])) < (var_9)));
                }
            }
            /* LoopNest 2 */
            for (long long int i_8 = 2; i_8 < 22; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    {
                        arr_29 [i_1] [i_1] [i_1] [i_9] = ((/* implicit */int) (unsigned char)119);
                        var_22 = ((/* implicit */int) (unsigned char)185);
                        var_23 = ((/* implicit */_Bool) (unsigned char)233);
                        var_24 = ((/* implicit */unsigned char) 4670743937004040377LL);
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            arr_34 [i_0 - 1] [i_10] = ((/* implicit */unsigned char) (+(arr_28 [i_10] [i_10] [i_10])));
            var_25 = ((/* implicit */unsigned char) (short)-16376);
            arr_35 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((-4670743937004040401LL) + (9223372036854775807LL))) << (((/* implicit */int) ((((((/* implicit */int) arr_25 [i_10] [i_0] [i_0] [i_0])) | (((/* implicit */int) (signed char)-105)))) == ((+(((/* implicit */int) (unsigned short)9779)))))))));
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) var_2)) != (((((/* implicit */int) ((((/* implicit */int) (signed char)-101)) <= (-766091319)))) >> (((((/* implicit */int) arr_0 [i_0 - 1])) - (46204))))))))));
        }
        for (unsigned long long int i_11 = 3; i_11 < 21; i_11 += 4) 
        {
            var_27 = ((/* implicit */signed char) ((((((17633168720631121904ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)32)) <= (-1000467913))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)67)) ? (((4670743937004040378LL) / (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
            var_28 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)349))) : (arr_12 [i_0 - 1] [i_11] [i_11 + 2]))), (min((arr_12 [i_0 - 1] [i_11] [i_0 - 1]), (((/* implicit */long long int) (unsigned char)15))))));
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_29 = ((/* implicit */int) (-(min((var_5), (((/* implicit */unsigned long long int) var_1))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            arr_48 [i_0 - 1] [i_11] [i_12] [i_11] [i_0 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_5) : (18446744073709551615ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                            arr_49 [i_11] [i_11 - 2] [i_12] [i_11] [i_14] = ((/* implicit */_Bool) 0ULL);
                            var_30 = (!(((/* implicit */_Bool) (unsigned char)28)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_15 = 3; i_15 < 22; i_15 += 4) 
                        {
                            arr_52 [i_0 - 1] [i_11 - 1] [i_11 - 1] [i_0 - 1] [i_11] [i_11 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_47 [i_11 - 2] [i_11 + 2] [i_15 - 1] [i_15 - 3] [i_15 - 3]) ^ (((/* implicit */long long int) 285947931))))) ? (((((/* implicit */_Bool) arr_47 [i_11 - 3] [i_15 - 3] [i_15 - 2] [i_15 - 2] [i_15 - 1])) ? (-6279665405417710801LL) : (((/* implicit */long long int) 16)))) : (((((/* implicit */_Bool) 67108863)) ? (arr_47 [i_11 + 2] [i_11 - 2] [i_15 - 3] [i_15 - 3] [i_15 + 1]) : (((/* implicit */long long int) -58659997))))));
                            arr_53 [i_0] [i_11 - 2] [i_12] [i_12] [i_0] [i_11] [i_15 - 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((4670743937004040377LL) != (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_15 - 2] [i_11] [i_12] [i_13] [i_13] [i_15 + 1] [i_11 - 2]))))))));
                            arr_54 [i_11] [i_0 - 1] [i_11] = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned short)19)) + (arr_44 [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 - 3]))), (((/* implicit */int) var_6))));
                        }
                        for (unsigned char i_16 = 1; i_16 < 22; i_16 += 1) 
                        {
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) min((min((((/* implicit */int) (_Bool)1)), (arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))), (((/* implicit */int) (_Bool)1)))))));
                            var_32 = ((/* implicit */long long int) ((((arr_42 [i_0 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) % (var_5)));
                        }
                        var_33 = ((/* implicit */_Bool) 511ULL);
                        var_34 -= ((/* implicit */long long int) (+(((/* implicit */int) max((max((arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) max(((signed char)-122), (((/* implicit */signed char) var_6))))))))));
                    }
                } 
            } 
        }
        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [(unsigned char)18] [(unsigned char)18] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((((-44) + (2147483647))) << (((((/* implicit */int) (unsigned short)23473)) - (23473)))))) : (((((/* implicit */_Bool) arr_32 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-116))) : (arr_5 [i_0 - 1] [i_0 - 1])))));
    }
    /* vectorizable */
    for (signed char i_17 = 0; i_17 < 12; i_17 += 4) 
    {
        var_36 = ((((/* implicit */_Bool) 287667426198290432LL)) ? ((-(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) arr_27 [i_17] [i_17] [i_17] [i_17])) << (((574251742388966106LL) - (574251742388966101LL))))));
        /* LoopNest 2 */
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                {
                    var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_18 - 1] [i_18 - 1] [i_18 - 1]))));
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (-(8241110070574617386ULL)))) ? (2296835809958952960ULL) : (((/* implicit */unsigned long long int) 2147483639))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_20 = 0; i_20 < 10; i_20 += 1) 
    {
        var_39 = (signed char)46;
        arr_68 [i_20] [i_20] = ((/* implicit */unsigned long long int) (+(arr_24 [i_20] [i_20] [i_20])));
    }
}
