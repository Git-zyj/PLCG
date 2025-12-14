/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167165
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_11 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (max((((/* implicit */unsigned int) arr_5 [21LL] [i_1] [i_2])), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3)))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967281U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_3])))));
                        var_12 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_7 [i_0])) && (((/* implicit */_Bool) arr_7 [i_1]))))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_3 [i_0])) >= (var_1))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) ((var_2) > (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) (unsigned short)48897))))) : (((((/* implicit */_Bool) ((int) (unsigned char)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (1ULL) : (((/* implicit */unsigned long long int) -4340816009790170092LL))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_12 [i_4] = ((((/* implicit */_Bool) arr_9 [i_4] [i_4])) && (((/* implicit */_Bool) (unsigned short)20220)));
        arr_13 [i_4] = ((/* implicit */long long int) (((+(arr_4 [i_4] [i_4]))) <= (arr_4 [i_4] [i_4])));
        var_14 -= ((((/* implicit */_Bool) arr_0 [i_4] [i_4])) ? (((/* implicit */int) arr_1 [(unsigned short)17] [i_4])) : ((~(((/* implicit */int) arr_6 [i_4] [i_4] [(_Bool)1] [i_4])))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_15 -= ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_5] [i_5])) % ((~(((/* implicit */int) (unsigned char)0))))));
        var_16 = ((/* implicit */unsigned long long int) arr_15 [(unsigned short)10] [i_5]);
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 2; i_7 < 23; i_7 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_5] [i_6]))))) ? (((/* implicit */int) max((arr_20 [i_5] [i_6]), (arr_20 [(unsigned short)16] [i_6])))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_20 [i_6] [i_6]))))));
                    arr_21 [i_5] [(_Bool)1] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned short) var_10))))) & (((((unsigned long long int) (_Bool)0)) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (unsigned short)20220)) : (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            var_18 -= ((/* implicit */_Bool) (signed char)96);
                            arr_28 [i_9] [i_6] [i_7] = ((/* implicit */int) arr_14 [i_7 - 1] [i_7 + 1]);
                            var_19 = ((/* implicit */int) arr_17 [i_7 + 2] [i_7 + 1] [i_7 + 2]);
                            arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) ((arr_18 [(signed char)0] [i_9] [i_7 - 2]) ^ (arr_18 [i_7] [i_7] [i_7 - 2])));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_20 [i_7] [i_8])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [i_8] [i_7 + 2] [i_8] [i_9])))))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_32 [i_5] [i_6] [i_7] [i_7] [i_6] = ((/* implicit */unsigned int) (unsigned short)30819);
                            arr_33 [i_10] [i_8] [i_6] [i_6] [i_6] [i_5] = ((/* implicit */signed char) arr_26 [i_6]);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_37 [i_5] [i_7] [i_8] [i_6] [(_Bool)1] = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && ((!(arr_24 [i_7 - 1] [i_11] [i_6] [i_6] [i_11]))));
                            arr_38 [i_11] [i_6] = ((/* implicit */unsigned int) 18446744073709551614ULL);
                            var_21 -= ((/* implicit */short) ((unsigned int) 7ULL));
                            arr_39 [i_7] [(short)21] [i_6] [(unsigned short)5] [i_7] [i_7] [i_7 + 1] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) 2147483520)), (1548528646972979767ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_5] [i_6] [i_6] [i_8] [i_11])) | (((/* implicit */int) arr_22 [3ULL] [i_6] [i_7 - 1] [i_8] [i_11]))))))))));
                            arr_40 [i_5] [i_6] [i_6] [i_7] [i_8] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((arr_36 [i_5] [i_5] [i_7 + 2] [i_7 - 1] [i_11] [i_11] [i_11]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) (-(max((((/* implicit */int) var_8)), ((~(((/* implicit */int) var_8))))))));
                            arr_44 [i_5] [i_6] [i_5] [3] [i_5] [i_5] [i_5] = ((((/* implicit */int) arr_42 [i_5] [i_5] [i_8] [i_6] [i_5])) | (((/* implicit */int) ((((/* implicit */_Bool) (signed char)5)) && (((/* implicit */_Bool) (unsigned char)3))))));
                        }
                        var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (1548528646972979769ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 22U))))))));
                        var_24 = ((/* implicit */unsigned int) arr_20 [i_6] [i_6]);
                    }
                    for (unsigned int i_13 = 1; i_13 < 23; i_13 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (+(((((_Bool) 1548528646972979778ULL)) ? (((/* implicit */int) max(((unsigned short)48945), ((unsigned short)45336)))) : (((/* implicit */int) ((signed char) (signed char)44))))))))));
                        var_26 = arr_43 [i_6] [i_7 + 2] [2ULL];
                    }
                }
            } 
        } 
        arr_48 [i_5] = ((_Bool) (-(((/* implicit */int) var_10))));
    }
    for (short i_14 = 0; i_14 < 23; i_14 += 4) 
    {
        arr_51 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(arr_26 [i_14]))) >> (((2231916670U) - (2231916611U)))))) ? (((/* implicit */int) ((max((arr_26 [(signed char)17]), (var_4))) < (((18446744073709551614ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5)))))))) : ((-(((/* implicit */int) arr_27 [i_14] [i_14]))))));
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 23; i_15 += 4) 
        {
            for (unsigned short i_16 = 1; i_16 < 22; i_16 += 1) 
            {
                {
                    var_27 ^= ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_31 [24U] [i_15] [i_15] [i_15] [i_14])) >= (((/* implicit */int) arr_19 [i_16 - 1] [i_15] [i_16 + 1]))))))));
                    /* LoopSeq 1 */
                    for (short i_17 = 3; i_17 < 19; i_17 += 3) 
                    {
                        var_28 ^= ((/* implicit */long long int) (_Bool)1);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_18 = 1; i_18 < 19; i_18 += 1) 
                        {
                            arr_63 [i_14] [8U] [i_15] [i_17] [i_17] [i_18] [i_18 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) 4294967261U)) ? (18446744073709551605ULL) : (2ULL)));
                            var_29 = ((/* implicit */signed char) ((var_6) <= (arr_45 [i_16 - 1] [i_17 - 2] [i_17 + 2] [i_18 - 1])));
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (_Bool)1))));
                            var_31 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) ? ((~(((/* implicit */int) (unsigned char)235)))) : (((/* implicit */int) ((1146086296) < (((/* implicit */int) arr_60 [i_14] [4U])))))));
                            var_32 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)32753)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)24075)) : (((/* implicit */int) (unsigned char)24))))) : (((unsigned long long int) arr_53 [i_14]))));
                        }
                        for (unsigned int i_19 = 4; i_19 < 22; i_19 += 4) 
                        {
                            var_33 ^= ((/* implicit */signed char) (~(((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_15] [i_15] [i_15] [i_15] [i_15]))) : (0U))) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_56 [i_19] [i_17 + 3] [i_16])))))))));
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (+((-(((arr_65 [i_14] [i_15] [11LL] [i_16 - 1] [7U] [i_17 - 2] [i_19 - 3]) ? (((/* implicit */int) (unsigned short)22030)) : (((/* implicit */int) (unsigned char)255)))))))))));
                        }
                        arr_66 [i_14] [i_14] [i_14] [i_17] = ((/* implicit */unsigned long long int) (+(min((arr_3 [i_16 - 1]), (((unsigned int) var_6))))));
                        var_35 |= ((/* implicit */unsigned short) var_9);
                    }
                }
            } 
        } 
        var_36 = ((/* implicit */int) (_Bool)1);
        var_37 = ((/* implicit */unsigned int) ((long long int) 8));
    }
    var_38 -= ((/* implicit */signed char) ((unsigned short) ((unsigned int) var_10)));
}
