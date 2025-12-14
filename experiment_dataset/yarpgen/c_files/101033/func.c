/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101033
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
    var_20 = ((/* implicit */int) min((var_20), ((-(((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [i_0 - 1]), (var_0)))) ? (((/* implicit */int) min((arr_4 [i_0 + 2]), (arr_4 [i_0 + 2])))) : (((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_4 [i_0 + 2]))))));
                var_21 = ((/* implicit */_Bool) arr_1 [i_0 + 1]);
                var_22 = arr_0 [i_1] [i_0];
                arr_7 [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0]))));
            }
        } 
    } 
}
