/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16441
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) (~(var_10)));
                var_13 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_0 [i_1])), (8163438791049986015LL)));
                arr_6 [i_1] [i_1] |= ((/* implicit */unsigned short) -8163438791049986016LL);
                arr_7 [i_0] = ((/* implicit */signed char) max((((int) arr_2 [15] [i_0])), (((/* implicit */int) arr_4 [i_0] [(unsigned short)17]))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(var_9))), (((/* implicit */int) var_2))))) ? (min((5011621554302772529LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_11)) : (var_0)))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_15 = ((/* implicit */unsigned short) var_11);
    var_16 = ((unsigned short) var_2);
}
