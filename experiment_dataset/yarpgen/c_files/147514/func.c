/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147514
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_2 - 2] = ((/* implicit */int) arr_0 [i_0] [i_0]);
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_2 + 2] [(unsigned char)1])) ? (((/* implicit */int) arr_3 [i_2 + 2] [14ULL] [i_2])) : (((/* implicit */int) arr_3 [i_2 + 2] [i_2] [i_2 - 2])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_2 + 2])) : (((/* implicit */int) arr_3 [i_2] [i_2 - 2] [i_2 - 1])))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) - (var_8)))) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14)))) << (((((/* implicit */int) var_3)) + (51))))) : (((/* implicit */int) var_11)))))));
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_8))))))));
}
