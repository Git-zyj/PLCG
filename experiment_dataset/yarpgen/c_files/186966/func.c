/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186966
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [(unsigned char)11] [i_0] = ((/* implicit */signed char) arr_7 [(unsigned char)0] [i_1] [i_0]);
                    arr_9 [2ULL] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((int) arr_6 [i_1] [i_1] [i_2 + 1] [i_0]));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) var_12)))))))))));
    var_20 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_15)), (min((var_8), (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) var_16)))))))));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 15; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            {
                arr_15 [i_3] = ((/* implicit */unsigned short) arr_1 [i_3]);
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((arr_2 [i_3] [i_4] [i_4]) ? (14250394093879468478ULL) : (var_8))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3 - 2]))))))));
                var_22 = min((((((/* implicit */int) var_7)) * (((/* implicit */int) arr_5 [i_3] [i_3 - 1])))), (((((/* implicit */_Bool) arr_7 [i_3 - 2] [i_3 - 2] [i_3])) ? (arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 2]) : (((/* implicit */int) (unsigned char)48)))));
            }
        } 
    } 
}
