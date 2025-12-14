/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145834
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
    var_17 = var_8;
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (var_7)))) ? (((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((unsigned int) ((((/* implicit */_Bool) var_16)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
    var_19 = ((/* implicit */long long int) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_16)) ? (0ULL) : (((/* implicit */unsigned long long int) 6150864065220220145LL)))))), (max(((-(var_11))), (((/* implicit */int) var_3))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [1ULL])) ^ (((/* implicit */int) arr_0 [(short)1] [i_0]))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) (-(var_1)));
                            var_22 ^= ((/* implicit */unsigned short) ((arr_12 [i_2 + 1] [i_2 - 1] [i_2 - 1] [19ULL] [i_1 + 1]) ? (((/* implicit */int) arr_12 [i_2 + 1] [i_1 + 1] [i_2 - 1] [i_3] [i_1 + 1])) : (((/* implicit */int) arr_12 [i_2 + 1] [12] [i_2] [i_0] [i_1 + 1]))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1LL)) ? (1688849860263936ULL) : (arr_6 [i_3] [i_3] [i_3]))))));
                        }
                    } 
                } 
            } 
            arr_14 [(_Bool)1] [13] [(unsigned char)6] = ((/* implicit */unsigned long long int) ((arr_12 [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 1] [i_1 + 1]) ? (((/* implicit */int) arr_12 [10U] [10U] [10U] [i_1 + 1] [(unsigned char)18])) : (((/* implicit */int) var_10))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1] [i_1 + 1])) ? (arr_5 [i_1 + 1] [i_1] [i_1 + 1]) : (arr_5 [i_1 + 1] [i_1] [i_1 + 1])));
        }
        for (unsigned int i_5 = 4; i_5 < 18; i_5 += 4) 
        {
            var_25 ^= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 4 */
            for (int i_6 = 3; i_6 < 18; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_24 [i_0] [6] [i_0] [i_0] [i_8])) : (((/* implicit */int) (unsigned short)65535))))))))));
                            arr_26 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_7] [i_8] |= ((/* implicit */_Bool) (-(arr_13 [i_5 + 2] [i_8] [15ULL] [i_6 - 1] [i_5 + 2] [i_5 + 2])));
                            var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_12))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    var_28 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_5 - 1])) & (((/* implicit */int) arr_2 [i_0] [i_5 - 4]))));
                    var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
                }
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_6] [i_6 + 2] [i_5 + 1])) ^ (((/* implicit */int) arr_10 [i_0] [i_6 + 2] [i_5 - 1]))));
                arr_30 [i_6] [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_6 - 3] [i_5 + 2] [i_0])) ? (arr_6 [i_6 - 3] [i_5 + 2] [i_6]) : (arr_6 [i_6 - 2] [i_5 - 3] [i_6 - 2])));
                var_31 = ((/* implicit */_Bool) arr_28 [i_5 - 4] [i_5 - 2] [(_Bool)1] [i_6] [i_5 - 2] [(_Bool)1]);
            }
            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                arr_33 [i_5] [i_5] [i_10] [i_10] = ((/* implicit */unsigned short) ((((var_1) + (((/* implicit */unsigned long long int) arr_17 [12U])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */long long int) var_6)) + (-3052519011798640907LL))))));
                            var_33 = ((((/* implicit */_Bool) 6138176291782862273ULL)) ? (766966298355093812LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_10] [i_11] [i_10] [i_5 - 2] [i_0]))));
                        }
                    } 
                } 
                var_34 = (unsigned short)3346;
                arr_40 [i_10] [i_5] [i_10] = ((/* implicit */_Bool) ((arr_3 [i_5 - 4] [i_5 - 1]) ? (arr_23 [i_5 + 2] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            }
            for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                var_35 = ((/* implicit */_Bool) var_1);
                /* LoopNest 2 */
                for (short i_14 = 2; i_14 < 18; i_14 += 4) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_48 [i_0] [i_5] [i_0] [i_13] [i_14 + 2] [i_13] = ((((/* implicit */_Bool) arr_24 [8LL] [i_13] [i_14 - 2] [i_5] [i_13])) ? ((-(var_13))) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [1ULL] [i_13]))));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_9 [i_5 + 2] [(unsigned char)8] [i_5 + 2] [i_5 + 2] [i_0])) / (arr_8 [i_5 - 4] [i_14 - 2] [i_14] [i_14 + 2])));
                        }
                    } 
                } 
            }
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_17 = 2; i_17 < 19; i_17 += 4) 
                {
                    arr_53 [i_16 - 1] [i_16] [(_Bool)1] [i_17] = ((/* implicit */unsigned short) ((var_9) ? (((/* implicit */unsigned long long int) arr_51 [i_0] [i_0] [i_17 + 1] [14U])) : (arr_42 [i_16] [i_17 + 1] [i_17] [i_17])));
                    var_37 = arr_52 [i_16] [i_16] [i_16] [i_0];
                }
                for (short i_18 = 1; i_18 < 18; i_18 += 1) 
                {
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) % (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0]))) : (arr_17 [i_16 - 1]))))));
                    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_16 - 1] [i_5] [i_16] [i_18])) ? (((/* implicit */int) arr_25 [i_18] [i_18] [i_16] [(short)18] [i_16])) : (((/* implicit */int) arr_24 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5] [i_5 - 2]))));
                    var_40 = ((/* implicit */unsigned char) arr_41 [(unsigned short)17] [i_18 + 2] [i_16] [i_18]);
                }
                var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) var_7))));
                var_42 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_52 [i_0] [i_5] [i_5] [i_16])) ? (((/* implicit */unsigned long long int) 607009724U)) : (arr_52 [(short)12] [i_5] [i_5] [i_0])));
                /* LoopSeq 2 */
                for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 4) 
                {
                    var_43 = ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_5 - 3] [i_16 - 1] [i_16 - 1] [i_19])) ? (arr_21 [i_16 - 1] [i_16 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_5 - 2] [i_16 - 1] [i_16 - 1] [i_16])))));
                    var_44 = ((/* implicit */_Bool) var_7);
                }
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    arr_63 [i_16] [i_5] [i_16] [i_20] = ((/* implicit */short) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_9))));
                    var_45 = ((/* implicit */unsigned long long int) arr_34 [i_16] [i_16] [i_5] [i_5 - 1] [i_5 - 3]);
                }
            }
        }
        arr_64 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((arr_32 [i_0] [i_0] [i_0] [i_0]) / (var_7)))));
    }
    /* vectorizable */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_22 [i_21] [i_21] [i_21] [i_21] [i_21] [(signed char)3]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (arr_19 [i_21] [i_21] [i_21])))) : (arr_46 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])));
        arr_67 [i_21] |= ((/* implicit */_Bool) (-(var_15)));
        arr_68 [i_21] = ((/* implicit */long long int) 2554190239U);
        var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) arr_23 [i_21] [i_21]))));
    }
}
