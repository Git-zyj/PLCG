/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116313
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_0))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) arr_0 [(unsigned short)3] [i_0]);
                var_18 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_3)) > (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_0 [i_1] [i_0])))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
            }
        } 
    } 
}
