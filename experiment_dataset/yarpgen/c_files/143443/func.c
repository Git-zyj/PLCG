/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143443
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
    var_19 &= ((/* implicit */unsigned short) (-(4359319U)));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -13LL)) ? (238318765U) : (6291456U)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
                arr_6 [i_0] = ((/* implicit */_Bool) ((unsigned short) (+(8138359136490926533ULL))));
                arr_7 [i_0] [i_1] = ((int) (_Bool)0);
                var_22 = ((/* implicit */_Bool) (-((~(2605881526U)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((_Bool) var_15));
}
