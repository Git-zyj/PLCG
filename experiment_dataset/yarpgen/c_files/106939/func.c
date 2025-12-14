/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106939
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (signed char i_4 = 2; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_10 *= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_3] [i_3] [i_4 - 2] [i_3] [i_4])) ? (arr_11 [i_3] [i_3] [i_3] [i_2] [i_4 - 2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [10] [10] [i_1] [10] [i_4 + 2] [i_2] [10]))))));
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) ((((/* implicit */int) var_3)) / (arr_4 [i_4] [i_4] [i_4 + 2])))))));
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] = min((((/* implicit */int) ((unsigned char) min((var_2), (((/* implicit */int) arr_1 [i_3])))))), (arr_10 [i_0] [i_0] [i_0] [i_0]));
                        }
                    } 
                } 
            } 
            var_11 *= ((unsigned long long int) ((((/* implicit */int) (unsigned short)43274)) | (1749085685)));
            var_12 = ((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1] [13U] [i_1]);
        }
        arr_15 [0U] |= ((/* implicit */long long int) var_5);
        var_13 |= min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (max((((/* implicit */int) var_7)), (var_2))));
    }
    for (long long int i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        var_14 = ((/* implicit */signed char) ((((var_1) - (var_1))) * (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_5] [12U] [i_5] [i_5] [12U] [(short)3] [i_5 - 1])), (var_9)))) * (((((/* implicit */_Bool) 2093525694)) ? (2047) : (((/* implicit */int) (signed char)31)))))))));
        arr_19 [i_5] = ((/* implicit */short) var_5);
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                for (long long int i_8 = 1; i_8 < 16; i_8 += 1) 
                {
                    {
                        arr_27 [i_5] [i_6] [i_7] [i_8] [(unsigned char)12] |= ((/* implicit */_Bool) (-(arr_21 [i_5] [i_6])));
                        arr_28 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_8 + 2])) - (((((/* implicit */_Bool) arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_8 - 1])) ? (((/* implicit */int) (unsigned short)63934)) : (((/* implicit */int) arr_7 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_8 + 2]))))));
                        var_15 = ((/* implicit */unsigned char) ((arr_10 [i_5] [i_5 - 1] [i_5] [i_5 + 1]) >> (((min((((/* implicit */unsigned int) arr_6 [i_8 + 1] [i_8 - 1] [i_5 - 1] [i_5])), (4294967295U))) - (4294956913U)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        arr_33 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_9])) ? (var_1) : (((/* implicit */long long int) arr_4 [i_9] [i_9] [i_9]))));
        arr_34 [i_9] [i_9] = ((/* implicit */short) arr_22 [i_9] [i_9] [i_9]);
    }
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) ((int) var_1)))))))));
    var_17 = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_3))))));
    var_18 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_6))))));
}
