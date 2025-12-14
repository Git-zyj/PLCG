/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147777
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
    var_11 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0])) ? (arr_2 [(unsigned short)3] [(unsigned short)3] [i_1]) : (arr_2 [i_0] [i_0] [i_1])))) && (((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1]))));
                var_13 += ((/* implicit */unsigned int) ((_Bool) (_Bool)0));
            }
        } 
    } 
}
