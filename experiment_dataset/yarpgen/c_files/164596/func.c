/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164596
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_17 &= ((/* implicit */short) ((((((arr_0 [i_2 - 2]) + (2147483647))) >> (((arr_4 [i_2 - 3] [i_2 - 1] [i_2 - 1]) - (3990964810U))))) >= (min((((/* implicit */int) var_5)), (arr_0 [i_2 + 1])))));
                    var_18 -= ((/* implicit */long long int) (signed char)-32);
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(arr_8 [i_2 + 1] [i_1] [i_2 - 3] [i_2])));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (arr_5 [i_0] [i_0] [i_0]))), ((((~(3710487115U))) == (arr_5 [i_0] [i_1] [i_1])))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_6 [i_0] [i_0] [i_1] [i_2]))))) - (min((((/* implicit */unsigned int) (signed char)-51)), (arr_4 [i_0] [i_0] [i_0])))))), (max((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_1])), (var_2)))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (long long int i_4 = 3; i_4 < 11; i_4 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 3; i_5 < 10; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) var_0);
                            arr_24 [i_3] [i_4] [i_4] [i_5] [i_3] [i_6] |= ((/* implicit */_Bool) (signed char)-88);
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_20 [i_4 - 2]))));
                var_22 = ((/* implicit */long long int) var_7);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_33 [i_7] [i_8] [i_9] [i_9] &= ((/* implicit */unsigned int) max((arr_26 [i_8] [i_8 + 2]), ((~(arr_26 [i_8 + 2] [i_8 - 1])))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((((var_16) * (((/* implicit */unsigned long long int) arr_26 [i_8 + 1] [i_8 - 2])))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_26 [i_8 + 2] [i_8 + 1])), (7586428504993503929LL)))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 4; i_11 < 12; i_11 += 4) 
                        {
                            {
                                arr_41 [i_7] [i_7] [i_8 - 1] [i_9] [i_10] [i_9] = ((/* implicit */unsigned char) arr_36 [i_8 - 2] [i_9] [i_8 - 2] [i_8]);
                                arr_42 [i_9] [i_8 + 2] [i_8 - 2] [i_8] [i_8 + 1] [i_8 - 1] = var_15;
                                var_24 -= ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) << (((min((((/* implicit */int) arr_7 [i_7] [i_7] [i_7])), (var_8))) - (16041))))) & ((((_Bool)0) ? (((/* implicit */int) (short)16191)) : (902527150)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) min(((_Bool)1), (arr_3 [i_12])));
                                arr_49 [i_7] [i_7] [i_7] [i_7] [i_9] = ((/* implicit */long long int) 4161901037U);
                                var_26 -= ((/* implicit */signed char) ((max((max((((/* implicit */long long int) 4013403151U)), (-1627161169527159768LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_11))))))) >= (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)233), (((/* implicit */unsigned char) var_10))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
