/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131620
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
    var_10 |= ((/* implicit */long long int) (~(((/* implicit */int) (((~(var_3))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
                    {
                        var_11 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_1]))))), (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_2])), (7926005873712510453ULL)))));
                        var_12 = ((/* implicit */unsigned char) (+(((((arr_5 [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))));
                        var_13 = min((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_8 [i_0] [i_0] [i_2] [i_3]))), (((/* implicit */unsigned long long int) ((short) var_8))))), (((/* implicit */unsigned long long int) (((~(var_7))) < (((/* implicit */int) ((signed char) var_4)))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) min((((((arr_4 [i_0] [i_0] [i_0]) + (2147483647))) << (((/* implicit */int) arr_12 [i_4])))), (var_7)));
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((_Bool)0) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_2] [(_Bool)1])))) : (((arr_12 [i_0]) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [(_Bool)1] [i_4])) : (((/* implicit */int) arr_12 [i_0]))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            arr_21 [i_1] [i_2] [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)22821)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (((/* implicit */int) arr_12 [i_0]))));
                            arr_22 [i_0] [i_0] [i_5] [i_5] [i_1] [i_1] [i_0] = ((/* implicit */int) min(((-(arr_9 [i_1] [i_6]))), (((/* implicit */long long int) (((((~(((/* implicit */int) (short)22821)))) + (2147483647))) << (((((/* implicit */int) var_8)) - (1))))))));
                            arr_23 [i_0] [i_1] [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-22817))));
                            var_14 = ((/* implicit */unsigned char) var_1);
                        }
                        for (short i_7 = 2; i_7 < 16; i_7 += 3) 
                        {
                            var_15 = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1])) ? (((((((/* implicit */int) var_6)) << (((arr_25 [i_0] [i_0] [i_2] [i_0] [i_7]) - (2331754705U))))) ^ (((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((2261871411U), (((/* implicit */unsigned int) (unsigned short)52995))))))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1])) ? (((((((/* implicit */int) var_6)) << (((((arr_25 [i_0] [i_0] [i_2] [i_0] [i_7]) - (2331754705U))) - (2728207686U))))) ^ (((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((2261871411U), (((/* implicit */unsigned int) (unsigned short)52995)))))))))));
                            var_16 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
                            var_17 = ((/* implicit */unsigned int) max((((unsigned short) arr_7 [i_7 + 1] [i_7 + 1])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_5] [i_7 - 1])) : (arr_4 [i_1] [i_2] [i_1])))))))));
                        }
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_13 [i_0] [i_1] [i_2] [i_5]) & (((/* implicit */unsigned int) ((arr_6 [i_1] [i_1]) - (((/* implicit */int) arr_7 [i_0] [i_0])))))))) * (((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_10 [i_0] [4U] [i_0] [(signed char)1]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)22816)))))))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0]))))));
                        var_20 ^= ((/* implicit */signed char) (_Bool)1);
                    }
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) - (arr_25 [i_0] [i_0] [4LL] [i_2] [i_2]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9424675916161349302ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-110)) && (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_5)))))));
}
