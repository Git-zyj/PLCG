/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173260
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [(short)12] [i_0] [(unsigned char)13] [9U] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) min((513293724), (((/* implicit */int) var_7))))) * (((234881024U) / (4161772006U))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((var_7) || (((/* implicit */_Bool) 12)))))))));
                    var_11 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) arr_2 [(unsigned char)13] [(short)15] [i_0])) ? (4161771990U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_7))))))) / ((~(min((((/* implicit */unsigned int) var_10)), (133195319U)))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (var_7)))))) + (2147483647))) >> (((((long long int) ((((/* implicit */_Bool) (unsigned short)21979)) ? (var_0) : (627255963433499146LL)))) + (4716222867162263263LL)))));
}
