/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106794
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) (signed char)88))))))));
                var_16 += ((/* implicit */_Bool) var_6);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) 7388686072028917652LL)), (13593687155877382011ULL)))));
}
