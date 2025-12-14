/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156908
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)15)) ? (2578118296U) : (1716849006U))), (((2578118296U) | (1716849000U)))));
                                var_19 = ((/* implicit */unsigned short) ((5188934250734562197ULL) != (((/* implicit */unsigned long long int) min((2578118296U), (((/* implicit */unsigned int) (_Bool)1)))))));
                                arr_15 [i_0] [i_2] [i_0] [i_2] [i_0] |= ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_9 [i_4] [i_1] [i_2] [i_3])))))));
                                var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_4), (var_4)))) || (min((((((/* implicit */_Bool) 2578118296U)) || (((/* implicit */_Bool) (unsigned short)65519)))), ((!(arr_10 [i_0] [i_1] [11] [i_3] [i_3])))))));
                                var_21 = ((/* implicit */signed char) var_17);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_7))));
                arr_16 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1])) + (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1]))))) && (((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 - 1] [i_0] [12U]))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))))) * (((/* implicit */unsigned int) var_3)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            {
                var_24 = ((((/* implicit */_Bool) arr_13 [i_5] [i_6] [i_6] [i_6] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [9ULL] [i_6]))))) : (((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_5])) && (((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_5] [i_5])))))) : (max((var_12), (((/* implicit */unsigned long long int) arr_8 [16] [i_6] [(_Bool)1] [i_6])))))));
                arr_23 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) var_14);
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 1) 
                    {
                        {
                            arr_28 [i_5] [i_8] [i_8] [i_8] [i_8 + 1] = ((/* implicit */_Bool) (-(((var_13) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_24 [i_6] [i_7] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(_Bool)1] [i_6] [i_6] [(_Bool)1] [i_5]))))))))));
                            var_25 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_10 [i_8] [8U] [i_7] [i_8] [i_8])))), (max((arr_12 [i_8] [i_6] [i_7] [i_5] [i_5] [i_8 - 1] [i_8]), (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_8] [i_5]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
    var_27 = ((/* implicit */int) var_2);
}
