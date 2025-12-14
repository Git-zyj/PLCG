/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182791
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
    for (long long int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)200))));
                var_19 = ((/* implicit */short) ((long long int) max(((unsigned char)201), ((unsigned char)200))));
            }
        } 
    } 
    var_20 = var_14;
}
