/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112630
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_3 [i_1])))) + (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_1 - 1])))) : (((min((((/* implicit */long long int) (short)(-32767 - 1))), (var_13))) % (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */signed char) var_9))))))))));
                var_21 -= ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (min(((unsigned short)14296), (((/* implicit */unsigned short) var_2)))))), (((/* implicit */unsigned short) ((signed char) arr_3 [i_0])))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)51236)) ? (((/* implicit */int) arr_1 [i_1 - 3])) : (((/* implicit */int) var_11))))), (((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 2])))))));
            }
        } 
    } 
    var_22 = (~((-(var_4))));
}
