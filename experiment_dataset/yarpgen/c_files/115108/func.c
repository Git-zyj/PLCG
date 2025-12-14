/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115108
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
    var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
    var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)23903))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_14 = ((((((/* implicit */int) (short)32767)) <= (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) (short)23903))))))) ? (11491545170297186532ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_0] [i_1 - 2]))))));
                var_15 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1]))))), ((-(((/* implicit */int) arr_3 [i_0]))))));
            }
        } 
    } 
}
