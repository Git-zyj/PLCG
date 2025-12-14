/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181305
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)41790)), (max((((/* implicit */unsigned long long int) (unsigned short)41790)), (var_1)))))) ? (max((((/* implicit */unsigned long long int) min((var_6), (var_13)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)212), ((unsigned char)43)))) ? (((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) (unsigned short)65531))))) : (((((/* implicit */int) (unsigned char)128)) >> (((((/* implicit */int) (unsigned short)41790)) - (41776))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) ((unsigned char) var_15)))), (((((/* implicit */_Bool) (-(5498488208018022867ULL)))) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 - 2] [i_0]))))));
                                arr_13 [i_0] [i_2] [i_2] [i_1 - 2] [i_0] = ((unsigned char) ((((/* implicit */int) arr_12 [i_1 - 2] [i_1] [i_2] [i_0] [i_4] [i_2 + 1])) ^ (((/* implicit */int) (unsigned char)26))));
                            }
                        } 
                    } 
                    var_20 *= ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) var_8)), (var_4)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_6)))) ^ ((-(((/* implicit */int) (unsigned short)37181))))));
                                arr_19 [i_0] [i_0] [i_1] [5ULL] [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) arr_9 [i_0] [i_0] [i_2 - 1] [i_5])));
                                arr_20 [i_0] [i_0] [i_2 - 1] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) (-(((unsigned long long int) arr_12 [i_2 - 2] [(unsigned char)11] [i_0] [i_0] [i_0] [(unsigned short)8]))));
                            }
                        } 
                    } 
                    arr_21 [(unsigned char)2] [i_0] [i_2] = ((/* implicit */unsigned char) max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_0] [i_0] [i_1 - 2] [i_1])) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_0] [i_0] [i_1 + 1] [10ULL])))))));
                    arr_22 [i_0] [i_1] [i_0] = min(((unsigned short)51035), (min((arr_18 [i_2 + 1] [i_2] [i_2] [i_2] [i_2 - 2] [i_2 + 1]), (((/* implicit */unsigned short) arr_16 [i_2] [(unsigned char)12] [i_0] [(unsigned short)1])))));
                }
            } 
        } 
    } 
}
