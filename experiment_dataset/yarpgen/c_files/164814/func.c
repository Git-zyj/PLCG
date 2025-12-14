/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164814
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
    var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 12713584477427381070ULL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_8))));
                var_15 |= (-(min((((/* implicit */long long int) arr_3 [i_0 - 1] [i_0 - 1] [i_1 - 1])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 1]))) : (6807987463590837090LL))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_8);
    var_17 = ((/* implicit */signed char) -3103232235815942042LL);
}
