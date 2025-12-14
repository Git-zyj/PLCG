/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121271
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
    var_16 += ((/* implicit */unsigned short) var_12);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_17 += ((/* implicit */long long int) var_6);
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1 - 2]))) ^ (var_0)))))))));
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_4 [i_0]))));
                    }
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2 + 1] [i_2 - 2])) ? (((/* implicit */int) arr_5 [i_2] [i_2 - 2] [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1]))))) && (((/* implicit */_Bool) ((unsigned char) arr_8 [i_2] [i_2 - 2] [i_2 + 1] [i_2] [i_2 - 2]))))))));
                        arr_11 [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_1 + 1] [i_2 + 1] [(short)6]))))) ? (((/* implicit */int) arr_2 [i_2 + 2] [i_2 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_2))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */signed char) min((max(((unsigned short)52822), (((/* implicit */unsigned short) var_10)))), (((/* implicit */unsigned short) ((signed char) ((short) (signed char)-24))))));
                            var_21 |= ((/* implicit */unsigned int) ((_Bool) ((short) arr_1 [i_1 + 1])));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)6] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_2 - 1] [i_2 + 1] [i_1 - 2] [i_6])) : (((/* implicit */int) arr_12 [i_1 - 2] [i_1] [i_1] [i_1 - 2] [i_1 - 2]))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_6])) | (((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_1 - 2] [i_6]))));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_1 - 1] [i_2 - 1] [i_2] [i_7] [i_7 - 1]))));
                            var_22 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_1 - 1] [i_4] [i_7] [i_2]))))), (max((arr_4 [i_1]), (((/* implicit */unsigned long long int) var_5)))));
                        }
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (-(((((/* implicit */_Bool) ((1184280378973687826LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-92)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 - 1]))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-1184280378973687826LL))))))))));
                        var_24 = var_13;
                        var_25 += ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_1 - 2] [i_2 - 1])) >> (((/* implicit */int) arr_2 [i_1 + 1] [i_2 + 1])))) << (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_2 - 2])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_2 + 1])) : (((/* implicit */int) var_1))))));
                        var_26 &= ((/* implicit */_Bool) max((((arr_15 [i_8] [i_8 - 1] [i_2] [i_2] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_2] [i_8 - 1] [i_8] [i_8] [i_2]))))), (((/* implicit */unsigned int) ((_Bool) ((short) arr_5 [i_0] [i_0] [i_0]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_9 = 1; i_9 < 16; i_9 += 2) 
    {
        for (unsigned int i_10 = 3; i_10 < 16; i_10 += 2) 
        {
            {
                arr_33 [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_27 [i_9 - 1]))));
                var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_32 [i_9] [i_10] [i_10])) ? (arr_28 [i_9]) : (((/* implicit */int) arr_26 [i_9])))), (((((/* implicit */int) (_Bool)1)) / (arr_28 [i_10]))))))));
            }
        } 
    } 
}
