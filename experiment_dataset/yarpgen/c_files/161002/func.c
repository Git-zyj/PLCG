/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161002
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
    var_11 = var_1;
    var_12 ^= ((((/* implicit */unsigned long long int) max((2350511523U), (max((1944455798U), (((/* implicit */unsigned int) var_4))))))) > (((17405409764723313628ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30160))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_2 [i_1] [i_0])) : (2350511498U)))) ? ((-(arr_2 [i_0] [i_1]))) : (((/* implicit */int) ((arr_2 [i_1] [i_0]) > (arr_2 [i_0] [i_1]))))));
                var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(-1631816925)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (2350511522U)))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [2ULL] [i_1])) ? (((/* implicit */int) (signed char)40)) : (-650514166)))))) : (2350511540U)));
            }
        } 
    } 
}
