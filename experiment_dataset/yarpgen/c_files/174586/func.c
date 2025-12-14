/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174586
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
    var_16 = ((/* implicit */_Bool) var_9);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] = ((/* implicit */unsigned int) var_0);
                    arr_9 [i_2] [i_1] [4U] = ((/* implicit */_Bool) 96021454U);
                    var_17 -= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (2510908201U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)37)) < (((/* implicit */int) var_7))))))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = min(((((!(((/* implicit */_Bool) (signed char)17)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) : (4198945851U))), (max((((((/* implicit */_Bool) 406917575U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (96021451U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)-102)), ((unsigned short)60433)))))));
                    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
}
