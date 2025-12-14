/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104823
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? ((+(((/* implicit */int) arr_1 [i_1] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (arr_5 [i_1]))))))));
                var_21 = ((/* implicit */unsigned long long int) (-(max((arr_4 [i_1]), (((/* implicit */long long int) min((var_6), (((/* implicit */int) arr_1 [i_0] [i_1])))))))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0])), (var_0)))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27100)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))))));
}
