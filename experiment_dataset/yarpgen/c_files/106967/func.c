/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106967
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
    var_11 &= ((/* implicit */signed char) (+((+(-3024364892592898224LL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [(unsigned char)16] [i_0] [i_0] = (!(((/* implicit */_Bool) (+((~(arr_0 [i_0])))))));
                var_12 = ((/* implicit */signed char) (~((+((+(((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                var_13 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (-((-(3531751273667351016LL))))))));
                arr_5 [i_0] [i_0] [i_0 - 1] = ((/* implicit */short) (~((~((~(-3024364892592898224LL)))))));
            }
        } 
    } 
}
