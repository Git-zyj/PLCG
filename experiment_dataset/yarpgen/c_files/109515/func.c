/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109515
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
    var_10 *= ((/* implicit */_Bool) var_6);
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((min((12U), (((/* implicit */unsigned int) (short)25668)))) & (var_8))))));
    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (signed char)-73);
                arr_5 [i_0] [i_0] [1ULL] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (((+(var_9))) != (((/* implicit */unsigned long long int) (-(207896832))))))), ((+(max((((/* implicit */unsigned long long int) (short)-25669)), (var_4)))))));
            }
        } 
    } 
}
