/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183463
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (696694957) : (-833417823)))) && (((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-84))))));
                var_14 |= ((((/* implicit */long long int) ((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70)))))) <= (((((/* implicit */_Bool) 3216297922U)) ? (var_6) : (-1398137305189850863LL))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_4);
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)69)) ? (((((((/* implicit */int) (unsigned char)172)) <= (var_8))) ? (var_11) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) : (var_8)));
}
