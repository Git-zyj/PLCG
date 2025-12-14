/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169086
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 = (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_1 + 2] [i_0])))) : (min((arr_0 [i_1 - 2]), (((/* implicit */long long int) var_4)))))));
                arr_5 [i_0] [i_0] [i_1] = ((((/* implicit */long long int) ((int) arr_4 [i_1] [i_0] [i_0]))) / (max((((arr_1 [i_0] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((_Bool) arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_2))));
}
