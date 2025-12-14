/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102949
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [(short)5] [i_2] [i_2] = ((/* implicit */int) var_3);
                            arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) min((-5166442947858678325LL), (((/* implicit */long long int) 4294967290U)))))));
                            /* LoopSeq 1 */
                            for (short i_4 = 1; i_4 < 19; i_4 += 1) 
                            {
                                var_10 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) var_1)) & (-9223372036854775804LL)))))) < (((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_7))) * (((/* implicit */unsigned int) (-(arr_9 [i_2] [i_2] [i_1] [i_0] [i_1] [i_1 - 1]))))))));
                                var_11 = ((((arr_9 [i_2] [1] [i_2] [i_2] [4] [i_0]) >= (((/* implicit */int) arr_10 [i_1 - 1] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_3] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : ((+(-5166442947858678325LL))))));
                                arr_15 [i_4 - 1] [(unsigned short)13] [i_1] [i_3] [i_2] = ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) arr_14 [i_2] [i_2])))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    arr_18 [i_5] [i_5] [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                    var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((unsigned int) arr_8 [i_0] [i_1] [i_0] [i_1 - 1] [i_5])) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (var_4)))))))), (((unsigned long long int) ((arr_13 [(signed char)6] [(signed char)6] [(signed char)6] [i_0] [i_1]) ^ (((/* implicit */unsigned long long int) var_3)))))));
                    var_13 = ((/* implicit */unsigned long long int) 5166442947858678325LL);
                }
                /* vectorizable */
                for (unsigned char i_6 = 3; i_6 < 20; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 3; i_7 < 19; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_7)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (arr_2 [i_0] [i_7 + 1])))))))));
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (arr_1 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        arr_28 [i_9] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((16U) * (0U))) == (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_1 + 1] [i_9] [i_6] [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) var_5);
                            arr_33 [i_0] [i_0] [i_9] [(unsigned short)0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_6] [i_0] [i_9])) ? (var_6) : (((/* implicit */int) var_0)))) + (2147483647))) << (((((arr_1 [i_0]) + (5743804098257877136LL))) - (28LL)))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_9] [i_9] [i_9] [i_6 - 3] [i_1 - 2] [i_0] [i_9] = ((/* implicit */long long int) (+((-(arr_6 [i_9] [i_9] [i_11])))));
                            arr_39 [i_0] [i_0] [i_6] [i_9] [i_11] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0] [i_9] [i_0] [i_0]))));
                            var_16 = ((/* implicit */signed char) var_2);
                        }
                    }
                    for (unsigned short i_12 = 3; i_12 < 19; i_12 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned short) var_2);
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    }
                    for (unsigned short i_13 = 3; i_13 < 19; i_13 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_14 = 1; i_14 < 19; i_14 += 2) 
                        {
                            arr_47 [i_13 - 1] [i_14 - 1] [i_1 + 1] [i_13] [i_13] [i_6] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) -28)) || (((/* implicit */_Bool) 16U))));
                            arr_48 [i_14] [i_13] [i_14 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_1 - 2] [i_1 - 2] [i_13 + 1] [i_14])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))) : ((~(((/* implicit */int) (unsigned char)241))))));
                            var_19 = ((/* implicit */unsigned char) (+(arr_29 [i_13] [i_14] [i_14 - 1] [i_14 + 2] [i_13] [i_13])));
                        }
                        for (short i_15 = 0; i_15 < 21; i_15 += 3) 
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */unsigned int) var_6)) + ((+(var_1))))))));
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_13] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_6] [i_6] [i_13 - 3] [i_13] [i_13 + 2] [i_13]))) | (var_1)));
                            arr_52 [i_13] [i_13] [i_1] [i_13] [i_1 + 1] = ((/* implicit */signed char) var_1);
                        }
                        arr_53 [i_13] [i_13 - 2] [i_13] [i_13 - 2] [i_13 - 3] [i_13] = ((/* implicit */long long int) var_9);
                    }
                    arr_54 [i_6 - 3] [i_1] [i_0] [i_0] = ((long long int) 5166442947858678304LL);
                }
            }
        } 
    } 
    var_21 = var_7;
}
