/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178031
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) arr_0 [i_4]);
                                var_21 &= ((/* implicit */signed char) 0);
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */int) (unsigned short)47955);
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_6] = ((/* implicit */unsigned char) arr_5 [i_5] [i_5] [i_0]);
                                var_23 = ((/* implicit */unsigned long long int) min((arr_13 [i_0]), (arr_1 [i_6])));
                                arr_19 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_8 [i_6] [i_5] [i_1] [i_1] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (long long int i_7 = 1; i_7 < 14; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 3; i_9 < 16; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 3; i_10 < 13; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_34 [i_11] [i_11] [i_11] [i_11] [i_10] [i_9] = ((/* implicit */unsigned short) arr_31 [i_7] [i_8] [i_8] [i_10]);
                                var_25 = ((/* implicit */_Bool) 0);
                                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_22 [i_9]))));
                                var_27 = arr_2 [i_9 - 3];
                                arr_35 [i_11] [i_8] [i_10] = ((/* implicit */unsigned int) min((21), (((/* implicit */int) arr_33 [i_11] [i_8] [i_8] [i_8] [i_7]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 4) 
                    {
                        {
                            arr_41 [i_7] [i_8] [i_12] [i_8] &= ((/* implicit */short) min((((arr_40 [i_13] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (((/* implicit */int) arr_9 [i_8] [i_8] [i_8] [i_7])) : ((-(((/* implicit */int) arr_3 [i_7] [i_7])))))), ((~(((/* implicit */int) arr_40 [i_12] [i_12] [i_12] [i_13] [i_13] [i_12]))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_14 = 3; i_14 < 15; i_14 += 1) 
                            {
                                arr_45 [i_7] [i_7] &= ((/* implicit */_Bool) (((_Bool)1) ? (arr_10 [i_14] [i_12] [i_8] [i_7]) : (((/* implicit */unsigned long long int) arr_4 [i_14] [i_8] [i_8]))));
                                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) 18446744073709551615ULL))));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_12])) ? (((/* implicit */int) arr_33 [i_8] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_32 [i_7] [i_8] [i_7] [i_12] [i_12] [i_13] [i_7]))));
                            }
                            arr_46 [i_13] [i_12] [i_8] = min((((/* implicit */unsigned int) min((arr_22 [i_7 + 3]), (arr_22 [i_7 + 2])))), (arr_39 [i_7] [i_12] [i_7]));
                            arr_47 [i_7] [i_7] [i_7] [i_13] [i_13] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8] [i_7])) ? (arr_39 [i_7] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_13])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_7 + 2] [i_7] [i_7] [i_7] [i_7 + 2] [i_7 + 1]))) : (((((/* implicit */_Bool) arr_24 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)247))) : (2231477955331248468ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
