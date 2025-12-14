/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183718
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
    var_14 = (~(max((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) var_10)) ? (var_11) : (-8610447431069310227LL))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_3 [i_0] [i_1] [(_Bool)1]))))))), ((~(((arr_0 [i_0] [i_0]) & (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_1] [i_1]))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                    arr_9 [i_0] [i_0] [i_1] [i_2 + 3] = ((/* implicit */unsigned char) ((long long int) 0U));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((((((((/* implicit */_Bool) 15ULL)) ? (4767747634294925835LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) > (((/* implicit */long long int) (+(((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-84))))) ? (((2569880745U) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49899))))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (max((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) var_12))))));
    /* LoopNest 3 */
    for (long long int i_3 = 2; i_3 < 22; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) 666703852)) || ((_Bool)0))))));
                    arr_17 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [(signed char)8] [i_5])) && (((/* implicit */_Bool) arr_16 [(short)2] [(short)2]))))), (arr_15 [i_5] [i_4] [i_4] [i_3])))) ? (((unsigned long long int) ((_Bool) arr_15 [i_3] [i_4] [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_4] [i_3 + 3])) % (((int) var_6)))))));
                    arr_18 [i_3] [i_4] [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_13 [i_3]))));
                }
            } 
        } 
    } 
}
