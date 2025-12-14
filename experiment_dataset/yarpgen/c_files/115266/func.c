/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115266
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((((var_9) & (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (_Bool)1))));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_1))));
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) ((unsigned char) arr_1 [i_1]))))))));
                    var_15 |= ((/* implicit */unsigned char) arr_4 [i_0]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_10);
    var_17 = ((/* implicit */int) max((((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (_Bool)1))))) ? (((long long int) var_11)) : (min((9223372036854775807LL), (var_5))))), (((/* implicit */long long int) (unsigned char)137))));
    var_18 = ((/* implicit */unsigned char) var_4);
}
