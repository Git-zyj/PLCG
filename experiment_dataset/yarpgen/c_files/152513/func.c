/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152513
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
    var_19 = ((/* implicit */long long int) var_3);
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((var_18) | (((/* implicit */unsigned long long int) var_3)))))));
    var_21 = ((/* implicit */unsigned short) ((short) var_4));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) var_1))), ((+(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */int) var_8);
        var_23 = ((/* implicit */unsigned long long int) var_16);
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        arr_5 [i_1 + 3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_3 [i_1 - 2])))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)240)))) : (((/* implicit */int) (_Bool)1))));
        var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_1])) : (arr_3 [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (arr_3 [i_1])));
        var_25 = ((/* implicit */long long int) min((var_25), (var_1)));
    }
    for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 1) 
    {
        var_26 = ((/* implicit */long long int) 2025940830U);
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)22))))) ? (((((/* implicit */int) arr_0 [i_2 + 1] [i_2])) | (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) && (((/* implicit */_Bool) arr_8 [0LL])))))))) ? (max((arr_3 [(signed char)6]), (arr_3 [i_2 + 1]))) : (((((/* implicit */int) arr_0 [i_2 - 2] [i_2 + 1])) - (((/* implicit */int) arr_4 [i_2 - 2])))))))));
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_3 [i_2 - 1])))) ? (((unsigned int) ((arr_7 [(unsigned short)12] [10ULL]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [3LL])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((380021834U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2])))))))))))));
        var_29 *= ((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) (unsigned char)107)))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_30 |= ((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) 2536243561943964973LL)) ? (((/* implicit */int) var_0)) : (var_3)))))));
        var_31 ^= min((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3]))))) + (((/* implicit */int) ((((/* implicit */_Bool) 2633163643U)) && (((/* implicit */_Bool) 14105251581764513133ULL)))))))), (((((/* implicit */_Bool) arr_4 [i_3])) ? (((unsigned int) arr_9 [i_3])) : (((((/* implicit */_Bool) arr_4 [i_3])) ? (0U) : (((/* implicit */unsigned int) -2069533996)))))));
    }
    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_21 [i_4 + 3] [(unsigned short)8] [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6 + 3] [i_6 - 1] [i_6 + 3])) ? (((/* implicit */int) arr_14 [i_6 - 1] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_14 [i_6 + 2] [i_6 + 1] [i_6 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(0)))))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((arr_1 [i_5] [i_4]), (((/* implicit */unsigned long long int) (signed char)94))))))));
                        var_32 = ((/* implicit */short) 1243825146U);
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_13 [i_4 + 4]))) % (((/* implicit */int) arr_6 [i_4 + 1] [i_4 - 1])))))));
        var_34 = var_2;
    }
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
    {
        arr_24 [i_8] = ((/* implicit */_Bool) 1885974554U);
        /* LoopSeq 2 */
        for (int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            arr_29 [i_8] [i_8] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(4294967284U)))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (short)-8829)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_26 [i_8])))))));
            arr_30 [(unsigned short)16] [(unsigned short)16] &= ((/* implicit */unsigned short) (signed char)-94);
            var_35 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_25 [i_8]))))));
        }
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            var_36 = ((long long int) arr_27 [i_10] [i_8]);
            arr_33 [i_8] [(unsigned short)18] &= ((signed char) (-(3051142149U)));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    {
                        arr_39 [i_8] [i_8] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) 2147483647)) == (var_2)))));
                        arr_40 [(unsigned short)17] [i_8] [(unsigned short)19] [i_12] = ((/* implicit */unsigned long long int) (unsigned char)9);
                    }
                } 
            } 
        }
        var_37 = ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8] [i_8])) ? (min((((/* implicit */unsigned long long int) 2)), (arr_22 [i_8] [i_8]))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)10328)), (arr_34 [i_8] [(signed char)15] [i_8]))))))));
        /* LoopNest 2 */
        for (long long int i_13 = 3; i_13 < 19; i_13 += 2) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    var_38 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [16U] [i_13 - 3] [i_13] [i_14] [i_14])) + ((+(((/* implicit */int) ((unsigned char) arr_46 [i_13] [(signed char)15])))))));
                    var_39 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_32 [i_8] [i_13 + 1]))))), (((((/* implicit */_Bool) ((unsigned char) arr_46 [i_8] [i_14]))) ? (max((((/* implicit */unsigned long long int) arr_28 [i_8] [(unsigned char)19])), (4239115901024867104ULL))) : (arr_26 [i_8])))));
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_40 *= ((/* implicit */short) arr_48 [i_13] [i_13 - 3] [i_13 - 2] [i_13]);
                        var_41 &= ((/* implicit */long long int) (+(((arr_42 [12] [12]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_8] [(unsigned char)10]))))))))));
                        arr_51 [i_8] [i_13] [i_8] [i_14] [i_14] [i_15] = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_8] [i_13 + 1] [i_14] [i_13 + 1] [i_15])) ? (((/* implicit */int) (unsigned short)9612)) : (((/* implicit */int) (_Bool)1))))) ? (1095216660480ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_15] [i_14])))))))) : (var_11)));
                    }
                }
            } 
        } 
    }
}
