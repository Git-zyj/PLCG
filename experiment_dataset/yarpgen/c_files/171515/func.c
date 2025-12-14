/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171515
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)5147)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)94))));
                var_20 += ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (max((((/* implicit */unsigned long long int) 3872356188U)), (var_5))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) | (var_6)));
}
