/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153324
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned char) ((max((max((var_12), (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_1])), (var_4)))))) % (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-7360)), (-5832079042981123228LL)))) ? (((/* implicit */int) (short)7359)) : (((/* implicit */int) arr_0 [i_0]))))));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~(min((((arr_5 [i_1] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (short)26078))))), (((/* implicit */long long int) arr_4 [i_2])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) (-((-(arr_7 [(signed char)10] [i_1])))));
                                arr_12 [i_1] [i_1] [i_4 - 2] [i_3] [9] = ((/* implicit */signed char) min((max((arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1] [2U]), (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [(signed char)8])) && (((/* implicit */_Bool) arr_8 [5ULL] [i_3] [i_2] [i_2] [i_1] [i_0]))))))), (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned short)9] [i_4 - 1]))) > (2183435343631849027LL)))))));
                                arr_13 [i_1] [(_Bool)1] [i_3] [4LL] = ((/* implicit */long long int) max((((((/* implicit */int) (short)0)) & (((/* implicit */int) (signed char)-27)))), (((/* implicit */int) (short)-7339))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) min((min((arr_7 [i_0] [i_1]), (((/* implicit */int) arr_4 [(short)7])))), (max((var_12), (((/* implicit */int) arr_4 [i_2]))))));
                }
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    arr_16 [i_1] = ((/* implicit */int) ((2669512440289871312LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)71)))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_0] &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_5] [i_6] [i_0] [i_7]))))) : (((/* implicit */int) var_2))))));
                                var_18 &= ((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) arr_3 [i_7])) : (arr_1 [i_0] [i_1]))), (((/* implicit */unsigned long long int) max((min((((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [i_6] [i_6] [i_7])), (var_12))), (((/* implicit */int) arr_6 [i_6] [i_6])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */int) var_11);
                                arr_32 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [6U] [i_8] [i_9])) ? (min((((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_2 [0] [i_0] [i_0]))) : (((unsigned long long int) var_12))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_9] [i_8] [i_8] [i_5] [i_1] [i_0])) || (((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_1] [i_8]))))), (((((/* implicit */_Bool) arr_2 [2U] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_9]))) : (arr_29 [i_0] [i_1] [i_5] [i_8])))))) : (((((/* implicit */_Bool) ((arr_9 [i_1] [i_5] [1ULL] [(short)13]) & (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) : (min((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_1)))))));
                            }
                        } 
                    } 
                    arr_33 [i_1] [i_1] = ((/* implicit */int) var_3);
                }
                var_20 *= arr_23 [(signed char)4] [i_1] [i_0] [i_0];
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (var_12)))))))));
}
