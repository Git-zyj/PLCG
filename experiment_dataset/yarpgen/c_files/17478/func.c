/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17478
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */signed char) 1706722081U);
        var_19 = min((2588245230U), (1706722076U));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_5 [i_1] = max((max(((~(2588245220U))), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-35)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned short)6])))))))));
        var_20 -= ((/* implicit */unsigned int) arr_1 [4U]);
        arr_6 [i_1] [i_1] |= ((/* implicit */unsigned short) var_6);
    }
    var_21 = ((/* implicit */unsigned long long int) var_13);
    var_22 = (~((+((~(2095935964U))))));
}
