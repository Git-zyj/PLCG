/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (+-2147483647);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (arr_1 [i_0] [i_1])));
                var_17 = (max(-8126464, 0));
                var_18 *= -4286840818;
                var_19 += 1954477869;
            }
        }
    }
    var_20 = var_14;
    var_21 = (~var_7);
    var_22 = ((((((8126464 <= var_4) << ((((1954477883 ? 2184426681497163617 : var_12)) - 2184426681497163602))))) ? var_3 : (((var_3 >= (((var_4 + 2147483647) << (1954477888 - 1954477888))))))));
    #pragma endscop
}
