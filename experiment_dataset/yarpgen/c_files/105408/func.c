/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105408
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [(unsigned short)17] [i_2] = ((((((/* implicit */_Bool) (signed char)98)) ? (8589934591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1]))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_2 + 2]))))));
                                arr_13 [i_3] [3ULL] [i_3] [i_0] [i_3] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (8589934591ULL))), (2742791446671222756ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_1] [i_2] [i_1] [i_0] = var_6;
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_10 [i_2 + 2] [i_2 + 1] [i_6] [(short)11] [i_6])))), (((/* implicit */int) min((arr_10 [i_0] [i_2 + 2] [i_6] [i_6] [i_6]), (arr_10 [i_1] [i_2 + 2] [i_6 - 1] [i_6] [i_6]))))));
                                arr_22 [i_0] [i_1] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */unsigned char) ((short) min((((/* implicit */long long int) max((var_4), (((/* implicit */unsigned short) var_9))))), (((arr_4 [i_2] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
                                arr_23 [i_5] [i_1] [i_2] = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) var_15)))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [(signed char)7] = max((max((var_0), (var_1))), (((signed char) arr_14 [i_2 + 2] [i_2 + 2] [i_2 - 1])));
                    arr_25 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((int) min((((/* implicit */short) (signed char)83)), (((short) var_1)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 3; i_7 < 14; i_7 += 3) 
    {
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                {
                    arr_34 [i_8] [i_8] [i_9] = ((signed char) ((8589934597ULL) / (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                    arr_35 [i_9] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (signed char)78);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_11);
    var_20 = ((/* implicit */_Bool) var_1);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((var_1), ((signed char)-85))))) / (var_7)))) ? ((-(((/* implicit */int) (signed char)-67)))) : (((/* implicit */int) (signed char)83))));
}
