/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106348
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) 1U);
                                var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) 0))), (((((/* implicit */_Bool) max((((/* implicit */long long int) 1U)), (arr_18 [i_0] [i_0] [i_2] [i_0] [i_0])))) ? (((/* implicit */int) ((short) 2147483645))) : ((+(((/* implicit */int) (unsigned short)0))))))));
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_8 [i_1] [i_2 - 1] [8]), (((/* implicit */int) arr_12 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))) ? (min((arr_10 [i_0 - 2] [i_0 - 1] [i_0 + 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (2147483645) : (((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((arr_15 [i_0 - 1] [7LL] [i_0] [i_0]) & (arr_15 [i_0] [i_0] [i_2] [i_6]))) : ((~(arr_18 [i_0 + 1] [i_1] [i_5] [i_5] [i_0 + 1]))))))))));
                                var_14 = -5LL;
                                arr_19 [i_2] [i_5] [i_2] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [5LL] [5LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [3LL] [i_1] [i_2] [i_5] [i_1]))) : (23U)))) ? ((-(arr_1 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5)) || (((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_6]))))) << (((arr_3 [i_0 - 1] [i_2 - 1]) - (8808260369908840504LL))))))));
                            }
                        } 
                    } 
                }
                for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    var_15 -= ((/* implicit */int) ((short) arr_8 [i_1] [i_1] [i_1]));
                    var_16 = ((/* implicit */long long int) ((max(((-(arr_1 [i_0]))), (((/* implicit */unsigned long long int) arr_20 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_7])))) >> (((((arr_3 [i_0 - 2] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_9))))) - (8808260369908844020LL)))));
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_7] [i_0 - 1] [i_0] [i_0 - 1])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1])) : (792297870U)))))))));
                }
                for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    arr_24 [i_0] [i_1] [i_8] = ((/* implicit */unsigned short) var_8);
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            {
                                arr_30 [i_10 + 1] [i_8] [i_1] = ((/* implicit */unsigned long long int) min(((((((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) -2147483645)))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) var_8)) : (-6800867669438525735LL))) : (((long long int) arr_10 [i_0 - 1] [1LL] [i_0 - 1])))), (arr_23 [i_0] [i_0] [i_0 - 2] [i_0 - 2])));
                                var_18 = ((/* implicit */long long int) min((((((/* implicit */int) arr_11 [i_0] [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 1])) >> (((/* implicit */int) var_10)))), (((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((13U) >> (((var_6) - (10238603053430678988ULL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 6800867669438525734LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52238))) : (arr_29 [i_1] [i_1] [i_1] [i_0])))))))) * (max((((/* implicit */long long int) 12288)), (max((arr_18 [i_0] [i_0] [i_1] [i_0] [i_0]), (((/* implicit */long long int) arr_14 [i_0] [i_0])))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) 0U);
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 11; i_11 += 2) 
    {
        for (int i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_13 = 2; i_13 < 10; i_13 += 4) 
                {
                    arr_39 [i_11] [i_12] [i_12] [0LL] = ((/* implicit */long long int) 9U);
                    arr_40 [i_13 + 2] [i_12] [i_11 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -105639764)) ? (((/* implicit */int) arr_36 [i_13 + 2] [i_13 + 2] [i_13] [i_13])) : (((/* implicit */int) arr_36 [i_13 + 2] [i_13 + 2] [i_13] [i_13]))));
                }
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_21 ^= ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) % (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) -4150553849174974704LL))))));
                    arr_43 [i_12] [i_12] [i_14] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
                    var_22 = 2147483647;
                }
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 3) 
                {
                    for (unsigned int i_16 = 2; i_16 < 11; i_16 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((var_4) << (((4294967295U) - (4294967286U))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_11 - 1] [i_11 - 1])))))))))));
                            arr_50 [i_12] [i_11] = arr_48 [i_16] [i_12];
                            arr_51 [i_11] [i_11] = ((/* implicit */short) -5587327839794021963LL);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) ((min((((var_6) ^ (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_11] [i_12])) && (((/* implicit */_Bool) arr_46 [i_11] [i_11] [i_11] [i_12])))))))) ? (((/* implicit */unsigned int) -12285)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)89))))) ? (arr_48 [i_11 - 1] [i_11 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 10; i_17 += 2) 
    {
        for (long long int i_18 = 0; i_18 < 10; i_18 += 4) 
        {
            for (unsigned short i_19 = 0; i_19 < 10; i_19 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 1; i_20 < 7; i_20 += 4) 
                    {
                        for (long long int i_21 = 1; i_21 < 7; i_21 += 3) 
                        {
                            {
                                arr_65 [i_17] [i_21] [i_19] [i_20 - 1] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_15 [i_21] [i_21] [i_21] [i_21 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_20 - 1] [i_21 + 3] [i_20 - 1] [1U] [i_21])))))) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                                arr_66 [i_21] = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */short) var_10)), ((short)-13893))))));
                                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_46 [i_18] [i_19] [i_20 + 2] [i_21 + 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4150553849174974704LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4294967295U))))))) ? (((/* implicit */unsigned long long int) ((max((var_7), (((/* implicit */long long int) arr_14 [6LL] [i_19])))) % (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_10)), (arr_44 [i_19] [i_19] [i_19] [i_20 + 2])))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) 16777215)), (var_7)))) ? (((((/* implicit */_Bool) arr_0 [i_19] [i_21 + 2])) ? (((/* implicit */unsigned long long int) 1657798280U)) : (arr_42 [i_21 + 3] [i_20] [i_18]))) : (((/* implicit */unsigned long long int) var_8)))))))));
                                var_27 ^= ((/* implicit */unsigned long long int) var_8);
                                arr_67 [i_17] [i_20 + 2] [i_21] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_64 [i_21 + 2] [i_20 + 1] [i_21] [i_20 + 3] [i_19]))) & ((~(arr_54 [i_19] [i_19]))))) < (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_17] [i_17] [i_17] [i_17]) != (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) 4294967289U)) : (arr_15 [i_18] [i_18] [7LL] [1])))))))));
                            }
                        } 
                    } 
                    var_28 -= ((((/* implicit */_Bool) ((var_3) ? (arr_5 [i_17] [i_17] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? ((+(((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned char)36)))))) : (arr_14 [i_17] [i_18]));
                    arr_68 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 2147483647)) ^ (arr_49 [i_17] [i_17] [i_17] [i_17] [i_17]))))));
                }
            } 
        } 
    } 
}
