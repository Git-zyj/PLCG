/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172253
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) arr_3 [i_1] [i_1] [i_0]);
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+((+(((/* implicit */int) min(((short)6), (((/* implicit */short) (signed char)-1))))))))))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    arr_8 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */int) (short)16915);
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_10))));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    arr_12 [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_3 - 1])) + (((/* implicit */int) var_15))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                    {
                        var_22 -= ((/* implicit */unsigned short) ((arr_9 [i_1 - 1] [i_1 + 2] [i_1 - 1]) ? (((/* implicit */int) arr_9 [i_1 + 2] [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 2] [i_1 - 1]))));
                        arr_16 [i_3] [i_3] = ((arr_7 [i_1 + 1] [i_1 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1 - 1]))));
                    }
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_2 [i_0] [i_0]))));
                        arr_19 [i_0] [i_3] [i_3] [i_5] [i_3] = (short)-6;
                        var_24 = ((/* implicit */signed char) var_5);
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) ((var_0) < (arr_17 [i_0] [i_1] [i_3] [i_1 + 1])));
                    }
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3])) ? (arr_4 [i_1] [i_3] [i_3 + 1] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18494)))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))) : (arr_5 [i_0] [i_0] [i_1] [i_3])))) : (var_5))))));
                    arr_21 [i_0] [i_3] [(short)7] = ((/* implicit */signed char) arr_14 [(unsigned char)11] [i_1 + 2] [i_1]);
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    var_27 = ((/* implicit */int) (signed char)-1);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        arr_28 [i_6] [(short)12] [0LL] [i_7] [i_6] [i_1] = ((/* implicit */long long int) arr_17 [i_0] [i_1] [i_6] [i_7]);
                        arr_29 [i_0] [i_1] [i_1] [i_6] [i_7] [i_7] = ((/* implicit */signed char) var_10);
                    }
                    arr_30 [i_6] = ((/* implicit */_Bool) ((unsigned long long int) arr_10 [(short)2] [i_0] [(signed char)6]));
                    var_28 ^= ((/* implicit */unsigned long long int) (signed char)-25);
                    var_29 -= ((/* implicit */unsigned long long int) var_12);
                }
                for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (17366827041999126116ULL) : (((/* implicit */unsigned long long int) arr_35 [i_0] [(short)16] [i_0] [i_0]))))) && (((/* implicit */_Bool) -352956952406513552LL)))) ? (arr_14 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1])))));
                        arr_38 [i_8] [i_1 + 1] [i_1 + 1] [i_8] = ((/* implicit */short) arr_6 [i_9]);
                        arr_39 [i_8] [i_1 + 1] [i_8] [i_9] = ((/* implicit */short) arr_2 [i_1 + 2] [i_1 - 1]);
                        arr_40 [i_1] [i_9] [i_8] [i_9] [(_Bool)1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned short) var_9)), (arr_1 [i_0] [i_1]))))) ? (max((((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_8] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)25)) | (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        arr_41 [i_8] [(unsigned short)6] [16] [i_8] = ((/* implicit */unsigned short) var_13);
                    }
                    var_31 *= ((/* implicit */_Bool) max((((arr_32 [i_1 - 1] [i_1] [8U]) + (((/* implicit */long long int) min((((/* implicit */int) arr_10 [i_8] [(signed char)4] [i_0])), (2147483642)))))), (((/* implicit */long long int) (-((+(arr_37 [i_0] [i_1 + 1] [i_8] [i_1] [i_8] [i_1]))))))));
                    var_32 = (~(((int) arr_17 [i_0] [i_0] [i_8] [i_0])));
                    arr_42 [i_1 + 2] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_8] [i_1 - 1] [i_1 - 1]))) <= (18019883945983614643ULL))))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (var_3)));
    var_34 = ((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned long long int) var_12))));
}
