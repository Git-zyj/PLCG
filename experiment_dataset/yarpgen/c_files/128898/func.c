/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128898
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_2] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0 - 1] [i_2]) > (((/* implicit */unsigned long long int) -4648686709975507797LL)))))) : (((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((arr_0 [i_0] [i_1]) >> (((((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) var_2)))) : (var_12))) - (38)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            {
                var_15 -= ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_6 [i_3])) == (var_8))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_3)))))) ? ((-((-(var_12))))) : (max((((/* implicit */int) var_1)), (((((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4])) + (((/* implicit */int) arr_3 [i_3] [i_3]))))))));
                var_16 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_17 [6ULL] [i_3] [i_3])) ? (arr_17 [i_4] [i_4] [10U]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)69)))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 3; i_5 < 9; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                arr_28 [i_3] [i_3] [i_7] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_3 [i_5 - 2] [i_5 + 2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_5] [i_5 - 2])) < (((/* implicit */int) var_2)))))) : (min((((/* implicit */unsigned int) var_9)), (arr_8 [i_6])))));
                                var_17 = ((/* implicit */unsigned short) ((max((arr_7 [i_5 + 1] [i_4] [i_5] [i_5]), (arr_7 [i_5 - 2] [12U] [(unsigned short)13] [i_5 - 2]))) ? (((arr_7 [i_5 + 1] [i_7] [i_5 - 1] [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5 - 1] [i_5 - 1] [i_5] [i_5]))) : (13759769710615322756ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5 - 2] [16] [i_4] [i_6])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
