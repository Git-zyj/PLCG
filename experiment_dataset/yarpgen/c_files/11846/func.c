/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11846
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) arr_4 [i_0]);
                    var_18 = ((/* implicit */unsigned int) max((var_18), (max((((unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) min((((((/* implicit */int) (signed char)110)) > (((/* implicit */int) arr_6 [(_Bool)1])))), ((_Bool)1))))))));
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((unsigned short) var_14))) ? (4060053965U) : (((/* implicit */unsigned int) max((var_8), (((/* implicit */int) var_12))))))) : (var_6));
}
