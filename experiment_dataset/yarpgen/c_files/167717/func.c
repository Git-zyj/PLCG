/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167717
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
    for (short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = max((var_8), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 602952435)) ? ((-2147483647 - 1)) : (371617672))))));
                var_13 = ((((/* implicit */_Bool) arr_0 [i_1])) ? (min(((-(((/* implicit */int) (short)652)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))) : (((/* implicit */int) var_1)));
                var_14 = max((((/* implicit */long long int) (-((~(((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_7))))) : (arr_1 [i_0 - 2] [i_0 - 2]))));
                arr_5 [i_1] [i_1] [i_1] = ((_Bool) arr_4 [i_1]);
            }
        } 
    } 
    var_15 = ((/* implicit */short) min((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)11645)) : (var_4))), (((/* implicit */int) var_9)))), (max((-1202041478), (((/* implicit */int) min(((short)-11631), ((short)16852))))))));
}
