/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172002
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (var_5) : ((~((~(var_12)))))));
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (+(((/* implicit */int) var_4)))))));
    var_16 = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */long long int) 1427994714U)))), (((/* implicit */long long int) var_4))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */short) max((-6529263919164349336LL), (((/* implicit */long long int) (_Bool)0))));
                    var_17 &= ((long long int) ((unsigned long long int) arr_4 [i_0] [i_0] [i_1 - 1] [i_1 - 1]));
                }
            } 
        } 
    } 
}
