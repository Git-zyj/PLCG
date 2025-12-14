/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104336
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
    var_17 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 + 1]);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_2 + 1] [i_0]))))) ? (min((arr_2 [i_1]), (arr_1 [i_1]))) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1]))))) ? (min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_2 + 1]))))), (arr_4 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_2 - 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_0])) ? (((((/* implicit */_Bool) min((arr_10 [i_1 + 1] [i_3] [i_1 + 1] [i_2] [i_2 + 2] [i_1 + 1] [i_0]), (((/* implicit */int) arr_9 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_0]))))) : (arr_4 [i_3] [i_4]))) : (((/* implicit */unsigned int) max((max((arr_1 [i_1]), (arr_2 [i_1]))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (arr_0 [i_4] [i_2 + 2]) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_1] [i_1] [i_1] [i_1] [i_0])) ? (arr_4 [i_0] [i_1]) : (arr_4 [i_2] [i_3])));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    var_21 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_5] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (signed char i_7 = 1; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1])) ? (((arr_9 [i_0] [i_0]) ? (((/* implicit */int) arr_8 [i_7] [i_5] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_5] [i_5])))) : (((/* implicit */int) arr_9 [i_0] [i_5]))))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_5] [i_6])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 1; i_9 < 22; i_9 += 3) 
                        {
                            var_24 = arr_3 [i_0] [i_0];
                            var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(max((((/* implicit */int) arr_3 [i_8] [i_1])), (arr_0 [i_0] [i_9 + 1])))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5] [i_8])) ? (max((arr_19 [i_5] [i_1 + 1] [i_0]), (((/* implicit */unsigned long long int) arr_17 [i_1] [i_1 + 1])))) : (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_8])), (arr_19 [i_0] [i_8] [i_8])))))));
                            var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1] [i_8] [i_9])), ((-(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_5] [i_5] [i_1 + 1] [i_0] [i_0])) ? (arr_16 [i_0] [i_1 + 1] [i_5] [i_8] [i_1 + 1] [i_9 + 1]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))))))) : (min((((arr_9 [i_5] [i_8]) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_8] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_11 [i_9 + 1] [i_0] [i_5] [i_1 + 1])) ? (arr_2 [i_0]) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_5] [i_8]))))))))));
                            arr_28 [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((arr_21 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_26 [i_5] [i_5] [i_1 + 1] [i_5] [i_9] [i_5] [i_5]))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_9] [i_8] [i_0] [i_8] [i_0])) ? (arr_24 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_9] [i_5] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((arr_27 [i_9] [i_9] [i_5] [i_8] [i_8] [i_5]) ? (((/* implicit */int) arr_8 [i_1] [i_5] [i_8] [i_9])) : (((/* implicit */int) arr_25 [i_9] [i_0] [i_5] [i_0] [i_0]))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1])))))))));
                            var_27 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((max((((/* implicit */int) arr_20 [i_0] [i_1 + 1] [i_5] [i_8] [i_9] [i_1])), (arr_26 [i_0] [i_1] [i_1 + 1] [i_5] [i_5] [i_5] [i_9 + 1]))), (((((/* implicit */_Bool) arr_21 [i_0] [i_8] [i_9])) ? (arr_10 [i_1 + 1] [i_9 - 1] [i_8] [i_5] [i_5] [i_1 + 1] [i_0]) : (((/* implicit */int) arr_25 [i_0] [i_1] [i_1 + 1] [i_8] [i_9]))))))), ((-(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_1] [i_0] [i_8] [i_1 + 1] [i_5]))) : (arr_21 [i_9 - 1] [i_9 - 1] [i_5])))))));
                        }
                        var_28 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_1 + 1])))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_9 [i_0] [i_1])), (arr_22 [i_0] [i_0] [i_5] [i_8])))) : (min((((/* implicit */int) arr_8 [i_1 + 1] [i_1] [i_5] [i_8])), (arr_0 [i_1] [i_5])))))), (max(((~(arr_19 [i_8] [i_1] [i_0]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_0] [i_1 + 1] [i_1] [i_8] [i_0] [i_0])))))))));
                        var_29 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1])))))))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_11 [i_0] [i_0] [i_5] [i_8])), (arr_8 [i_0] [i_1 + 1] [i_5] [i_0])))), (arr_16 [i_0] [i_0] [i_0] [i_0] [i_5] [i_8]))) : (((/* implicit */unsigned long long int) arr_1 [i_1 + 1])))))));
                    }
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_5] [i_10])), (arr_21 [i_10] [i_1] [i_1])))) ? ((((!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))) ? ((+(arr_31 [i_5] [i_5]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_5] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_10]))) : (arr_18 [i_0] [i_10] [i_0] [i_5] [i_5] [i_0] [i_0])))) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_10])) : (((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_5] [i_1] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_5])) : (((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1]))))))));
                        arr_32 [i_1] [i_1] [i_1] [i_10] = ((/* implicit */short) min((min((min((arr_26 [i_0] [i_0] [i_1 + 1] [i_0] [i_5] [i_10] [i_10]), (((/* implicit */int) arr_23 [i_0] [i_0] [i_5])))), (min((arr_31 [i_0] [i_5]), (arr_26 [i_0] [i_0] [i_0] [i_1] [i_1] [i_10] [i_0]))))), (((/* implicit */int) arr_5 [i_1 + 1] [i_0]))));
                        var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [i_1] [i_1]))));
                        var_33 = ((/* implicit */unsigned long long int) (-((~(((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_1 + 1] [i_1] [i_1] [i_1]))) : (arr_4 [i_0] [i_1])))))));
                    }
                }
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_10)))))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */int) var_10))))))));
}
