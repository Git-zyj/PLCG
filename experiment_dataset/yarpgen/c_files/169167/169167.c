/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_20 = (min(var_8, (arr_3 [i_0] [i_0])));
                var_21 = (arr_4 [i_0] [i_0]);
                arr_6 [i_1 - 2] = -66;
                arr_7 [i_0] = ((-1 ? 0 : -1));
            }
        }
    }
    var_22 = (((216 > 4065136227174997611) ? (min(12, 62446)) : var_7));
    var_23 = ((var_13 ? ((((((var_10 << (var_0 - 108015059)))) ? var_17 : var_2))) : (~var_7)));
    var_24 = 65535;
    #pragma endscop
}
