/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101148
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
    var_17 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (unsigned char)86)) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)26980)) : (475694629))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_7 [(unsigned char)1] [i_1] [(short)1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((long long int) var_7))) ? (((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned int) (-2147483647 - 1))))) : (2135038446U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) (unsigned short)31052))))) ? ((+(((/* implicit */int) arr_4 [3ULL])))) : ((~(arr_6 [i_0] [i_0]))))))));
                var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [18ULL] [i_1]), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */long long int) min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned int) (unsigned short)34482))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (-7096029502696816273LL)))))) ? (((long long int) ((arr_3 [i_0] [i_0] [i_1]) | (var_16)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((var_16) ^ (((/* implicit */int) (unsigned short)34484))))), (min((((/* implicit */unsigned int) arr_0 [i_1] [i_1])), (704584444U))))))));
                var_19 += ((/* implicit */unsigned int) (unsigned char)92);
            }
        } 
    } 
}
