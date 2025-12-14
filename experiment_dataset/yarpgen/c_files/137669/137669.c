/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_1 / 65511) ? ((237 ? var_10 : -1780825687858587822)) : 275502875))) ? ((var_8 | (((894 ? var_12 : var_12))))) : var_1);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] = min(((((min(var_13, 4019464421))) ? 0 : var_12)), 0);
                var_16 ^= ((-(((arr_3 [i_0 + 2] [i_0 - 2] [i_0 + 3]) ? (arr_3 [i_0 + 3] [i_0 - 1] [i_0 + 2]) : (arr_1 [i_0 + 1])))));
                var_17 |= (max(16050327278166830085, ((max(54296, -1622914207)))));
            }
        }
    }
    var_18 = (!((((var_2 + 2147483647) << (var_12 - 20080)))));
    var_19 *= (max(var_6, var_10));
    #pragma endscop
}
