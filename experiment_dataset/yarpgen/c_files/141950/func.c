/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141950
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
    var_15 = ((/* implicit */long long int) max((var_3), (var_10)));
    var_16 = ((/* implicit */unsigned long long int) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)8])) ? (((-13) / (((/* implicit */int) (unsigned short)14005)))) : (((/* implicit */int) (unsigned short)38545))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1])) ? (arr_0 [8ULL]) : (arr_3 [(unsigned short)6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14005)))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((2915514967U), (((/* implicit */unsigned int) (unsigned short)51531)))))))))))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max(((-(max((((/* implicit */unsigned long long int) var_9)), (arr_1 [i_0] [i_0]))))), ((+(arr_0 [(unsigned char)10]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 |= ((/* implicit */unsigned short) var_7);
                    var_21 |= ((/* implicit */unsigned long long int) (~(arr_2 [i_0 - 2] [i_1])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned int) ((arr_6 [i_0 - 2] [i_1] [i_0] [i_3] [i_0]) < (arr_6 [i_0] [i_0 - 1] [i_2] [i_4] [i_4])));
                                arr_11 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) ((arr_0 [i_0]) & ((+(arr_0 [i_0])))));
                                var_23 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] [(unsigned char)10] |= ((/* implicit */unsigned char) (unsigned short)51530);
                }
                /* vectorizable */
                for (short i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    var_24 |= ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)51531)) & (((/* implicit */int) (short)-8))))));
                    arr_17 [i_0] [i_5] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (unsigned short)51530))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (int i_7 = 4; i_7 < 11; i_7 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_1] [i_0] [i_6] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)51531)))));
                                var_25 = ((/* implicit */short) ((2370216205U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
