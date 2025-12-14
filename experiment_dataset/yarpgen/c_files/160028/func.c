/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160028
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
    var_10 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_11 ^= ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) (_Bool)1))), (((var_0) | (((/* implicit */int) arr_0 [i_1]))))));
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (_Bool)1)))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_6))));
            }
        } 
    } 
    var_13 = ((((((/* implicit */_Bool) (unsigned short)31443)) ? (-842823211) : (1641345516))) ^ (((/* implicit */int) var_1)));
}
