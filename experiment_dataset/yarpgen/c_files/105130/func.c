/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105130
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [(unsigned char)2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_7 [7U] [i_0] [i_2] [i_3]);
                                var_11 = ((/* implicit */long long int) (+((~(((/* implicit */int) ((signed char) arr_1 [i_2] [i_0])))))));
                                var_12 = max((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [(unsigned char)8] [i_2] [i_2 - 3])) > (((/* implicit */int) arr_4 [i_0] [i_2] [i_2] [i_2 + 2]))))), (arr_3 [i_1]));
                                arr_13 [i_4] [i_2] [i_2 - 1] [i_2] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((arr_3 [i_2]), (arr_8 [i_4] [i_3])))) && (((/* implicit */_Bool) arr_11 [i_4] [i_2 + 2] [i_1])))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_4])) : (((/* implicit */int) ((max((arr_8 [i_0] [i_1]), (arr_8 [i_3] [i_1]))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -1961040152718653553LL)))))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] = ((/* implicit */unsigned int) arr_3 [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 3; i_5 < 13; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (unsigned short i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                {
                    arr_23 [i_6] [i_5] = ((/* implicit */unsigned int) ((arr_20 [i_5 + 2]) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_5] [i_6] [i_7])) > (max((((/* implicit */long long int) arr_21 [i_5 + 2] [i_6] [i_7])), (arr_3 [i_5 + 1])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 14; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            {
                                arr_30 [i_5] [i_9] = ((unsigned int) arr_28 [i_8 + 1] [i_6] [i_5] [11U] [i_9] [i_5]);
                                arr_31 [i_5] [i_6] [i_7] [i_8] [i_9] [i_5] [i_7] = ((long long int) ((((/* implicit */_Bool) ((long long int) arr_17 [i_5]))) ? (((1961040152718653535LL) / (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_9]))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_28 [i_9] [i_9] [i_8] [i_7] [i_6] [i_5]) == (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((unsigned short) ((2638749639U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5 + 1])))))))));
                                var_14 *= (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
                                arr_32 [i_9] [i_5] [i_7 - 1] [i_5] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2352346230913780971LL))))), ((unsigned char)223)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 11; i_10 += 3) 
    {
        for (unsigned int i_11 = 3; i_11 < 10; i_11 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) (~(((/* implicit */int) (unsigned char)88)))))) == (max((((long long int) arr_33 [i_10])), (((/* implicit */long long int) arr_19 [i_10] [i_11] [i_11]))))));
                arr_37 [i_10] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((var_9), (((/* implicit */int) arr_6 [i_10] [i_10] [i_11]))))) ? ((+(arr_3 [i_10]))) : (((/* implicit */long long int) max((((/* implicit */int) arr_7 [i_10] [i_11] [i_10] [i_11])), (arr_24 [i_10] [i_10] [i_10] [i_11])))))), (((/* implicit */long long int) arr_24 [i_10] [i_11] [i_10] [i_11]))));
            }
        } 
    } 
    var_16 -= (-(2638749639U));
    var_17 = ((long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
}
