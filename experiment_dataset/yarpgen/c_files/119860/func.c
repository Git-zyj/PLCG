/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119860
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [(unsigned short)15] [(unsigned short)15] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_0 [i_0]))))), (min((arr_1 [i_0] [i_1]), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) || (((/* implicit */_Bool) 2573483221U)))))))));
                var_12 = ((/* implicit */short) min((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) 1721484075U)) : (arr_0 [i_1 - 1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (long long int i_4 = 3; i_4 < 21; i_4 += 4) 
            {
                {
                    var_13 = max((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1793310893U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4037255959U)))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [(unsigned char)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (4294967277U)))))));
                    arr_11 [i_4] = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) arr_2 [i_2] [i_3])) ? (4294967268U) : (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_11)))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((/* implicit */unsigned char) var_9)), (var_2))))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_20 [i_6] &= ((/* implicit */unsigned int) ((_Bool) arr_3 [18U] [i_6] [(signed char)4]));
                arr_21 [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (arr_19 [i_5] [i_5] [i_6]) : (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */int) var_2))))))) / (((arr_7 [i_5] [i_5]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_8))));
            }
        } 
    } 
}
