/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109973
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (~(max((var_1), (((/* implicit */long long int) -359602227)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((int) ((arr_3 [i_1 + 4]) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 1])))));
                var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) (short)-7)))))));
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_0);
}
