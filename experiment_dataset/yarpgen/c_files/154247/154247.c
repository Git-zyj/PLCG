/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 ^= ((((1478772921070633876 > 196) > (128 >= var_6))));
                var_18 = (min(var_18, (((-((1478772921070633888 ? 23533 : ((1478772921070633859 ? 1 : 132)))))))));
            }
        }
    }
    var_19 &= (var_7 == (max((var_10 << var_10), ((229 ? var_1 : 1)))));
    var_20 ^= (17592161449721226770 ^ 1);
    var_21 *= (min(-var_4, -32616));
    #pragma endscop
}
