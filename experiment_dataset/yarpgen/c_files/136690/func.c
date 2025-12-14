/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136690
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
    for (short i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 3] = ((/* implicit */short) 47053847U);
                arr_6 [(unsigned char)22] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_7)))));
                arr_7 [i_0 - 4] [i_1 - 1] [18ULL] = ((/* implicit */unsigned int) var_0);
            }
        } 
    } 
    var_10 = ((/* implicit */int) (!(((_Bool) max((((/* implicit */short) var_0)), ((short)(-32767 - 1)))))));
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) var_6))));
}
