/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150587
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)16))) ^ (min((var_10), (var_10)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((1922411371U) << ((((((-2147483647 - 1)) - (-2147483645))) + (16))))))) ? ((~(((/* implicit */int) (signed char)-97)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((1409182107) << (((((arr_0 [i_0] [i_1]) + (1128134116))) - (10)))))))))));
                arr_4 [i_0] = ((/* implicit */int) (signed char)45);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) 1944285493);
}
