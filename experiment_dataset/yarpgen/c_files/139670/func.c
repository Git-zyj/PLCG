/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139670
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
    var_10 = (~((~(max((((/* implicit */unsigned long long int) var_1)), (var_7))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 += ((/* implicit */unsigned short) min((min((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (min((arr_0 [i_0]), (arr_0 [(signed char)1]))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        var_12 = min((min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [19LL]))), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [7LL]))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) max((min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])), (arr_0 [i_1]))), (min((arr_0 [i_1]), (((/* implicit */unsigned long long int) (~(arr_3 [(signed char)18] [(_Bool)0])))))))))));
        arr_4 [i_1] = ((/* implicit */short) (+(arr_0 [i_1])));
    }
    for (unsigned char i_2 = 3; i_2 < 15; i_2 += 1) 
    {
        arr_8 [i_2 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [(_Bool)1])) ? (((/* implicit */int) arr_6 [i_2])) : (arr_3 [i_2] [(short)16])))), (min((arr_5 [8U]), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_2]))))))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_2]))))), (min((((/* implicit */unsigned long long int) arr_2 [i_2 - 1] [i_2])), (arr_5 [i_2]))))) : (arr_0 [i_2])));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) min((min((max((arr_9 [i_3]), (((/* implicit */long long int) arr_16 [i_2] [i_3] [i_3] [i_4] [i_5])))), (((/* implicit */long long int) max((((/* implicit */unsigned char) arr_16 [i_5] [i_2 - 2] [i_4] [i_3] [i_2 - 2])), (arr_7 [i_5])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_11 [i_3]), (((/* implicit */signed char) arr_12 [i_4] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_11 [i_2])), (arr_6 [i_5]))))) : ((~(arr_15 [i_2] [i_2] [i_2 - 2] [i_2]))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 1) 
                        {
                            arr_20 [i_6] [14] [i_6] [i_6] [i_2 + 1] [i_2 + 1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_5]))))), (arr_15 [i_2] [i_3] [i_4] [i_5])))), (min((min((arr_17 [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_12 [i_6 + 1] [i_4])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [(short)14] [i_6])))))))));
                            arr_21 [i_6] [i_5] [i_6] [i_3] [i_2 - 2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [(short)19]), (arr_5 [i_4])))))))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_2])) ? (min((min((arr_17 [i_4] [i_2]), (((/* implicit */unsigned long long int) arr_14 [i_4] [i_5] [i_6])))), (((/* implicit */unsigned long long int) max((arr_7 [i_4]), (((/* implicit */unsigned char) arr_16 [i_5] [i_5] [i_5] [i_5] [i_5]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_6] [(_Bool)1] [1U] [i_5] [i_6]))))))));
                            var_16 = ((/* implicit */short) arr_7 [(short)7]);
                            var_17 = ((/* implicit */short) arr_11 [i_2]);
                        }
                        for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            arr_26 [(unsigned short)15] [i_3] [i_4] [13ULL] [(unsigned short)7] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_5]), (((/* implicit */unsigned long long int) arr_10 [i_7]))))) ? ((+(arr_3 [i_7] [i_3]))) : (((/* implicit */int) arr_11 [i_5]))))) ? (((/* implicit */int) arr_12 [i_2] [i_2])) : (((/* implicit */int) arr_12 [i_3] [i_4])));
                            arr_27 [i_7] [i_7] [i_5] [(signed char)4] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) arr_15 [i_2] [i_2] [i_4] [(short)14]);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            for (int i_9 = 2; i_9 < 15; i_9 += 1) 
            {
                {
                    var_18 = arr_22 [i_2] [i_8] [i_2] [i_9] [i_9];
                    var_19 = ((/* implicit */unsigned short) arr_24 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 - 3]);
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 12; i_10 += 1) 
                    {
                        for (int i_11 = 3; i_11 < 14; i_11 += 3) 
                        {
                            {
                                arr_39 [i_2 - 3] [i_8] [i_9 - 1] [i_10 + 2] [i_8] [i_9] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_31 [i_8] [i_9] [i_11])), (arr_13 [i_2])))) ? (((((/* implicit */_Bool) arr_9 [i_10 - 1])) ? (((/* implicit */int) arr_12 [i_2] [i_2])) : (((/* implicit */int) arr_18 [i_8] [i_8] [i_8])))) : (arr_10 [i_10])))), ((-(((((/* implicit */_Bool) arr_37 [i_9] [i_9] [i_9] [i_2])) ? (arr_32 [(short)2] [(short)2] [i_10] [i_9]) : (((/* implicit */unsigned int) arr_37 [i_11] [i_8] [i_9] [i_10 - 1]))))))));
                                var_20 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [9ULL]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 += ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_3 [i_2 + 1] [(_Bool)1]), (((/* implicit */int) arr_19 [8ULL] [6U] [i_2 - 1] [6U] [i_2]))))), (arr_24 [i_2 - 2] [(short)2] [(short)3] [i_2] [i_2 - 2])))) ? (min((min((arr_24 [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 3]), (((/* implicit */unsigned long long int) arr_16 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 - 1])))), (arr_24 [(signed char)10] [i_2] [(signed char)10] [i_2] [(signed char)2]))) : (((/* implicit */unsigned long long int) min(((-(arr_33 [i_2 - 2] [i_2] [i_2] [i_2]))), (((/* implicit */int) arr_1 [i_2]))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_41 [i_12] [(_Bool)1])), (max((((/* implicit */unsigned long long int) min((arr_41 [i_12] [i_12]), (((/* implicit */unsigned short) arr_1 [i_12]))))), (arr_40 [i_12])))));
        arr_43 [i_12] = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) arr_40 [i_12])) ? (arr_0 [i_12]) : (arr_40 [(_Bool)1]))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_0 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_12] [i_12]))) : (arr_42 [i_12]))), ((-(arr_42 [i_12]))))))));
    }
}
