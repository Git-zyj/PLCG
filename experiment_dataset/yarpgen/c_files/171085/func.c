/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171085
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_10 |= ((/* implicit */int) arr_7 [i_0] [(short)0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 8; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((unsigned char) ((var_6) ^ (arr_8 [i_0] [i_2] [i_2] [i_4])))), (var_2)));
                                var_11 = ((/* implicit */signed char) ((unsigned char) var_5));
                                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (max((var_6), (arr_8 [i_0] [i_1] [i_2] [i_3 - 2]))))), (min((((/* implicit */unsigned int) ((var_5) >= (((/* implicit */int) arr_3 [i_0]))))), (((unsigned int) var_8))))));
                                arr_19 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] [i_0] [i_4] = ((/* implicit */long long int) min((((unsigned long long int) ((var_3) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */unsigned long long int) ((long long int) var_1)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((unsigned long long int) var_7));
                                var_12 |= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((int) ((unsigned char) var_5)))), (((((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))) & (min((((/* implicit */long long int) var_9)), (arr_14 [4ULL] [i_2])))))));
                                var_13 = ((/* implicit */unsigned int) ((unsigned char) arr_23 [i_0] [i_5 - 1]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 |= ((short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 4) 
        {
            {
                var_15 |= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_7)))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        {
                            var_16 = ((long long int) ((unsigned int) arr_33 [i_7] [i_7] [(unsigned char)7] [i_7]));
                            arr_35 [i_7] [i_7] [i_10] [i_10] [i_7] [i_7] |= ((/* implicit */short) arr_27 [i_10]);
                            arr_36 [i_7] [i_8] [i_9] [i_9] = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) min((arr_32 [i_9] [(_Bool)1]), (arr_32 [i_9] [(unsigned char)12]))))))), (arr_29 [i_9] [i_8 + 1])));
                        }
                    } 
                } 
            }
        } 
    } 
}
