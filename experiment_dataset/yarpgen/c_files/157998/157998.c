/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (min(var_1, (~18446744073709551615)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = 26374;
                var_19 = 26393;
                arr_6 [i_0] = max(((min((arr_3 [i_0] [i_0 - 3]), (arr_5 [i_0] [4] [i_0])))), 4128768);
                arr_7 [i_0] [i_0] = var_7;
                var_20 |= ((min(18446744073709551615, 8187073044377416872)));
            }
        }
    }
    var_21 = var_7;
    #pragma endscop
}
