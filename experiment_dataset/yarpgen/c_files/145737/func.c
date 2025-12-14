/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145737
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
    var_14 = var_13;
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            {
                var_15 = ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0] [i_1 - 4])) : (((/* implicit */int) var_12)))))))) : (((/* implicit */int) (_Bool)1)));
                arr_5 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) -1424962313);
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 4])) ? (var_2) : (((/* implicit */unsigned long long int) 0))))) ? ((+(((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_1]))))) : (((/* implicit */int) min((((var_1) <= (arr_2 [i_1]))), (arr_4 [i_1]))))));
            }
        } 
    } 
}
