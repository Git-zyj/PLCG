/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152586
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) % (((/* implicit */int) var_5))));
    var_15 = ((/* implicit */int) max((var_0), (((/* implicit */unsigned int) (~(((/* implicit */int) min(((unsigned short)3718), (((/* implicit */unsigned short) var_4))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 -= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_2 [i_1] [i_1] [3])))))))));
                var_17 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) var_11))) >> (((max((arr_0 [(signed char)0]), (((/* implicit */long long int) 2984488819U)))) - (5595543852390016520LL))))) >= ((+(((/* implicit */int) arr_3 [i_0]))))));
            }
        } 
    } 
}
