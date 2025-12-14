/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127040
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
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)7529)) && (((/* implicit */_Bool) 2147483647)))) ? (((((/* implicit */_Bool) min(((short)63), (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)51)) - (var_0)))) : (max((-8150518038858922886LL), (((/* implicit */long long int) var_12)))))) : (((/* implicit */long long int) ((/* implicit */int) (((~(1639144131U))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                arr_6 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 12038298273070091505ULL))));
                arr_7 [(short)18] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-71))));
            }
        } 
    } 
    var_15 = max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */long long int) var_5)))))), ((-(((/* implicit */int) (short)-57)))));
    var_16 = ((/* implicit */unsigned long long int) var_13);
}
