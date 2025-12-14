/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11101
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32739)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)63))) : (-2028039856026207369LL)))) != (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_6)) : (var_12)))))) : (max((((/* implicit */int) var_0)), (var_9)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [(unsigned short)12] [(unsigned short)2] [i_0] = max((((/* implicit */long long int) ((((/* implicit */int) (signed char)59)) > (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((var_8) - (1923870396U)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (((((/* implicit */_Bool) arr_8 [i_1] [8U] [i_2])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-72))) / (max((((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32545)) && (((/* implicit */_Bool) (signed char)78)))))))));
                }
            } 
        } 
    } 
}
