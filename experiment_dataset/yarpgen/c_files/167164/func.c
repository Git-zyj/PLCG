/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167164
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 15895169607207638701ULL)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned short)11388))))) : (((unsigned int) var_15))))));
                            var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (arr_0 [i_1 - 2]) : (arr_0 [i_1 - 2]))), (arr_0 [i_1 - 2])));
                        }
                    } 
                } 
                var_21 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) min((var_14), (((/* implicit */unsigned long long int) arr_6 [i_0]))))))));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_22 = ((unsigned char) ((unsigned char) 12681272342972864047ULL));
                                var_23 = (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_6 [i_6])) ? (arr_0 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_4]))))) : (((/* implicit */unsigned long long int) arr_5 [i_0])))));
                                arr_16 [i_0] [i_0] [i_0] [i_4] [i_0] [i_6] &= ((/* implicit */unsigned int) min((((/* implicit */short) var_13)), (((short) 2551574466501912914ULL))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    for (unsigned char i_8 = 1; i_8 < 16; i_8 += 1) 
                    {
                        {
                            var_24 += ((/* implicit */short) (-(((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_12)))) ? (arr_13 [i_0] [i_0] [i_0] [i_8] [i_8 + 1]) : ((+(((/* implicit */int) (unsigned short)37384))))))));
                            arr_23 [i_8] [i_1] [i_7] |= ((/* implicit */unsigned long long int) arr_20 [12] [i_8 - 1] [i_7] [i_8] [i_8] [i_8]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        for (signed char i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            {
                var_25 &= ((/* implicit */signed char) var_12);
                var_26 = ((/* implicit */int) (((~(((unsigned long long int) arr_4 [i_9] [i_9])))) == (15895169607207638701ULL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 19; i_11 += 4) 
    {
        for (short i_12 = 1; i_12 < 20; i_12 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_13 = 2; i_13 < 21; i_13 += 4) 
                {
                    for (short i_14 = 2; i_14 < 21; i_14 += 3) 
                    {
                        for (short i_15 = 1; i_15 < 21; i_15 += 1) 
                        {
                            {
                                arr_44 [i_11 + 3] [i_15] [i_15 - 1] [i_14] [i_15 - 1] [i_11 + 1] [(unsigned char)1] &= ((/* implicit */int) (unsigned char)249);
                                arr_45 [i_11 + 2] [i_12] [i_14] [i_14] [10] [i_11 + 2] = (-(((/* implicit */int) arr_31 [i_11 + 1] [i_12 + 1])));
                                var_27 = ((/* implicit */unsigned char) (~(((unsigned long long int) (unsigned char)162))));
                                var_28 &= ((((/* implicit */_Bool) max((((/* implicit */int) arr_32 [i_14 - 2] [i_11 - 1])), (arr_41 [i_12 + 2] [i_13 - 1] [i_13 - 1] [i_13] [i_13 - 1])))) ? (((/* implicit */int) arr_39 [i_11 - 1] [(short)11] [i_15] [i_14 - 2] [i_15 - 1])) : ((-(arr_41 [i_12 - 1] [i_13] [i_13] [i_13] [i_13 - 2]))));
                            }
                        } 
                    } 
                } 
                var_29 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) (((-2147483647 - 1)) / (var_1)))) : (((((/* implicit */_Bool) (unsigned short)15310)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (2551574466501912914ULL))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_35 [i_11 - 1] [i_11 - 1] [i_11 - 1])) ? (var_7) : (arr_41 [i_11] [i_11] [i_11 + 2] [i_11] [i_12 + 2]))))))));
            }
        } 
    } 
}
