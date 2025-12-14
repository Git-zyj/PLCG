/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138267
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
    var_10 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(_Bool)0] [i_1] = ((/* implicit */unsigned long long int) arr_0 [(unsigned char)4]);
                arr_6 [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 - 1]))))))))) != (min((((/* implicit */unsigned int) arr_0 [i_1 - 1])), (587768486U)))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) var_2);
}
