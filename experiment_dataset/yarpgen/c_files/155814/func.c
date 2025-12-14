/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155814
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
    var_17 = ((((/* implicit */unsigned int) (~(((/* implicit */int) (((_Bool)1) || (var_5))))))) > (((unsigned int) -1)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_18 = (short)15879;
                    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_2 + 4])) ? ((~(((/* implicit */int) (short)0)))) : (((/* implicit */int) (_Bool)0)))))));
                    var_20 ^= (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_2))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) 1563633856U);
}
