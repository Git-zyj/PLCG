/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122687
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))) >= (arr_3 [(unsigned short)8] [i_1]))))));
                var_22 = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64719))))) & (((/* implicit */int) arr_0 [i_0])));
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)23138)));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_11))) <= (var_13)))) & (var_1)));
}
