/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130095
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
    var_18 = ((_Bool) var_13);
    var_19 = ((/* implicit */signed char) min(((+(var_12))), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) (!((_Bool)1)))))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_15))) ? (((/* implicit */unsigned long long int) var_1)) : (((unsigned long long int) 3707623013U))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((~(((int) (signed char)-57)))) : (((/* implicit */int) ((signed char) (-(-8578087789230277328LL)))))));
                arr_5 [i_1] = ((/* implicit */short) var_6);
            }
        } 
    } 
}
