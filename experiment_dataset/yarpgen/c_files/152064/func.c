/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152064
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
    var_11 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_9)))) + (((/* implicit */int) var_9))));
    var_12 = ((/* implicit */int) ((unsigned char) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))) : (((((/* implicit */_Bool) var_5)) ? (var_8) : (var_8))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) ((int) ((arr_0 [i_1 - 2] [i_1 - 3]) / (arr_0 [i_1 + 1] [i_1 - 1]))));
                var_14 ^= ((/* implicit */int) arr_5 [i_0] [11ULL]);
                arr_6 [i_0] [i_1 - 4] = ((/* implicit */_Bool) arr_2 [i_1 - 1]);
            }
        } 
    } 
    var_15 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_7))))))) < (var_4));
}
