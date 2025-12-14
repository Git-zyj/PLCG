/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182225
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) 1868724748U));
        var_20 = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -1)) : (arr_2 [(unsigned char)7]))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 4294967294U)) ? (21U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47)))))))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) var_14);
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) var_3);
            arr_13 [i_2] [(_Bool)1] [i_2] = ((/* implicit */long long int) 2779137537427084050ULL);
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_4 = 2; i_4 < 13; i_4 += 2) 
                {
                    var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [(signed char)8] [i_3 - 1] [i_4] [i_2] [i_1])) | (((/* implicit */int) arr_19 [i_3 - 1] [i_4 + 1] [i_4 - 2] [i_4 - 2]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        arr_22 [i_2] [i_2] [10LL] [8ULL] [(short)3] = ((/* implicit */unsigned char) 2604073633U);
                        arr_23 [i_2] [i_2] [(short)0] [i_4] [i_5 + 2] [i_4 - 1] [i_4] = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_17 [i_5 + 1] [(signed char)11] [(short)11] [i_4 + 1])))));
                        var_22 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_14)) + (2147483647))) << (((((/* implicit */int) var_13)) - (14355))))) ^ (((/* implicit */int) ((_Bool) (unsigned char)8)))));
                    }
                }
                for (signed char i_6 = 1; i_6 < 13; i_6 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((3005782785U) & (((/* implicit */unsigned int) ((((((/* implicit */int) arr_19 [i_1] [7ULL] [7U] [1ULL])) + (2147483647))) << (((((/* implicit */int) (unsigned char)78)) - (78)))))))))));
                    arr_26 [i_2] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_5 [i_2] [i_6])) && (var_7)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 3; i_7 < 12; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_28 [5LL] [9ULL] [i_2] [i_3] [i_6] [i_7])) || (((/* implicit */_Bool) arr_17 [i_1] [i_2] [9] [i_7 - 1])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_7 + 1] [i_6] [i_2] [i_1])) : (((/* implicit */int) arr_27 [i_1] [i_1] [(short)7] [i_3] [5U] [i_6 + 1] [i_7 - 1])))) : (((/* implicit */int) ((unsigned char) (short)-21974)))));
                        arr_31 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [(_Bool)1] [i_2] [i_3] [i_2] [i_6 + 1] [(short)6]))))) ? (1890755556U) : (1431877135U)));
                        arr_32 [i_1] [i_2] [8] [i_1] [(signed char)0] [0U] [i_6 + 1] &= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [(signed char)3])) == (((/* implicit */int) arr_25 [(signed char)10] [10U] [i_3 - 1] [i_1] [(unsigned short)0] [i_3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 127U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((long long int) ((unsigned int) 8296805243963686343ULL))))));
                }
                arr_33 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned short) arr_30 [i_2]));
            }
            arr_34 [i_2] [i_2] = ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [(unsigned char)10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_1])))))));
        }
        var_26 = ((/* implicit */int) ((_Bool) arr_5 [12U] [i_1]));
        arr_35 [i_1] = ((/* implicit */long long int) var_14);
    }
    var_27 ^= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 308726769)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) var_7))))));
    /* LoopSeq 3 */
    for (int i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) min((min((var_6), ((short)21980))), (((/* implicit */short) (_Bool)1)))))));
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) 17929794586529176894ULL))));
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_36 [i_8]))));
        arr_38 [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_8])) * (((/* implicit */int) max((arr_37 [i_8]), (arr_37 [i_8]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_9 = 3; i_9 < 20; i_9 += 1) 
        {
            var_31 = ((/* implicit */short) var_10);
            arr_43 [i_9] [i_9 - 3] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)-6317))))));
            var_32 = ((/* implicit */unsigned short) ((int) arr_40 [i_9 - 2] [i_9]));
            var_33 = ((/* implicit */unsigned char) ((unsigned short) 2079695033));
        }
        for (unsigned short i_10 = 1; i_10 < 19; i_10 += 2) 
        {
            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_42 [i_8]))))))));
            arr_46 [i_10] [i_10] [(_Bool)1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))))));
            arr_47 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)82)), (((((/* implicit */_Bool) var_14)) ? (8388600U) : (3123120853U)))))) * (((((/* implicit */_Bool) max((arr_36 [(short)8]), (((/* implicit */unsigned char) arr_40 [i_8] [i_10]))))) ? (((/* implicit */unsigned long long int) ((var_7) ? (0U) : (var_12)))) : (((unsigned long long int) var_3))))));
        }
        for (short i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            arr_52 [i_8] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_11])) ? (((/* implicit */int) arr_44 [i_11] [i_11] [i_8])) : (((/* implicit */int) var_7))))) ? (((arr_51 [(short)9] [i_11] [i_11]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_8]))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41228))))))));
            arr_53 [i_8] [i_8] [i_11] |= ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) ((int) var_19))))));
        }
    }
    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
    {
        var_35 = ((/* implicit */signed char) max(((~(var_8))), ((~(0U)))));
        var_36 = ((/* implicit */unsigned int) arr_56 [i_12]);
        arr_57 [i_12] = ((/* implicit */int) var_1);
        arr_58 [i_12] [i_12] = ((/* implicit */_Bool) ((arr_56 [(_Bool)1]) ? (((((/* implicit */int) var_14)) + (((/* implicit */int) var_3)))) : (-572975974)));
    }
    /* vectorizable */
    for (short i_13 = 3; i_13 < 10; i_13 += 1) 
    {
        var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 5381190950921499392ULL))));
        var_38 = ((/* implicit */_Bool) arr_59 [i_13 - 3]);
        arr_61 [i_13] = ((/* implicit */long long int) arr_45 [(unsigned char)10] [i_13] [20ULL]);
        var_39 = (short)20858;
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 20; i_14 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_68 [18LL] [16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_17))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_41 [i_14] [i_15]))));
            arr_69 [i_14] [i_15] [15ULL] &= ((/* implicit */unsigned long long int) (short)4318);
            var_40 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)28))));
            arr_70 [(short)6] [(signed char)11] = ((/* implicit */int) 0U);
        }
        var_41 = ((/* implicit */short) var_10);
        arr_71 [1LL] [i_14] = ((/* implicit */signed char) arr_39 [(unsigned char)20]);
        arr_72 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 16U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)63)))))));
    }
    var_42 &= ((/* implicit */int) (~(max((((((/* implicit */_Bool) 114188000013163865ULL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_7)))))))));
}
