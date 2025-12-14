/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133575
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) arr_2 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) min((min((((/* implicit */unsigned short) arr_1 [i_0] [i_1])), (arr_3 [i_1]))), (max((arr_3 [i_0]), (arr_9 [i_0] [(unsigned short)14])))))), ((~(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))))))));
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3] [i_0] [i_3 - 1]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]);
                /* LoopSeq 1 */
                for (unsigned int i_4 = 2; i_4 < 14; i_4 += 1) 
                {
                    arr_12 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))) % (((/* implicit */int) min(((signed char)-18), (((/* implicit */signed char) (_Bool)1)))))));
                    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_6 [i_4] [i_4 - 2] [i_4 - 2]), (((/* implicit */unsigned long long int) arr_7 [i_4 + 1] [i_4 - 1] [i_0] [i_4])))))));
                }
                var_25 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_17))));
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        var_27 += ((/* implicit */unsigned short) (+(((arr_13 [i_5]) - (((/* implicit */unsigned long long int) arr_14 [(unsigned char)8]))))));
        arr_16 [i_5] = ((/* implicit */unsigned short) (~(min((arr_7 [i_5] [i_5] [i_5] [i_5]), (arr_7 [i_5] [i_5] [i_5] [i_5])))));
        arr_17 [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5]))) != (arr_6 [i_5] [i_5] [i_5])))), ((-(arr_6 [i_5] [i_5] [i_5])))));
        var_28 *= max((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_5] [(unsigned char)0])) >> (((((/* implicit */int) arr_9 [i_5] [(short)12])) - (12003)))))), (arr_7 [i_5] [i_5] [12LL] [i_5]));
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) arr_3 [i_5]);
    }
    for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            for (signed char i_8 = 3; i_8 < 15; i_8 += 1) 
            {
                {
                    var_29 ^= ((/* implicit */unsigned long long int) ((min((((/* implicit */int) arr_26 [i_6] [i_7] [i_8 - 2])), ((-(((/* implicit */int) arr_24 [i_6] [i_7] [i_8 + 1])))))) - ((+(((/* implicit */int) arr_24 [i_7] [i_7] [i_7]))))));
                    arr_29 [(unsigned short)14] [i_7] [i_8 - 3] [i_7] &= ((/* implicit */signed char) arr_27 [(unsigned short)0] [i_7]);
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 3; i_9 < 14; i_9 += 1) 
                    {
                        arr_34 [i_6] [i_6] = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)52772)), (1556090798U)));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) max((max((arr_24 [i_9 + 2] [i_9 - 1] [i_8 - 2]), (arr_24 [i_9] [i_9 + 1] [i_8 + 1]))), (max((arr_24 [i_9] [i_9 - 3] [i_8 - 2]), (arr_24 [i_9] [i_9 - 1] [i_8 - 1]))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        var_31 ^= (~(((/* implicit */int) arr_31 [i_8 - 1] [(signed char)6] [i_8] [i_8 + 1] [i_8])));
                        arr_39 [i_6] = (~(((/* implicit */int) arr_23 [i_8 - 3] [i_8 - 3])));
                    }
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned long long int) arr_23 [i_6] [i_6]);
        var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(arr_20 [i_6])))), (min((arr_35 [i_6] [i_6] [i_6] [i_6]), (arr_35 [i_6] [i_6] [i_6] [i_6])))));
    }
    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (~(((/* implicit */int) min((max((var_9), (((/* implicit */short) var_4)))), (((/* implicit */short) var_0))))))))));
}
