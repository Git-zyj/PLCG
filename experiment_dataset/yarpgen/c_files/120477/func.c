/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120477
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
    var_19 = ((/* implicit */int) ((_Bool) ((long long int) ((int) var_17))));
    var_20 -= ((unsigned char) ((unsigned char) ((int) var_6)));
    var_21 = ((/* implicit */unsigned long long int) ((_Bool) ((short) ((short) (unsigned short)62887))));
    var_22 = ((/* implicit */int) ((unsigned short) ((short) ((unsigned long long int) var_6))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((long long int) ((_Bool) (short)11889))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned char) ((int) (short)13360)));
            }
        } 
    } 
}
