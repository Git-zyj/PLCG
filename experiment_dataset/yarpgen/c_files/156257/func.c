/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156257
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
    var_13 = (unsigned short)65535;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */int) ((arr_0 [i_0] [i_0]) > (((/* implicit */unsigned long long int) var_2))))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_1 - 1])))));
                var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) -1585190167)), (((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_0 [i_1 + 1] [i_1 + 1])))));
                arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2532850270U)) ? (((/* implicit */int) (unsigned short)58416)) : (2147483623)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1])) <= (((/* implicit */int) (unsigned short)7099)))))) : (((((/* implicit */_Bool) (unsigned short)13706)) ? (70368744177663LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_2);
    var_17 = ((/* implicit */long long int) var_5);
    var_18 = ((/* implicit */int) var_0);
}
