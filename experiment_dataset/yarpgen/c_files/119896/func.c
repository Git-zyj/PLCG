/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119896
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
    var_11 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((signed char) (unsigned short)65535))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2024041255U)), (-4022057255111263740LL)))) : (max((((/* implicit */unsigned long long int) var_0)), (var_10))))) ^ (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_9)))) ? (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_12 ^= ((((((/* implicit */_Bool) var_10)) ? (arr_3 [(signed char)4]) : (arr_3 [8]))) - ((+(((/* implicit */int) var_1)))));
                    arr_7 [(unsigned short)16] [(unsigned short)20] [(unsigned short)20] [i_0] |= ((/* implicit */_Bool) max((((int) arr_3 [(short)18])), (max((arr_3 [10LL]), (arr_3 [(unsigned short)14])))));
                }
            } 
        } 
    } 
}
