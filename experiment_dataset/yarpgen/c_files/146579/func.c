/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146579
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
    var_13 = ((/* implicit */signed char) (+(4294967267U)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))) : (((((/* implicit */int) arr_0 [i_0] [i_1])) >> (((var_7) - (1129401012U)))))));
                var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) arr_1 [i_0]))));
            }
        } 
    } 
}
