/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130253
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 = ((signed char) ((unsigned short) (signed char)-59));
                arr_6 [i_0] [(unsigned short)6] = ((/* implicit */unsigned short) (signed char)-73);
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (157359372U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-72)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4137607923U)))));
            }
        } 
    } 
}
