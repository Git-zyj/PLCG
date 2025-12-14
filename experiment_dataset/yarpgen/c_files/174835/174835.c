/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 3331747919;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_17 ^= (((((-3353051371755142049 ? ((max(var_14, var_11))) : 0))) ? 1 : ((-(min(0, 2834065759284102189))))));
                arr_5 [i_0] [19] = var_1;
                var_18 = ((((((var_12 | 3010488569) ? ((5744 ? var_2 : var_13)) : (0 / var_5)))) ? 17383571360828996923 : ((((5669248758084675545 ? var_14 : var_10))))));
                var_19 = (min(1, (var_0 ^ var_4)));
            }
        }
    }
    #pragma endscop
}
