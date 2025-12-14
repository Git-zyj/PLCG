/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_10 | var_4) + 2147483647)) >> (var_14 + 3132974383416724407)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_17 = ((((min((-32767 - 1), 4172868841))) ? ((var_11 ? var_14 : var_12)) : (var_11 ^ var_8)));
                var_18 = (((((4172868841 ? 15036118010950103514 : (min(3614657414212174348, 18446744073709551615))))) ? (((var_8 + var_3) + var_7)) : (((min((var_4 > var_2), (min(var_3, var_4))))))));
                var_19 = (max(var_19, var_14));
            }
        }
    }
    #pragma endscop
}
