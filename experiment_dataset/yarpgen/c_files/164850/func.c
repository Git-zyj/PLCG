/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164850
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1 + 1]);
                arr_9 [i_0] [i_1 - 3] [(unsigned short)4] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) -6702083383396145684LL)) ? (1152921504472629248LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22741))))));
                arr_10 [i_0] = ((/* implicit */unsigned int) arr_7 [(unsigned short)14] [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((-4178500407078707031LL), (((/* implicit */long long int) var_11))));
}
