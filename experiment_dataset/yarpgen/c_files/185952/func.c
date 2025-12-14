/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185952
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_0]))));
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_1))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_9);
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) var_8)))))));
    var_16 |= ((((/* implicit */int) (((-(5997956661465964114ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_11)), (var_6)))))))) - (((((/* implicit */_Bool) ((unsigned int) 5997956661465964131ULL))) ? (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_7))))) : (((/* implicit */int) var_10)))));
}
