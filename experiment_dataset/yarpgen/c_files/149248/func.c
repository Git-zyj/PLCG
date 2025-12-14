/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149248
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_13 [i_1] = max((((29ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))), (((/* implicit */unsigned long long int) max((arr_6 [i_1]), (arr_6 [i_1])))));
                                var_18 *= ((/* implicit */unsigned int) var_13);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) 29ULL)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (40ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109))))))))))))));
                arr_14 [i_1] [13ULL] [i_1] = ((/* implicit */signed char) var_7);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (unsigned char i_7 = 4; i_7 < 21; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_7)), ((~(arr_5 [i_7 + 1] [i_7 - 3] [i_7 - 4]))))))));
                                var_21 = ((/* implicit */long long int) max((((((((/* implicit */int) var_11)) + (2147483647))) >> (((1411024815) - (1411024796))))), (max((arr_15 [i_5] [i_5]), (arr_15 [i_5] [i_5])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 20; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 19; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (signed char)17)) << (((((/* implicit */int) (unsigned char)189)) - (174)))))));
                                arr_34 [i_5] [i_5] [(short)3] [9LL] [i_7] [i_10] [i_11] = ((/* implicit */_Bool) ((((_Bool) arr_22 [i_7 - 2] [i_7] [i_7] [i_5])) ? (((arr_5 [i_10 + 2] [i_11 + 3] [i_11]) / (arr_5 [i_10 + 1] [i_11 + 2] [i_11]))) : (((/* implicit */unsigned long long int) arr_20 [i_10 + 1] [i_5]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) == (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_12))))))))) < (((((/* implicit */_Bool) var_1)) ? (max((var_6), (((/* implicit */unsigned long long int) (unsigned short)41546)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_13)))))));
    var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((((/* implicit */int) ((unsigned short) var_8))) - (((/* implicit */int) var_7))))));
}
