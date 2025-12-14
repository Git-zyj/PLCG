/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132474
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
    var_10 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (var_3)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) (~(11914155566071179907ULL)));
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_4 [i_0]);
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((_Bool) var_4)) || (((/* implicit */_Bool) var_0)))))));
    var_13 = ((/* implicit */_Bool) 8610485923594553454LL);
}
