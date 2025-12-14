/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166360
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) min((4046886427096609626ULL), (((/* implicit */unsigned long long int) var_8)))))) | (((/* implicit */int) var_1))));
    var_20 = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) var_10)) : (9223372036854775807LL))) | (((/* implicit */long long int) var_3))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_10), (((/* implicit */int) var_9))))) ? ((+(((((/* implicit */_Bool) 1125899906841600ULL)) ? (5343495292138634726ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                var_22 = ((/* implicit */int) ((4046886427096609626ULL) | (((/* implicit */unsigned long long int) 730422723))));
                var_23 = ((/* implicit */long long int) (-(arr_3 [i_0 + 4] [i_1])));
                arr_6 [i_0 + 1] = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) var_3)) - (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_1]))) ^ (var_18)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
}
