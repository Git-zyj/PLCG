/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133955
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) max(((+(min((1073741824U), (((/* implicit */unsigned int) arr_0 [i_0])))))), (((/* implicit */unsigned int) min((arr_1 [i_1]), (arr_1 [i_0]))))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */int) ((unsigned long long int) max((7042378645340395484LL), (((long long int) arr_3 [i_0])))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((_Bool) (signed char)127));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_9), (((var_8) & (((/* implicit */long long int) 1346858564U))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-31848))));
}
