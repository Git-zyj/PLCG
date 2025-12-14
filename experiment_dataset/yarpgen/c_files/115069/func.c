/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115069
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_1] [7ULL] [i_0] = ((/* implicit */long long int) arr_4 [i_0] [(_Bool)1] [i_1]);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(arr_0 [i_1] [i_0]))), (((/* implicit */int) ((arr_2 [i_1]) || (((/* implicit */_Bool) var_6)))))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)3)) >> (((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) + (18409))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_2)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */unsigned int) var_9))))))))));
}
