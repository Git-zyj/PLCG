/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106622
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
    var_14 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((int) (-(arr_2 [i_0] [i_0])))))));
                var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_3 [i_0])))) : (min((((/* implicit */long long int) var_5)), (arr_3 [i_0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_0)))));
    var_18 ^= var_5;
    var_19 ^= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_11))))))));
}
