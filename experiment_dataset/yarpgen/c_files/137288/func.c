/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137288
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) | (arr_3 [i_0] [i_1] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (((/* implicit */long long int) var_15))))) ? (arr_3 [i_1] [i_0] [i_0]) : (((/* implicit */unsigned int) (~(arr_1 [i_0])))))) : (((/* implicit */unsigned int) (~((~(arr_4 [i_0] [i_0] [i_1])))))))))));
                arr_5 [i_1] = arr_3 [(unsigned short)4] [(unsigned short)4] [i_1 + 1];
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_2);
}
