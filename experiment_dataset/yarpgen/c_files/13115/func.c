/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13115
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) var_10);
                    arr_7 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [(signed char)3] [i_2])) > ((-(((/* implicit */int) var_6))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4146838140988132954ULL)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (signed char)95))))) * (((var_13) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (var_11)));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_1] [i_2] [i_2])) : (((/* implicit */int) var_11))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-96)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (arr_3 [i_0])))) : (((/* implicit */int) var_4)))))));
        var_23 &= ((/* implicit */signed char) (~(arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 1])));
        var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_9 [i_0 - 1] [7ULL] [i_0 + 2]) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [1ULL] [i_0 + 2] [i_0])) : (arr_3 [i_0 + 2])))));
        arr_14 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 487631552)) + (12637238571934530230ULL)))) ? (arr_5 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (signed char)-95)))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_7 = 1; i_7 < 11; i_7 += 1) 
                {
                    arr_27 [(unsigned char)0] [i_6] [i_7] |= ((/* implicit */unsigned int) ((unsigned long long int) 252363363));
                    arr_28 [i_6] [i_5] [i_7 - 1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)60250)))) / ((~(((/* implicit */int) var_6))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))) : (14239628421373231399ULL)))) ? (((/* implicit */unsigned long long int) max((2055438444), (((/* implicit */int) var_5))))) : (arr_16 [(signed char)10])))) ? (((((/* implicit */_Bool) (unsigned short)60233)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((var_9), (arr_22 [i_5 - 2] [0]))))) : (((((/* implicit */_Bool) arr_16 [10ULL])) ? ((+(var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_8])) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) arr_18 [0ULL])))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        arr_33 [i_5] [i_9] [i_8] = ((/* implicit */unsigned long long int) 1057969261);
                        arr_34 [i_5] = ((((((/* implicit */int) arr_26 [i_5] [i_5 - 1])) < (((/* implicit */int) arr_26 [i_5] [i_5 - 1])))) ? (((/* implicit */int) max(((signed char)-99), ((signed char)-111)))) : (((((/* implicit */_Bool) arr_26 [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_26 [i_5] [i_5 - 1])) : (((/* implicit */int) arr_26 [i_5] [i_5 - 1])))));
                        var_26 = ((((/* implicit */_Bool) arr_17 [i_5 + 2])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) min((var_8), (var_2)))))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5 + 2]))));
                        arr_39 [i_5 + 2] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))) > (((arr_24 [i_6] [i_6] [i_5 + 1]) ? ((-(var_9))) : (arr_20 [i_10])))));
                    }
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                    {
                        var_29 ^= ((/* implicit */int) ((((/* implicit */_Bool) (((+(262224873))) / (((/* implicit */int) arr_21 [i_6]))))) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)5316))))), (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_8] [i_11] [i_8])))));
                        arr_43 [i_5] [5ULL] = ((/* implicit */signed char) var_7);
                        var_30 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_2)))))) ^ (((((/* implicit */unsigned long long int) (~(1964533456)))) ^ (((((/* implicit */_Bool) 2050886108)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104))) : (var_8)))))));
                        var_31 = ((/* implicit */int) var_8);
                    }
                    for (signed char i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                    {
                        arr_46 [i_5] [i_6] [(_Bool)1] [i_12] |= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_38 [i_5 - 2] [i_6] [i_8]))))));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_6))));
                    }
                    var_33 = ((/* implicit */unsigned char) arr_21 [i_8]);
                }
                for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    var_34 -= ((/* implicit */_Bool) (+((((~(((/* implicit */int) var_4)))) & (((/* implicit */int) min((arr_29 [i_13] [i_6] [i_5 + 1]), (arr_18 [i_13]))))))));
                    arr_49 [i_5 - 2] [i_5] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)94))));
                    arr_50 [i_5] [i_6] [(unsigned short)4] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)94)) << (((/* implicit */int) ((_Bool) ((9223372036854775807ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5])))))))));
                }
                var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_32 [i_5 - 1] [i_5] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_32 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 + 2])) : (((/* implicit */int) arr_32 [9] [i_5] [i_5] [i_5 - 1])))) + (2147483647))) << ((+(((/* implicit */int) arr_42 [i_5] [4U] [i_5] [i_5] [4U] [i_5])))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    for (signed char i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        for (int i_16 = 1; i_16 < 9; i_16 += 1) 
                        {
                            {
                                arr_57 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_7)), (var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_13)));
                                var_36 += ((/* implicit */unsigned short) (+(var_15)));
                                arr_58 [i_5 + 2] [i_6] [i_5] [i_14] [i_15] [(_Bool)1] [i_16 + 3] = ((/* implicit */_Bool) var_2);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_17 = 1; i_17 < 22; i_17 += 2) 
    {
        for (unsigned char i_18 = 0; i_18 < 24; i_18 += 4) 
        {
            {
                var_37 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_61 [i_17] [i_17 - 1] [i_17 + 1])) ? (((/* implicit */int) (signed char)102)) : (((int) arr_60 [i_17]))));
                arr_63 [i_17] [i_18] [i_17] = (signed char)95;
                var_38 = ((/* implicit */signed char) arr_61 [i_17] [i_18] [(_Bool)1]);
            }
        } 
    } 
}
