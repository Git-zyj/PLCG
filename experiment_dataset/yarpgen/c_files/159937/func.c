/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159937
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] [(unsigned char)5] = ((/* implicit */unsigned char) 2949199048U);
                var_18 += ((/* implicit */int) arr_3 [(short)10] [(_Bool)1] [i_1 + 1]);
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned char) ((signed char) (short)-26460));
}
