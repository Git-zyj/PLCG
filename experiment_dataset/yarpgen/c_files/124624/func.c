/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124624
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((min((arr_1 [i_0] [i_0 + 1]), (((/* implicit */int) arr_0 [i_0])))) ^ (((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_0] [i_1] [i_0]))) : (((((/* implicit */int) arr_6 [i_0])) / (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0]))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_1] [i_2] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [(unsigned short)14] [i_1] [i_2] [i_3] [i_3 - 1])) < (((/* implicit */int) arr_4 [i_0])))))) & (max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [19] [i_0])), (arr_2 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) >> (((((/* implicit */int) arr_4 [i_0])) - (2798))))))))) : (((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [(unsigned short)14] [i_1] [i_2] [i_3] [i_3 - 1])) < (((/* implicit */int) arr_4 [i_0])))))) & (max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [19] [i_0])), (arr_2 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) >> (((((((/* implicit */int) arr_4 [i_0])) - (2798))) - (47199)))))))));
                        arr_15 [i_0] [i_0] [i_2] [(unsigned short)18] = arr_3 [i_1] [i_0];
                        arr_16 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3])) ? (arr_1 [i_1] [i_2]) : (((/* implicit */int) arr_11 [i_3 - 1] [i_2] [i_0] [i_1] [i_0])))) : (((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3])) | (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_1]))))))) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1]))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        arr_19 [i_0 - 1] [i_1] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((arr_1 [i_1] [i_4]), (max((arr_1 [i_1] [i_1]), (((/* implicit */int) arr_0 [i_1]))))))) - (min((((/* implicit */unsigned int) (unsigned char)251)), (2U)))));
                        arr_20 [i_0] [i_1] [i_2] [i_1] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_1] [i_4 - 1])) ? (arr_1 [i_1] [i_4 + 1]) : (arr_1 [i_1] [i_4 + 1]))) / (arr_1 [i_1] [i_4 - 1])));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 20; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_26 [i_0 - 1] [i_1] [16] [i_2] [18ULL] [i_1] [i_0 - 1] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) ((unsigned char) (signed char)127)))))), (max((((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_1])), (arr_23 [i_0] [8] [i_1] [i_2] [i_5] [i_6])))));
                                arr_27 [i_0 - 1] [i_0 - 1] [i_2] [i_0] = ((/* implicit */int) arr_25 [i_0 + 1] [3LL] [i_1] [i_0] [i_0] [i_6]);
                            }
                        } 
                    } 
                    arr_28 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((signed char) (signed char)127))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_17 [i_0] [21LL] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (arr_23 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) arr_25 [i_0 - 1] [i_0 - 1] [i_1] [i_1] [20ULL] [8ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (arr_23 [(unsigned short)6] [i_2] [12U] [i_0] [i_0] [i_0 + 1]))) : (max((((/* implicit */unsigned int) arr_1 [i_1] [i_2])), (arr_23 [21] [i_0] [i_1] [(signed char)2] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_14 = ((unsigned char) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))));
}
