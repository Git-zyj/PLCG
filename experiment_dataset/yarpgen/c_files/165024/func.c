/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165024
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
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) var_1);
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 7; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)8] [i_3] [i_3])) ? (((((/* implicit */_Bool) ((arr_1 [i_1] [i_1]) | (arr_7 [i_0 + 3] [i_0] [i_0 - 1] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3]))) : (1233557923U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 + 3] [(unsigned short)6]))))) : (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) arr_3 [i_2])) > (((/* implicit */int) var_5))))), ((-(((/* implicit */int) arr_3 [i_1 - 2])))))))))));
                            var_14 |= ((/* implicit */int) min(((+(arr_7 [(short)4] [i_0 + 4] [i_2 + 1] [i_1 - 1] [i_2]))), (max((arr_7 [i_3] [i_0 + 4] [i_2 + 1] [i_1 - 1] [i_0 + 4]), (arr_7 [i_0 + 2] [i_0 + 4] [i_2 + 1] [i_1 - 1] [i_0 + 4])))));
                            arr_9 [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_1 [i_0 + 4] [i_0]))) ? (arr_8 [i_0] [(unsigned char)7] [i_0] [i_3]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0])))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((min((arr_7 [i_0 + 4] [i_0 + 2] [i_1 - 1] [i_1 - 2] [i_4]), ((~(arr_7 [i_4] [i_4] [i_4] [i_4] [i_4]))))) | (((((/* implicit */_Bool) (-(arr_7 [i_0] [i_0 - 1] [i_1 - 4] [i_1] [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_7 [i_0] [i_1] [(signed char)9] [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) < (1233557915U))))))))))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (+(((/* implicit */int) ((short) arr_4 [i_1 - 2] [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_16 [i_5] [i_5] [i_5] [i_5] [i_0] [i_5] [i_5] = (+(((/* implicit */int) (unsigned char)41)));
                                arr_17 [i_0 + 3] [i_1] [i_1 - 4] [i_1 - 4] [i_1] [i_0] [i_6] = ((/* implicit */int) arr_1 [i_0] [i_0]);
                                var_17 = (~(((((/* implicit */_Bool) 11609151867371894588ULL)) ? (arr_8 [i_0 + 4] [i_0 + 3] [i_0] [i_1 - 2]) : (arr_8 [i_0 - 1] [i_0 + 2] [i_0] [i_1 - 3]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    arr_20 [i_7] [(short)1] [i_7] [i_0] = ((/* implicit */signed char) (~(arr_10 [i_0])));
                    arr_21 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-30878))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) (+(arr_18 [i_0] [i_1 - 2])));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (int i_10 = 3; i_10 < 10; i_10 += 1) 
                        {
                            {
                                arr_32 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0 + 2] [i_0] [i_0 + 1] [i_1 + 1] [i_10 + 1] [i_10])))))) & (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [i_0] [i_8] [(short)2] [i_10]))))) & (arr_27 [i_10 - 3] [(unsigned short)1] [i_1 + 1] [i_9] [i_0 + 2] [i_9])))));
                                var_19 = ((/* implicit */unsigned long long int) max(((~(((arr_29 [i_0] [i_1] [i_1 - 3] [i_8] [i_8] [i_9] [i_0]) & (var_7))))), ((-(max((((/* implicit */unsigned int) -1059938962)), (3556664109U)))))));
                                var_20 = ((/* implicit */long long int) max((var_20), (((long long int) ((arr_27 [i_0] [i_1 - 2] [i_10 - 3] [i_1 - 2] [i_0 - 1] [i_0]) ^ (arr_27 [i_1] [i_0 + 1] [i_10 - 2] [i_1 + 1] [i_0 + 4] [i_0]))))));
                            }
                        } 
                    } 
                    var_21 = ((((/* implicit */_Bool) (~(arr_7 [i_0] [i_0 - 1] [i_1] [i_1 - 1] [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_22 [i_0] [i_1 + 1])) ? (1233557905U) : (arr_7 [i_0] [i_0 - 1] [i_1 - 4] [i_1 + 1] [i_1 - 4]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 10444451074711807784ULL)) ? (arr_22 [i_0] [i_1 - 4]) : (1059938960)))));
                }
            }
        } 
    } 
    var_22 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_1))))))) + (min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) var_10))))));
}
