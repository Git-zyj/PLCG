/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140360
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((unsigned long long int) 524287U)) : ((~(var_11))))) & (((/* implicit */unsigned long long int) (~((~(524291U)))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) ((long long int) (~(((unsigned int) var_4)))));
                    var_16 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_5 [(signed char)20] [(signed char)20] [(signed char)16])) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) var_6))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
}
