/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170150
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
    var_11 = ((/* implicit */unsigned int) ((unsigned long long int) (~(((var_4) ^ (((/* implicit */long long int) var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_12 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_1 [i_0] [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-5142908604297418424LL)));
                var_13 = ((/* implicit */int) (+(((unsigned long long int) ((((/* implicit */_Bool) (short)-19320)) ? (881893796U) : (var_10))))));
                arr_8 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
            }
        } 
    } 
}
