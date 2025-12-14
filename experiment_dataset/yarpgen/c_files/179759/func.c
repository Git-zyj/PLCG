/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179759
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0 - 1] [i_1] [i_2] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_5 [i_2] [i_2] [i_0])), (max((((/* implicit */long long int) ((int) arr_6 [i_0 - 1] [i_1] [(signed char)1]))), (arr_3 [i_0 - 2])))));
                            arr_11 [i_0 + 2] [i_1] [19ULL] [19ULL] [i_3] [i_1] = ((/* implicit */long long int) max((1924447607), (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_20 [i_4] [i_1] [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_5 [i_0 + 2] [i_0 + 2] [i_4]), (arr_5 [i_0 + 2] [i_1] [i_4])))), (((int) (~(((/* implicit */int) arr_1 [i_5])))))));
                                arr_21 [i_0] [i_1] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_4] [i_0 - 1])) ? (((/* implicit */int) ((short) arr_5 [i_0 - 1] [i_0 - 1] [i_4]))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [1ULL] [(_Bool)1])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (arr_16 [i_6] [i_4]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((arr_32 [i_7] [i_8]), (((/* implicit */unsigned long long int) ((unsigned int) arr_22 [i_7]))))))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1616960671)) ? (23ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7] [i_7])))))) ? (((/* implicit */int) ((unsigned short) arr_29 [i_7] [i_8] [i_9]))) : (((/* implicit */int) ((signed char) arr_36 [i_7] [i_8] [i_8] [i_10] [i_11])))));
                                arr_37 [(unsigned short)1] [23U] [i_9] [23U] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_36 [i_7] [i_7] [i_9] [i_10] [i_11]), (arr_36 [(unsigned char)16] [i_8] [i_9] [i_10] [i_11])))) ? (((((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_9] [i_9] [i_8])) ? (arr_36 [i_7] [i_8] [i_9] [i_10] [i_8]) : (arr_36 [i_7] [i_8] [i_9] [i_9] [i_11]))) : (arr_36 [i_9] [i_9] [i_9] [i_8] [i_7])));
                                arr_38 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) arr_34 [i_10] [i_8] [i_10] [i_10] [(short)22] [0ULL]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (+(max((1616960653), (1616960671)))));
                                var_23 -= ((/* implicit */unsigned int) ((_Bool) arr_23 [5U]));
                                arr_44 [i_7] [i_8] [i_12] [i_13] = max((((unsigned int) arr_23 [i_7])), (((/* implicit */unsigned int) arr_31 [i_13] [i_9] [i_8] [i_7])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 1) 
                        {
                            {
                                arr_49 [i_8] [i_8] [i_14] [i_8] = arr_24 [i_15];
                                arr_50 [i_7] [13ULL] [i_8] [i_14] [i_15] = max((((/* implicit */int) ((_Bool) arr_22 [i_7]))), ((+(((/* implicit */int) arr_47 [i_7] [i_8] [i_8] [i_9] [i_14] [5])))));
                                var_24 = ((/* implicit */_Bool) max((arr_48 [i_7] [i_8] [i_9] [i_14] [i_15]), (((/* implicit */unsigned int) arr_34 [i_7] [i_7] [i_9] [i_14] [(unsigned short)17] [i_8]))));
                                var_25 = ((/* implicit */unsigned long long int) max((arr_47 [i_7] [i_8] [i_8] [i_8] [i_15] [i_8]), (arr_47 [i_7] [i_7] [i_9] [i_14] [i_15] [i_8])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
