/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180993
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
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_9))));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) == (var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_6)))))))) / ((-(14389642848176231132ULL)))));
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_9))));
                var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_1] [i_0]), (arr_1 [i_0] [i_1])))) ? (var_11) : (((/* implicit */long long int) var_17))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_13);
}
