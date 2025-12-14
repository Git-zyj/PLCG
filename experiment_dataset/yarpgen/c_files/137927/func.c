/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137927
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
    var_20 = ((/* implicit */short) var_9);
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min(((+(var_11))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-23119)), ((unsigned short)61056)))))))));
    var_22 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
    var_23 = ((/* implicit */short) ((long long int) ((unsigned long long int) var_3)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0 + 2] = ((/* implicit */unsigned int) max((arr_0 [i_0]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (6806676736531572048LL) : (((/* implicit */long long int) var_3))))) ? (((unsigned long long int) var_18)) : (min((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) var_12))))))));
                var_24 = ((/* implicit */short) (((-(((arr_3 [i_1] [i_1] [i_1]) & (arr_3 [i_0] [i_1] [i_1]))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0 + 3] [i_0 - 2] [i_0 + 3])))))));
            }
        } 
    } 
}
