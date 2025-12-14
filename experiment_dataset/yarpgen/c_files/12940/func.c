/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12940
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_13 = ((((/* implicit */_Bool) 49152LL)) ? (((((((/* implicit */_Bool) (signed char)-10)) ? (arr_0 [16LL]) : (((/* implicit */int) (signed char)94)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)236)) && (((/* implicit */_Bool) (unsigned short)16))))))) : (max((arr_0 [i_0]), (arr_0 [7]))));
        var_14 = ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)176)) || (((/* implicit */_Bool) arr_0 [i_0]))))) >> (((/* implicit */int) arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        var_15 = ((/* implicit */int) ((_Bool) ((unsigned long long int) arr_3 [i_1 + 1])));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_16 = ((/* implicit */int) ((unsigned long long int) (signed char)112));
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) >= (min((((/* implicit */long long int) arr_5 [i_1] [(unsigned char)21])), (16383LL)))));
            arr_7 [i_1] [i_2] = ((/* implicit */unsigned long long int) (signed char)-86);
            var_18 = ((/* implicit */long long int) ((unsigned char) (unsigned short)65535));
            var_19 += ((/* implicit */signed char) min((min((arr_4 [i_1 - 1]), (arr_4 [i_1 - 1]))), (max((arr_4 [i_1 + 1]), (arr_4 [i_1 - 1])))));
        }
        for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            var_20 = ((/* implicit */_Bool) arr_3 [i_1]);
            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(9))))));
            arr_11 [i_3 + 2] [i_3 - 1] [i_1] = ((/* implicit */unsigned char) min((((signed char) (unsigned char)255)), (((/* implicit */signed char) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))) < (-4493904799199624440LL))))))));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                arr_14 [i_1] [i_3 - 1] [i_3 - 1] [(_Bool)1] = ((/* implicit */unsigned short) arr_2 [i_4]);
                var_22 = ((/* implicit */short) ((signed char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_4)))));
                arr_15 [(unsigned char)19] [i_3] = ((/* implicit */unsigned long long int) var_11);
                var_23 = ((/* implicit */long long int) 18446744073709551615ULL);
            }
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                arr_19 [i_1] [i_1] [i_1] [i_1 - 1] = (-(arr_9 [i_1 + 1]));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_1 - 1] [i_3] [i_5] [i_3 - 1])) | (((/* implicit */int) (!(((/* implicit */_Bool) -528759095)))))));
                arr_20 [i_3] [i_3] [(_Bool)1] [i_1 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)42))));
                var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-94))));
                /* LoopSeq 4 */
                for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    var_26 = ((/* implicit */int) ((signed char) arr_5 [i_5] [i_1 - 1]));
                    arr_23 [i_1 - 1] [i_3] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 71491730)) == (arr_18 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 1])));
                    var_27 = ((/* implicit */long long int) (unsigned char)180);
                    var_28 = ((/* implicit */unsigned char) ((arr_21 [i_1] [i_1] [i_1 + 1]) | (arr_21 [i_1] [i_1 + 1] [i_1 + 1])));
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        arr_27 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */short) ((unsigned char) arr_9 [i_3 + 1]));
                        arr_28 [i_1] [i_6] [i_5] [17] [(_Bool)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-46)) ? (-7378577021506979188LL) : (((/* implicit */long long int) -852565630))));
                    }
                    for (long long int i_8 = 3; i_8 < 23; i_8 += 4) /* same iter space */
                    {
                        var_29 += ((/* implicit */unsigned char) (signed char)-45);
                        arr_33 [i_1] [i_3 + 1] [i_3] [i_5] [i_6] [i_8] [i_8 + 1] = ((unsigned char) (unsigned short)65520);
                    }
                    for (long long int i_9 = 3; i_9 < 23; i_9 += 4) /* same iter space */
                    {
                        var_30 = ((unsigned char) (signed char)42);
                        var_31 = ((/* implicit */_Bool) ((unsigned char) arr_32 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_9 - 3] [i_3 - 1]));
                    }
                }
                for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_1 - 1] [12ULL])) ? (arr_16 [i_1] [i_5] [i_1 + 1] [i_10]) : (((/* implicit */unsigned long long int) -4493904799199624437LL))));
                    var_33 = ((/* implicit */unsigned long long int) (unsigned short)9);
                }
                for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    var_34 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) arr_41 [i_1 + 1] [i_3 - 1] [(unsigned char)15] [i_11])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned short) arr_6 [i_1] [14ULL]);
                        arr_45 [i_1 - 1] [10ULL] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)176)) | (((/* implicit */int) arr_40 [i_3 + 1] [i_3 + 2] [i_1 + 1] [i_1] [i_1]))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */long long int) ((arr_25 [i_1 + 1] [i_1 + 1] [22LL] [i_3 + 1] [i_13]) ? (1635464582) : (arr_36 [i_1 - 1])));
                        arr_48 [i_13] [22] [16U] [i_11] [i_3 + 2] = var_6;
                        var_37 = ((/* implicit */unsigned long long int) ((arr_46 [i_13] [i_3 + 2] [i_1] [i_1] [(unsigned short)23] [i_1] [i_1 - 1]) / (arr_46 [17] [i_3 + 2] [i_1] [i_1] [i_1] [i_1] [i_1 - 1])));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
                    {
                        var_38 = arr_35 [i_1] [i_1] [i_1];
                        var_39 = ((((/* implicit */int) (unsigned char)189)) * (((/* implicit */int) arr_25 [i_1] [i_3] [i_5] [i_11] [i_14])));
                    }
                    var_40 += ((/* implicit */unsigned int) arr_36 [(_Bool)1]);
                    var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_3 + 1])) ? (arr_36 [i_3 + 2]) : (arr_36 [i_3 + 1])));
                    var_42 = ((/* implicit */unsigned long long int) arr_5 [14ULL] [i_5]);
                }
                for (long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    var_43 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (arr_46 [i_3 - 1] [i_3] [i_3] [i_3 + 2] [i_3] [i_3 - 1] [i_3])));
                    arr_57 [(unsigned char)7] [i_3] [i_5] [i_3] [i_1] = ((/* implicit */_Bool) ((int) (signed char)94));
                    var_44 = ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_3] [i_5])) ? (arr_18 [i_15] [22U] [i_15] [22U]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)86)))))));
                    /* LoopSeq 2 */
                    for (int i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned long long int) 5347670097940386169LL);
                        var_46 += ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_36 [i_3]))) | (((/* implicit */int) (unsigned short)65512))));
                        var_47 = ((/* implicit */_Bool) arr_39 [3ULL]);
                        arr_61 [(signed char)15] [8ULL] [i_1] [i_5] [i_3 - 1] [i_1] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) && (arr_53 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3])));
                        var_48 = ((/* implicit */_Bool) ((var_0) / (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) -9223372036854775791LL)))))));
                    }
                    for (int i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
                    {
                        arr_65 [i_1] [i_3] [i_1] [10LL] [i_17] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_47 [i_1 + 1] [0ULL] [0ULL] [0ULL] [0ULL])) : ((~(((/* implicit */int) (short)32767))))));
                        var_50 = ((/* implicit */unsigned char) arr_40 [i_1 + 1] [i_3] [i_5] [i_15] [i_17]);
                        arr_66 [i_1] [i_1] [(unsigned short)16] [i_5] [i_1] [i_1] = ((/* implicit */int) ((((arr_56 [i_1 - 1]) + (9223372036854775807LL))) >> (((arr_56 [i_1 + 1]) + (6286080448579467709LL)))));
                    }
                }
            }
            var_51 = ((/* implicit */signed char) (+(arr_18 [i_1 - 1] [(signed char)4] [i_1] [i_1 - 1])));
        }
        var_52 += ((/* implicit */signed char) ((int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)16261))));
    }
    for (signed char i_18 = 0; i_18 < 16; i_18 += 4) 
    {
        var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) (~((+(901433682U))))))));
        arr_71 [i_18] = ((/* implicit */unsigned char) arr_58 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]);
        arr_72 [10] = ((/* implicit */int) arr_24 [1LL] [i_18] [i_18] [i_18]);
        var_54 = ((/* implicit */_Bool) min((((/* implicit */long long int) 0)), (min((4493904799199624439LL), (((/* implicit */long long int) ((signed char) 901433682U)))))));
        arr_73 [i_18] [9] = ((/* implicit */signed char) ((901433692U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 2147483647))))))));
    }
    var_55 = ((/* implicit */unsigned char) var_8);
}
