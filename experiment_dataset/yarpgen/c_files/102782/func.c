/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102782
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
    var_10 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) 2730592832977448882ULL))) + (2147483647))) >> (((var_9) - (152526631)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 &= arr_0 [i_1 - 1];
                var_12 &= ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
                arr_6 [i_0] = ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)6397)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_1 - 1]), (((/* implicit */unsigned short) var_5))))))));
                arr_7 [(signed char)3] [i_0] [i_1] &= ((/* implicit */_Bool) arr_5 [i_0]);
                var_13 = ((/* implicit */unsigned int) min((min(((-(var_9))), (((/* implicit */int) (short)-6397)))), ((((~(((/* implicit */int) var_6)))) | ((~(((/* implicit */int) (short)-6397))))))));
            }
        } 
    } 
}
