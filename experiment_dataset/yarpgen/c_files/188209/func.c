/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188209
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) (+(arr_2 [i_1] [i_0 - 2])));
                var_17 &= min((9223372036854775807LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)63))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 2; i_4 < 10; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_18 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -9223372036854775799LL))));
                                arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_2 [3LL] [i_5]);
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_1 [i_2] [i_3])) | (((((/* implicit */_Bool) -1573823669)) ? (max((9223372036854775807LL), (((/* implicit */long long int) arr_7 [i_2] [7] [i_2])))) : (((/* implicit */long long int) min((((/* implicit */int) arr_7 [i_6] [i_4] [i_2])), (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                                var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_17 [i_2] [i_2] [i_4] [i_5] [2LL] [i_2] [i_4])), ((+(var_2)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 12; i_7 += 3) 
                    {
                        for (signed char i_8 = 1; i_8 < 10; i_8 += 2) 
                        {
                            {
                                arr_26 [i_2] [i_2] [3U] [i_2] [i_8] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (arr_15 [i_3 - 1] [i_3] [i_4 + 2] [i_8 + 3]) : ((+(arr_9 [i_2] [(unsigned char)12] [i_2] [i_7]))))));
                                var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_1)) >> (((arr_12 [i_4 - 2] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1]) + (741727678)))))));
                                var_21 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_3 - 1] [i_4 - 2] [i_8 + 3])) >= (((/* implicit */int) (unsigned char)158)))))) != (4088984317710300026LL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        for (long long int i_10 = 4; i_10 < 11; i_10 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((3342983164056169608LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32390))))), (min((((/* implicit */long long int) var_0)), (4088984317710300026LL)))))) ? (((/* implicit */int) (_Bool)1)) : (((1573823654) << (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) var_12)) : (var_5))) - (126330875U)))))));
                                arr_32 [i_2] [i_3] [i_2] [i_9] [i_9] [i_2] = ((/* implicit */unsigned int) var_16);
                                arr_33 [i_3] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) -2494501358238068737LL)) ? (((/* implicit */long long int) 3563936192U)) : (-4088984317710300007LL)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (arr_8 [i_3 - 1] [i_4 - 1]) : (arr_1 [i_4] [i_2])))), (((long long int) ((((/* implicit */_Bool) arr_31 [0U])) ? (((/* implicit */unsigned long long int) -4088984317710299993LL)) : (arr_9 [i_2] [i_3] [i_4 - 2] [i_3]))))));
                    arr_34 [i_2] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (4088984317710300006LL))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_14))));
}
