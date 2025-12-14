/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114734
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
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_1)) : (max((arr_5 [i_0] [i_1] [i_1 + 1] [i_0 + 1]), (arr_6 [0LL] [i_2] [i_1 + 1] [0LL])))));
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) < (var_11))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) var_9)) : (arr_4 [i_0]))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (var_4)))) ? (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) ((unsigned char) var_0)))))) && (((/* implicit */_Bool) ((unsigned char) var_6)))));
}
