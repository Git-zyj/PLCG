/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146765
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
    var_20 = ((/* implicit */unsigned long long int) var_19);
    var_21 = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (((var_17) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))));
    var_22 = ((/* implicit */unsigned long long int) (~((~(var_4)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_23 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_1 [i_0 + 1] [i_0 + 1]))))));
                var_24 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) || ((!(((/* implicit */_Bool) arr_0 [(signed char)8] [i_0])))))) || ((_Bool)1)));
                var_25 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) ((unsigned short) (short)-3281))))) - (((((/* implicit */_Bool) (short)-3281)) ? (((/* implicit */int) (short)-3281)) : (((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
}
