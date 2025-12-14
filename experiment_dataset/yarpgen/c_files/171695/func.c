/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171695
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min(((-(var_0))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_2 [i_0]))))))))));
                arr_6 [i_0] [i_0] [i_1] = max((((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))), (((((/* implicit */_Bool) 2428199350U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2600288029U)))))), (min((((/* implicit */long long int) 2428199336U)), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
                arr_7 [i_0] = ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)240)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */short) (-(var_10)));
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))))) ? (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) (unsigned char)227)))) : (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_2]))))));
    }
    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_15 [i_3]))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (unsigned short i_5 = 1; i_5 < 11; i_5 += 3) 
            {
                {
                    arr_22 [i_5] = ((/* implicit */_Bool) (~(max(((~(((/* implicit */int) arr_19 [i_3] [i_4] [i_5])))), (((/* implicit */int) max((var_12), ((_Bool)1))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 4; i_6 < 13; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                arr_30 [(signed char)2] [i_4] [i_5 + 3] [i_6] [i_7] = ((/* implicit */unsigned long long int) (unsigned short)36347);
                                arr_31 [(unsigned char)11] [i_4] [i_5] [i_5] [i_4] [i_4] = (-(max((arr_12 [i_3] [i_3 - 2]), (((/* implicit */long long int) (unsigned char)218)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_32 [i_3] [i_3] |= ((/* implicit */unsigned short) arr_0 [2U]);
    }
}
