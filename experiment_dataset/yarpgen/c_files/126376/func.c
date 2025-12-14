/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126376
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_3 [i_0])))) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_0])) << (((var_11) - (15495752924617320492ULL))))) - (3209856)))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */int) var_1)) | (((/* implicit */int) arr_3 [i_0])))) : ((~(((/* implicit */int) arr_3 [i_0])))))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32704)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [2ULL])) ? (var_10) : (((/* implicit */long long int) arr_1 [(unsigned char)8]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) <= (var_11)))) : ((-(((/* implicit */int) var_5)))))))));
        var_14 = ((/* implicit */unsigned short) ((((min((1826413387), (arr_1 [i_0]))) + (2147483647))) << (((((/* implicit */int) arr_3 [(_Bool)1])) - (25077)))));
        arr_6 [(unsigned char)2] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_0])))))), (((((/* implicit */_Bool) 16971875863033735489ULL)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_15 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)7)))) ? (((/* implicit */int) arr_8 [i_1])) : (min((((/* implicit */int) arr_7 [i_1] [i_1])), ((+(((/* implicit */int) (_Bool)1))))))));
        arr_11 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1])) | (((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) var_5)))) : (((((/* implicit */int) arr_7 [i_1] [i_1])) | (((/* implicit */int) (short)4))))));
        arr_12 [(_Bool)1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) max((min((((/* implicit */unsigned short) arr_8 [i_1])), (var_6))), (((/* implicit */unsigned short) var_4)))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_16 += ((/* implicit */unsigned char) var_7);
        var_17 = ((/* implicit */_Bool) ((unsigned char) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))))));
        arr_15 [2U] = ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_2] [i_2]))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_9 [i_2])))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_19 [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                arr_27 [i_4] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                var_19 = ((/* implicit */_Bool) arr_2 [i_4]);
            }
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                var_20 = ((/* implicit */unsigned long long int) arr_16 [i_4]);
                arr_30 [i_6] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_6] [i_4] [i_3] [i_3])) >> (((/* implicit */int) (signed char)8))));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) var_12);
                        var_22 = (!(((((/* implicit */int) arr_2 [i_4])) == (((/* implicit */int) var_1)))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */_Bool) (unsigned char)35)) ? (arr_17 [i_7]) : (arr_17 [i_3])))));
                        var_24 = ((/* implicit */unsigned char) var_6);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */int) (+(arr_36 [(_Bool)1] [i_4] [i_6] [i_7] [i_9])));
                        arr_38 [i_3] [i_4] [i_6] [i_4] [9] = ((/* implicit */unsigned char) (~(arr_37 [i_9] [i_3] [3U] [3U] [i_3])));
                        arr_39 [i_4] [i_4] [i_4] [(unsigned char)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((14459841940619482349ULL) << (((6444883156793842501LL) - (6444883156793842459LL)))))) ? (((/* implicit */int) (unsigned short)27589)) : (((/* implicit */int) arr_7 [i_3] [i_3]))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (~(arr_1 [i_6]))))));
                    }
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_3] [i_7] [i_6])) + (((/* implicit */int) (signed char)-8))))) / (arr_33 [i_3] [i_4] [0LL] [i_7] [i_3])));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_3] [i_3] [i_3] [i_6] [7ULL])) && (((/* implicit */_Bool) arr_37 [i_7] [i_6] [i_4] [i_4] [i_3]))));
                }
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_3] [i_4] [i_4] [i_6] [i_6])) ? (arr_36 [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_36 [i_3] [i_3] [i_4] [i_6] [i_6]))))));
                /* LoopSeq 1 */
                for (short i_10 = 2; i_10 < 7; i_10 += 3) 
                {
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) 16971875863033735489ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-3)))))));
                    arr_42 [i_10 + 2] [i_6] [i_4] [i_3] = ((/* implicit */unsigned long long int) arr_37 [i_10 + 1] [(unsigned char)6] [i_10 - 1] [i_10 - 1] [i_10 + 3]);
                }
            }
            arr_43 [(signed char)4] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)27596)) ? (8502707493771487646ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22791)))))));
        }
        for (int i_11 = 2; i_11 < 9; i_11 += 4) 
        {
            arr_47 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_3] [i_11] [i_11] [i_11 + 1] [i_11] [i_11] [(unsigned char)2])) ? (((/* implicit */int) arr_34 [i_3] [0] [i_3] [i_11 + 1] [1U] [i_11 + 1] [1U])) : (((/* implicit */int) arr_34 [i_3] [i_11 + 1] [i_11] [i_11 + 1] [(signed char)9] [i_3] [i_11 + 1]))));
            var_31 = ((/* implicit */unsigned long long int) arr_7 [i_11 - 2] [i_3]);
            /* LoopSeq 3 */
            for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) /* same iter space */
            {
                arr_51 [i_3] [i_3] [i_12] = (-(var_11));
                arr_52 [(unsigned char)3] [i_12] [9ULL] [i_3] = ((/* implicit */unsigned char) var_2);
            }
            for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned int) arr_17 [(_Bool)1]);
                var_33 = ((/* implicit */unsigned long long int) ((((var_2) + (9223372036854775807LL))) << (((((/* implicit */int) arr_13 [i_3])) - (1)))));
            }
            for (signed char i_14 = 2; i_14 < 9; i_14 += 4) 
            {
                var_34 &= ((/* implicit */signed char) arr_22 [3] [3] [i_14]);
                var_35 += ((/* implicit */unsigned char) arr_18 [i_3] [i_3]);
                arr_57 [i_3] [i_3] [9ULL] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_55 [i_14 + 1] [i_14 - 2] [i_14 + 1] [i_14])) / (((/* implicit */int) arr_55 [i_14] [i_14 - 2] [i_14 - 1] [i_14]))));
            }
        }
        for (short i_15 = 1; i_15 < 9; i_15 += 4) 
        {
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_15 - 1] [i_15 - 1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_15 - 1])))));
            var_37 = ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) (unsigned short)65535)))));
            var_38 += ((/* implicit */unsigned int) (+(arr_22 [i_15 + 1] [i_15 - 1] [i_15 - 1])));
            arr_62 [i_15 - 1] [(short)7] [(short)7] = ((/* implicit */_Bool) arr_49 [i_3] [i_15 - 1] [i_15] [i_3]);
        }
        arr_63 [i_3] &= ((/* implicit */unsigned char) var_7);
        var_39 = ((/* implicit */unsigned char) arr_31 [i_3] [3] [i_3] [i_3] [3]);
        arr_64 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_3])) - (((/* implicit */int) arr_41 [(_Bool)1] [(_Bool)1] [i_3]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_3] [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_3] [i_3])))))));
    }
    var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) != (var_2)))) > (((/* implicit */int) var_7)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_4))))) != ((+(var_9)))))))))));
}
