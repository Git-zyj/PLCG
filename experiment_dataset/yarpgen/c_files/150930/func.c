/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150930
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_9))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)64)) << (0ULL)))))) ? (arr_4 [i_2 - 1] [i_2 - 1] [i_2 + 1]) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) -5241551289974250259LL)))))))));
                    var_21 &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) ((_Bool) arr_0 [i_0]))) : ((-(((/* implicit */int) (unsigned short)0)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_4 [i_0] [i_0] [i_2 + 1]) : (((/* implicit */int) arr_3 [(short)1] [10] [i_0]))))) ? (((/* implicit */int) max((arr_3 [i_0] [i_1] [3LL]), (arr_3 [i_2] [7LL] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [7LL] [i_0])))))))));
                }
                for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    var_22 = ((/* implicit */short) (~(min((arr_4 [i_3] [i_1] [i_0]), ((~(((/* implicit */int) arr_3 [i_0] [i_1] [i_3]))))))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) (unsigned short)65535)))) && (((/* implicit */_Bool) ((signed char) arr_8 [i_0] [i_1] [i_3] [i_0]))))))));
                    var_24 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_3]))) | (((unsigned int) arr_0 [i_3])))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_3])))));
                    var_25 &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1]))));
                }
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */_Bool) arr_11 [i_5 + 2] [i_5] [(short)11] [i_5])) ? (arr_11 [i_5 + 3] [i_5] [i_5] [i_5]) : (arr_11 [i_5 + 1] [i_4] [i_4] [i_4]))) : (((arr_11 [i_5 - 1] [i_5] [(signed char)1] [i_1]) - (arr_11 [i_5 + 1] [i_1] [(unsigned char)5] [i_1])))));
                                var_27 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)23834))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [10LL] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])) && (((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [0U]))))), (((((/* implicit */_Bool) arr_1 [i_0] [(short)9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_1]))) : (arr_6 [i_0])))));
                }
                var_29 = ((/* implicit */short) (~(((/* implicit */int) ((var_1) > (((/* implicit */long long int) arr_4 [(_Bool)1] [i_0] [i_0])))))));
                var_30 += ((arr_6 [i_1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [1LL])) ? (arr_12 [i_1] [i_1] [i_1] [(short)10]) : (arr_12 [(signed char)5] [i_0] [i_1] [i_1])))));
                arr_19 [i_0] [i_1] [(_Bool)1] = ((/* implicit */short) (((-(arr_7 [i_0] [i_0] [i_0]))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [(signed char)0] [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
            }
        } 
    } 
}
