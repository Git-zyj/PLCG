/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126974
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
    var_10 = ((/* implicit */short) ((var_5) + ((+(((((/* implicit */unsigned long long int) var_8)) * (var_5)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) (((~(arr_1 [i_0] [i_1 + 3]))) <= (((((/* implicit */_Bool) arr_1 [(unsigned char)10] [i_1 + 3])) ? (arr_1 [11ULL] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 3])))))));
                arr_6 [(unsigned short)15] [(signed char)2] = ((/* implicit */unsigned short) arr_0 [i_0]);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */int) var_1))))) >= (var_3))))));
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((var_3) / (var_0))))));
}
