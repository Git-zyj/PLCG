/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11192
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((var_1) % (((/* implicit */long long int) var_7)))) >> ((((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)57)))) + (69))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33829)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)185))))) ? (((((/* implicit */int) arr_1 [i_2])) - (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((arr_2 [i_0] [i_0]) < ((((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) arr_0 [i_1])))))))));
                    arr_7 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49235)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) | (((((/* implicit */long long int) arr_0 [i_0])) | (var_1)))))) : (((((((/* implicit */_Bool) (signed char)86)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_3 + 3] [10U] [i_4 + 1] [i_3] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) arr_8 [i_4 - 1] [i_1] [i_2] [i_2] [i_0] [i_0])) : (((arr_2 [i_4 - 1] [i_3 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_3 + 2] [i_3 + 3] [i_4 - 1] [i_4] [i_4] [i_4 - 1])) ? (arr_9 [i_3 + 1] [i_3 + 1] [i_4 - 2] [21] [2ULL] [i_4]) : (((((/* implicit */_Bool) arr_9 [i_3 + 2] [i_3 + 2] [i_4 - 2] [i_4] [i_3 + 2] [18ULL])) ? (arr_9 [i_3 + 2] [i_3 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4]) : (arr_9 [i_3 + 4] [i_3 - 1] [i_4 - 2] [i_4] [(unsigned char)5] [i_4])))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [(unsigned short)13] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2])) - (((/* implicit */int) arr_1 [i_0]))));
                }
            } 
        } 
    } 
}
