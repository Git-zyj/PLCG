/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153019
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
    var_16 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = min(((unsigned short)30565), (max(((unsigned short)2410), (((/* implicit */unsigned short) var_11)))));
        var_17 &= ((/* implicit */short) max((((((((/* implicit */_Bool) arr_1 [6])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [12LL])))) ^ (((/* implicit */int) ((signed char) -8180878953217878945LL))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
        arr_3 [i_0 + 2] [i_0] = ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)40))) < (min((((/* implicit */long long int) (short)-25377)), (-6488378247779595141LL)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 + 4] [6])))))));
            var_19 = ((/* implicit */long long int) min((var_19), (arr_5 [i_1])));
            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [12LL])) > (((/* implicit */int) arr_8 [i_1 + 4] [i_1 - 1]))));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_7 [i_2] [i_1 + 1]))));
        }
        for (short i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (short i_4 = 2; i_4 < 11; i_4 += 4) 
            {
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (((((-(((/* implicit */int) var_6)))) + (2147483647))) << (((((/* implicit */int) arr_8 [8LL] [i_3])) - (106))))))));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (signed char)57))));
                var_24 = ((/* implicit */unsigned long long int) (((~(-17LL))) < (((/* implicit */long long int) ((/* implicit */int) (short)25351)))));
                arr_13 [i_1] [(_Bool)0] [i_3] [i_4 + 2] = ((/* implicit */signed char) (-(((((/* implicit */int) var_6)) & (var_8)))));
            }
            for (short i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                var_25 = ((/* implicit */signed char) (+(arr_16 [i_1 + 2] [i_5] [i_1 + 2])));
                arr_17 [i_5] [i_1] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1 + 3] [i_5] [i_1 + 2])) ? (arr_16 [i_1 + 4] [i_5] [i_1 + 3]) : (arr_16 [i_1 + 4] [i_5] [i_1 + 1])));
                /* LoopSeq 2 */
                for (unsigned short i_6 = 2; i_6 < 10; i_6 += 4) /* same iter space */
                {
                    arr_20 [i_5] [i_3] = ((/* implicit */long long int) ((signed char) 3670016LL));
                    arr_21 [i_5] [i_5] [i_3] [i_5] = ((/* implicit */signed char) ((arr_14 [i_3] [i_6 + 1] [i_5] [i_6 + 2]) < (((/* implicit */long long int) arr_9 [i_6 + 2]))));
                    arr_22 [i_5] [0LL] [i_3] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((unsigned short) arr_11 [i_3] [i_6 + 2] [i_6 + 3]));
                }
                for (unsigned short i_7 = 2; i_7 < 10; i_7 += 4) /* same iter space */
                {
                    var_26 ^= ((/* implicit */short) ((((unsigned int) arr_9 [i_1])) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-55)))))));
                    var_27 = ((((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 4] [i_1 + 4])) ^ (((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 4] [(unsigned char)5])));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_12 [i_1 + 2]))));
                }
                var_29 += ((/* implicit */long long int) arr_8 [i_1 - 1] [i_3]);
            }
            for (short i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                arr_29 [i_8] [(unsigned short)1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_8]))));
                var_30 |= ((/* implicit */short) var_0);
                arr_30 [(unsigned short)4] [i_3] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1 + 2] [i_1 + 1]);
                var_31 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_24 [i_1])) ? (var_15) : (11523966122488613832ULL))));
                var_32 += arr_24 [i_3];
            }
            var_33 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)2]))) / (arr_5 [i_3])));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 1; i_9 < 12; i_9 += 2) 
            {
                var_34 = ((/* implicit */long long int) arr_8 [i_3] [i_9]);
                var_35 = ((/* implicit */long long int) ((var_8) / (((/* implicit */int) arr_11 [i_9 - 1] [i_3] [i_1 + 4]))));
                arr_34 [i_1] = ((/* implicit */short) ((unsigned long long int) arr_14 [(unsigned char)2] [i_3] [0LL] [i_3]));
                arr_35 [i_1 + 4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)35773);
            }
            arr_36 [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [6]);
        }
        for (short i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned short) var_7);
            /* LoopSeq 2 */
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    arr_43 [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)2978)) ^ (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) arr_12 [i_1 + 4]))));
                    var_37 = ((/* implicit */unsigned short) (+(arr_9 [i_1 + 1])));
                    /* LoopSeq 2 */
                    for (int i_13 = 4; i_13 < 11; i_13 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) ((long long int) (~(arr_4 [i_1 + 2]))));
                        var_39 = ((/* implicit */unsigned short) ((signed char) arr_27 [i_13 - 3] [i_1 + 4] [i_1 + 3] [i_1]));
                    }
                    for (int i_14 = 2; i_14 < 10; i_14 += 1) 
                    {
                        arr_48 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] = ((/* implicit */long long int) arr_41 [i_1 + 4] [i_1] [i_1]);
                        var_40 = ((/* implicit */unsigned int) ((arr_15 [i_1 - 1] [i_1 + 1] [i_14 + 1] [i_14 + 2]) < (((/* implicit */long long int) arr_4 [i_14 + 1]))));
                        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_10 [2U] [(short)6] [i_1 - 1])) ^ (arr_19 [i_12])))) / ((~(var_10))))))));
                        arr_49 [i_1 - 1] [i_10] [i_1 - 1] [i_14] = ((/* implicit */long long int) arr_11 [(short)2] [i_10] [i_10]);
                        var_42 &= ((/* implicit */unsigned short) ((short) arr_14 [i_1 + 3] [i_1 + 3] [i_12] [i_14 - 1]));
                    }
                }
                for (unsigned short i_15 = 1; i_15 < 12; i_15 += 4) 
                {
                    arr_52 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_10] [i_1 + 4] [i_15] [i_15 - 1])) || (((/* implicit */_Bool) arr_6 [i_1 + 3] [i_1 + 1]))));
                    var_43 -= ((((/* implicit */_Bool) arr_23 [i_1] [i_11])) ? (((((/* implicit */_Bool) (short)25366)) ? (15845914888994896888ULL) : (((/* implicit */unsigned long long int) arr_31 [i_11] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)49))))));
                }
                for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    arr_56 [i_1] = ((/* implicit */long long int) arr_11 [i_1] [i_10] [i_16]);
                    arr_57 [i_1] [9] [i_11] [i_1] [i_11] [(unsigned short)10] = ((/* implicit */unsigned long long int) ((signed char) arr_42 [i_1 + 1] [i_11] [i_11] [i_11]));
                }
                var_44 = ((/* implicit */unsigned long long int) (signed char)-49);
                /* LoopSeq 2 */
                for (long long int i_17 = 1; i_17 < 12; i_17 += 3) 
                {
                    arr_60 [(short)5] = ((/* implicit */unsigned long long int) ((arr_5 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                    var_45 ^= ((/* implicit */int) (~(arr_53 [i_17 - 1] [(unsigned short)9] [i_1 + 2] [i_1])));
                    var_46 = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_1 + 3] [i_17 - 1] [i_17 - 1])) | (((/* implicit */int) arr_11 [i_1 + 1] [i_17 + 1] [3ULL]))));
                    arr_61 [i_1] [i_10] [i_11] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_10])) && (((/* implicit */_Bool) arr_24 [i_17 - 1]))));
                }
                for (long long int i_18 = 3; i_18 < 11; i_18 += 2) 
                {
                    arr_65 [i_1] [(unsigned char)10] [i_1] = ((/* implicit */unsigned short) (-(arr_40 [5LL] [i_1 - 1] [i_1 - 1] [i_18 - 2])));
                    arr_66 [i_1] [i_10] [i_11] [i_11] [i_18] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_63 [i_1] [i_10] [i_1] [(signed char)12] [i_18 - 2])))) < (arr_9 [i_1 - 1])));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 3) 
                    {
                        var_47 -= ((/* implicit */short) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_32 [i_1 + 4] [i_18] [i_18 - 1] [i_18 - 1]))));
                        var_48 = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
                    }
                    arr_71 [i_1] [i_10] [i_11] [0] = ((/* implicit */long long int) ((arr_15 [i_1] [i_1 + 4] [i_18 - 1] [i_18]) != (arr_14 [i_18 + 1] [i_18] [(signed char)0] [i_18 - 1])));
                }
            }
            for (unsigned short i_20 = 0; i_20 < 13; i_20 += 4) 
            {
                arr_75 [i_1 + 2] [i_1 + 2] [10LL] [i_10] = ((/* implicit */unsigned int) ((unsigned char) arr_1 [i_20]));
                arr_76 [i_1] [i_1] [i_1] &= ((unsigned long long int) arr_41 [i_1] [i_1 + 2] [i_1 - 1]);
                var_49 = ((/* implicit */long long int) max((var_49), ((~(arr_15 [i_1 - 1] [5LL] [3U] [i_1 + 3])))));
            }
        }
        arr_77 [i_1] = ((/* implicit */int) ((short) ((_Bool) -1877661759)));
        var_50 = ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_1])) ? (((arr_41 [i_1 + 2] [i_1] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) arr_68 [i_1] [5LL] [i_1] [i_1] [i_1]))));
    }
}
