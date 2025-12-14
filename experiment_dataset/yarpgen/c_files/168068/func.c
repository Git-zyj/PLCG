/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168068
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) (+(2773061051U)));
        var_12 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0 + 1]);
        arr_2 [i_0] = ((/* implicit */long long int) (~(max(((-(((/* implicit */int) arr_1 [i_0])))), (max((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0 + 1] [i_0 + 1])))))));
        var_13 = (!(((/* implicit */_Bool) (+(arr_0 [i_0 - 1] [i_0 + 1])))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        for (int i_2 = 2; i_2 < 17; i_2 += 4) 
        {
            {
                var_14 = (~(max((((/* implicit */unsigned int) (+(arr_0 [(_Bool)1] [(_Bool)1])))), (arr_6 [i_1]))));
                /* LoopSeq 3 */
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_7 [(unsigned char)4] [i_2] [i_2 - 2]))));
                    var_16 = ((/* implicit */unsigned int) arr_7 [i_2 - 1] [(_Bool)1] [i_2 + 2]);
                    var_17 = ((/* implicit */unsigned long long int) (-((+(arr_3 [i_2 + 1] [1U])))));
                    var_18 = ((/* implicit */_Bool) arr_4 [i_3]);
                    var_19 = min((max((1050464623), (arr_8 [i_1]))), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_9 [i_3] [12ULL] [i_1]), (((/* implicit */unsigned int) arr_1 [i_2])))))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    arr_13 [i_1] [i_2] [i_2] [16U] = max(((-(arr_3 [i_1] [i_2]))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))));
                    var_20 = ((/* implicit */unsigned int) arr_11 [i_1] [i_2] [i_4] [3]);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_12 [i_1] [i_2] [i_1] [i_6]))))));
                        var_22 = ((/* implicit */signed char) max((((/* implicit */int) arr_12 [(short)15] [i_2] [(short)15] [0U])), (max((arr_8 [i_2 - 1]), (arr_8 [i_2 + 2])))));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) min((arr_10 [(_Bool)1] [i_2] [i_2] [i_2]), (((/* implicit */long long int) max((((/* implicit */int) arr_16 [i_2 - 1] [i_2] [i_6])), (arr_8 [11LL])))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_24 = min((((/* implicit */long long int) arr_18 [i_5] [i_5] [i_5] [i_7] [5ULL])), (max((((/* implicit */long long int) (_Bool)1)), (arr_15 [i_5] [17ULL] [17ULL]))));
                        var_25 = ((/* implicit */signed char) arr_14 [(unsigned char)3] [i_2] [i_5]);
                        var_26 = ((/* implicit */short) max(((~((~(arr_4 [i_5]))))), (max((max((arr_4 [17]), (((/* implicit */int) arr_19 [i_1] [i_2 + 2] [i_7])))), (min((((/* implicit */int) arr_17 [13U] [i_2] [i_5] [13U])), (arr_0 [i_1] [i_1])))))));
                    }
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                        var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_23 [i_5] [i_2 - 2] [i_2 + 2] [i_2 + 2] [i_2 + 2]), (arr_23 [18] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                    }
                    for (int i_9 = 2; i_9 < 15; i_9 += 3) 
                    {
                        var_29 = ((/* implicit */int) max(((~(arr_14 [i_2] [i_2 - 2] [i_9 + 3]))), (((/* implicit */long long int) max((arr_21 [i_1] [i_2] [i_1] [i_2 - 1] [i_9 + 4] [i_5]), (arr_21 [i_9 + 1] [14] [2ULL] [i_2 - 1] [i_9 + 1] [i_5]))))));
                        var_30 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_2 + 2] [i_9])), (arr_10 [i_5] [i_2] [i_5] [i_9])))))))));
                        arr_28 [i_1] [(short)5] [i_5] [i_1] = ((/* implicit */_Bool) max((arr_14 [i_9 - 2] [i_2] [i_2 - 2]), (((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_9 - 2] [i_5] [i_5] [(unsigned char)7])))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_10 = 3; i_10 < 18; i_10 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            arr_34 [i_11] [i_11] [i_5] [i_5] [i_2] [i_1] = ((/* implicit */long long int) min((max((((/* implicit */int) min((arr_29 [i_1] [i_10 + 1] [i_1]), (((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_11]))))), ((-(((/* implicit */int) arr_24 [i_2 - 1] [i_2 - 1] [i_5])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_10 - 1] [1ULL])))))));
                            var_31 = min((((/* implicit */int) min((arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 2]), (arr_7 [i_2 + 2] [i_2 - 1] [i_2 - 2])))), (arr_4 [i_11]));
                            var_32 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_31 [i_10 - 2] [i_5] [i_10 - 3] [i_5] [i_2 + 2]))))));
                            var_33 = ((/* implicit */_Bool) max((((/* implicit */int) max((arr_7 [i_2 + 1] [i_10] [i_10 + 1]), (arr_7 [i_2 - 1] [i_5] [i_10 + 1])))), (min((((/* implicit */int) (signed char)1)), ((-2147483647 - 1))))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 4) 
                        {
                            arr_39 [i_5] [i_5] [i_10 + 1] [(unsigned short)8] = (-(((/* implicit */int) arr_12 [i_1] [6LL] [i_5] [i_12])));
                            var_34 = ((/* implicit */unsigned int) arr_12 [i_2 + 2] [i_2] [i_2 + 2] [8LL]);
                            var_35 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_1] [(unsigned short)5])))))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 19; i_13 += 3) 
                        {
                            var_36 = ((/* implicit */_Bool) min((var_36), ((!(((/* implicit */_Bool) arr_20 [i_10 - 2] [i_2] [i_2 - 1] [i_2] [i_2]))))));
                            var_37 = ((/* implicit */unsigned short) arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] [i_1]);
                        }
                        var_38 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_26 [i_2 - 2] [i_10]))))), (max((arr_26 [(unsigned short)8] [i_2]), (arr_5 [(unsigned char)7] [i_10]))))))));
                        var_39 = ((/* implicit */signed char) arr_35 [i_1] [i_2 - 2] [i_1] [i_10 - 3] [i_10 - 1]);
                        var_40 = ((/* implicit */_Bool) arr_38 [i_1] [i_5] [i_5] [i_5] [i_5] [i_10]);
                    }
                    var_41 = ((/* implicit */unsigned long long int) arr_24 [i_1] [(short)17] [i_5]);
                    var_42 = ((/* implicit */unsigned short) arr_30 [i_1] [(signed char)17] [i_5]);
                }
            }
        } 
    } 
    var_43 = var_0;
}
